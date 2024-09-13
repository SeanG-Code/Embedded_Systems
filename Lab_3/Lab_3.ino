#define STBY 10
#define AN1 12 // Left
#define AN2 11 // Left GND
#define BN1 9  // Right
#define BN2 8  // Right GND

void setup() 
{
  Serial.begin(9600);
  Serial.println("Welcome to ECE 1200");
  Serial.println("This is StampS3!");
  delay(2000);

  pinMode(STBY, OUTPUT);
  digitalWrite(STBY, HIGH);
  pinMode(AN2, OUTPUT);
  digitalWrite(AN2, LOW);
  pinMode(BN2, OUTPUT);
  digitalWrite(BN2, LOW);

  pinMode(BN1, OUTPUT);
  pinMode(AN1, OUTPUT);
}

void loop() 
{
  digitalWrite(BN1, HIGH);
  //digitalWrite(AN1, HIGH);

  delay(3000);
  
  digitalWrite(BN1, LOW);
  //digitalWrite(AN1, LOW);

  delay(1000);
}
