#include "Keyboard.h"
#include "HID.h"

void setup() {
  Serial1.begin(115200);
  Keyboard.begin();
}

void loop() {
  char c = Serial1.read();
  
  //Acelerator
  if (c == 'a') {
    Keyboard.press(KEY_UP_ARROW);
  }

  if (c == 'b') {
    Keyboard.release(KEY_UP_ARROW);
  }

  //Freio
  if (c == 'c') {            
    Keyboard.press(KEY_DOWN_ARROW);             
  }
  if (c == 'd') {
    Keyboard.release(KEY_DOWN_ARROW);
  }
  

  //Ré
  if (c == 'e') {      
    //0x2c = ","      
    Keyboard.releaseAll();             
  }/*
  if (c == 'f') {
    Keyboard.releaseAll();
  }*/


  
  //H1 "'"
  if (c == 'g') {     
    Keyboard.release(0x5B);
    Keyboard.release(0x27);
    Keyboard.release(0x5D);
    Keyboard.release(0x3B);
    Keyboard.release(0x2F);

    delay(100);
    Keyboard.press(0x60);
  }

  //H2 "´"
  if (c == 'i') {  
    Keyboard.release(0x60);
    Keyboard.release(0x27);
    Keyboard.release(0x5D);
    Keyboard.release(0x3B);
    Keyboard.release(0x2F);

    delay(100);          
    Keyboard.press(0x5B);             
  }
  //H3 "~"
  if (c == 'k') {  
    Keyboard.release(0x5B);
    Keyboard.release(0x60);
    Keyboard.release(0x5D);
    Keyboard.release(0x3B);
    Keyboard.release(0x2F);

    delay(100);          
    Keyboard.press(0x27);             
  }
  //H4 "]"
  if (c == 'm') { 
    Keyboard.release(0x5B);
    Keyboard.release(0x27);
    Keyboard.release(0x60);
    Keyboard.release(0x3B);
    Keyboard.release(0x2F);

    delay(100);           
    Keyboard.press(0x5D);             
  }
  //H5 ";"
  if (c == 'o') {       
    Keyboard.release(0x5B);
    Keyboard.release(0x27);
    Keyboard.release(0x5D);
    Keyboard.release(0x60);
    Keyboard.release(0x2F);

    delay(100);     
    Keyboard.press(0x3B);             
  }
  //H6 ";"
  if (c == 'q') {   
    Keyboard.release(0x5B);
    Keyboard.release(0x27);
    Keyboard.release(0x5D);
    Keyboard.release(0x3B);
    Keyboard.release(0x60);

    delay(100);         
    Keyboard.press(0x2F);             
  }





}
