#include <Wire.h> // Header file
#define MCP9808_1_I2C_ADDRESS 0x1C// Change the device address to what you configured.
#define MCP9808_2_I2C_ADDRESS 0x19

void setup() {
  Serial.begin(9600);//To render temperature in serial monitor
  Wire.begin();
  configureMCP9808(MCP9808_1_I2C_ADDRESS);
  configureMCP9808(MCP9808_2_I2C_ADDRESS);
}
void loop() {
  // Read temperature from MCP9808_1
  readTemperature(MCP9808_1_I2C_ADDRESS);
  readTemperature(MCP9808_2_I2C_ADDRESS);
  delay(1000); // Wait for 1 second before the next reading
}

//Configure your MCP9808 to Enable Output Alert
void configureMCP9808(int address) {
  Wire.beginTransmission(address);
  Wire.write(0x01);
  Wire.write(0x00);
  Wire.write(0x08);
  Wire.endTransmission();
}

//Read temperature value from TA register 
//Hint following the timing diagram in Figure 5-5 of MCP9808 datasheet.
void readTemperature(int address) {
  Wire.beginTransmission(address);
  Wire.write(0x05);
  Wire.endTransmission();
  Wire.requestFrom(address,2);
  float temperature;
  char a;
  if(Wire.available()>=2){
    char a = Wire.read();
    char b = Wire.read();
    //temp = ((a<<8)|b)&0x0FFF;
    a &= 0x1F;

    // Check if temperature is negative
    if (a & 0x10) { // If bit 4 of a is 1, temperature is negative
      a &= 0x0F;  // Clear the SIGN bit
      temperature = 256 - ((a * 16) + (b / 16.0));
    } else { // Positive temperature
      temperature = (a * 16) + (b / 16.0);
    }
  }
  /*
  float rtemp = temp * 0.0625;

  if(a & 0x10){
    rtemp = 256 - rtemp;
  }*/
  
  Serial.println(temperature+8);
}
