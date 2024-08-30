/***********************************************************************
The Mouse.move(a, b, c) function in Arduino is used to control the movement of the mouse cursor. 
It has three parameters:
      a (x-axis): This parameter controls the horizontal movement of the mouse. 
        Positive values move the cursor to the right, while negative values move it to the left.
      b (y-axis): This parameter controls the vertical movement of the mouse. 
        Positive values move the cursor down, while negative values move it up.
      c (wheel): This parameter controls the scroll wheel movement. 
        Positive values scroll up, while negative values scroll down.
 Example code by bing
 ***************************************************************/

#include "Mouse.h"

void setup() {  
  Mouse.begin();
}

void loop() {
  int x = analogRead(A1);
  int y = analogRead(A2);
  Serial.print("X= ");
  Serial.println(x);
  Serial.print("Y= ");
  Serial.println(y);
  

  if(y<10){
    if(x<10){
      Mouse.move(-8,-8,0);
    }
    else if(x>1000){
      Mouse.move(8,-8,0);
    }
    else{
      Mouse.move(0,-8,0);
    }
  }
  else if(y>1000){
    if(x<10){
      Mouse.move(-8,8,0);
    }
    else if(x>1000){
      Mouse.move(8,8,0);
    }
    else{
      Mouse.move(0,8,0);
    }
  }
  else if(x>1000){
    Mouse.move(8,0,0);
  }
  else if(x<10){
    Mouse.move(-8,0,0);
  }

  delay(10);
  
  // Calling the Mouse.Move() function:
//  for (int i = 0; i < 80; i++)
//  {
//    Mouse.move(0,8,0);
//    delay(10);
//  }


}
