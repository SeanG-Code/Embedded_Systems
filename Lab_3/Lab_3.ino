#define STBY 10
#define AN1 12 // Right
#define AN2 11 // Right GND
#define BN1 9  // Left
#define BN2 8  // Left GND

void setup() 
{
  Serial.begin(9600);
  Serial.println("Welcome to ECE 1200");
  Serial.println("This is StampS3!");
  delay(2000);

  pinMode(STBY, OUTPUT);
  digitalWrite(STBY, HIGH);
  pinMode(AN2, OUTPUT);
  analogWrite(AN2, 0);
  pinMode(BN2, OUTPUT);
  analogWrite(BN2, 0);

  pinMode(BN1, OUTPUT);
  pinMode(AN1, OUTPUT);
}

void loop() 
{
  //Straight Movement
  /*
  analogWrite(BN1, 820);
  analogWrite(AN1, 750);

  delay(3000);
  
  analogWrite(BN1, 0);
  analogWrite(AN1, 0);

  delay(1000);
  */

  /*
  //left turn moving
  analogWrite(AN1, 750);
  analogWrite(BN1, 0);
  delay(sRight);
  analogWrite(AN1, 0);
  analogWrite(BN1, 0);

  delay(3000);
  //right turn moving
  analogWrite(AN1, 0);
  analogWrite(BN1, 820);
  delay(650);
  analogWrite(AN1, 0);
  analogWrite(BN1, 0);

  delay (3000);
  */

  /*
  //left inplace
  analogWrite(AN1, 750);
  analogWrite(BN2, 820);
  delay(400);
  analogWrite(AN1, 0);
  analogWrite(BN2, 0);

  delay(3000);

  //right in place
  analogWrite(AN2, 750);
  analogWrite(BN1, 820);
  delay(400);
  analogWrite(AN2, 0);
  analogWrite(BN1, 0);

  delay (3000);
  */

  //180
  /*
  analogWrite(AN1, 750);
  analogWrite(BN2, 820);
  delay(sRight);
  analogWrite(AN1, 0);
  analogWrite(BN2, 0);

  delay (3000);
  */

  // PATH

  int timeStraight = 4000;
  int timeStraightS = 1333;
  int d = 2000;
  int sRight = 175;
  int sLeft = 920;
  //straight

  analogWrite(BN1, sLeft);
  analogWrite(AN1, sRight);

  delay(timeStraight);
  
  analogWrite(BN1, 0);
  analogWrite(AN1, 0);

  delay(d);

  //Left 90
  analogWrite(AN1, 750);
  analogWrite(BN2, 820);
  delay(300);
  analogWrite(AN1, 0);
  analogWrite(BN2, 0);

  delay(d);

  //short straight

  analogWrite(BN1, sLeft);
  analogWrite(AN1, sRight);

  delay(timeStraightS);
  
  analogWrite(BN1, 0);
  analogWrite(AN1, 0);

  delay(d);

  //Left 90

  analogWrite(AN1, 750);
  analogWrite(BN2, 820);
  delay(300);
  analogWrite(AN1, 0);
  analogWrite(BN2, 0);

  delay(d);

  //straight

  analogWrite(BN1, sLeft);
  analogWrite(AN1, sRight);

  delay(timeStraight);
  
  analogWrite(BN1, 0);
  analogWrite(AN1, 0);

  delay(d);

  //180

  analogWrite(AN1, 750);
  analogWrite(BN2, 820);
  delay(600);
  analogWrite(AN1, 0);
  analogWrite(BN2, 0);

  delay (d);

  //straight

  analogWrite(BN1, sLeft);
  analogWrite(AN1, sRight);

  delay(timeStraight);
  
  analogWrite(BN1, 0);
  analogWrite(AN1, 0);

  delay(d);

  //right 90

  analogWrite(AN2, 750);
  analogWrite(BN1, 820);
  delay(425);
  analogWrite(AN2, 0);
  analogWrite(BN1, 0);

  delay (d);

  //short straight

  analogWrite(BN1, sLeft);
  analogWrite(AN1, sRight);

  delay(timeStraightS);
  
  analogWrite(BN1, 0);
  analogWrite(AN1, 0);

  delay(d);

  //right 90

  analogWrite(AN2, 750);
  analogWrite(BN1, 820);
  delay(370);
  analogWrite(AN2, 0);
  analogWrite(BN1, 0);

  delay (d);

  //straight

  analogWrite(BN1, sLeft);
  analogWrite(AN1, sRight);

  delay(timeStraight);
  
  analogWrite(BN1, 0);
  analogWrite(AN1, 0);

  delay(d);

  delay(10000);
}
