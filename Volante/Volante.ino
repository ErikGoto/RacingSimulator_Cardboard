#include "Joystick.h"
#define marcha1 16
#define marcha2 10
#define seta1 2
#define seta2 3

#define acelerador 14
#define freio 15
#define embreagem 4

// Criando um objeto do tipo Joystick, onde simulará um gamepad.
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
                   11, 0,                  // Quantidade de botões, Numero de Hat Switch
                   true, true, false,     // Eixos X e Y no joystick, mas não o eixo Z
                   false, false, false,   // Sem Rx, Ry, ou Rz
                   false, false,          // Sem rudder ou throttle
                   false, false, false);  // Sem acelerador, freio, ou direção


int CLK = 9;  // Pin 9 to clk on encoder
int DT = 8;  // Pin 8 to DT on encoder
int RedLed = 4;// You do not need to use the leds.
// you can take a look in the serial monitor if you dont have leds.
// there it will display values.
int RotPosition = 0;
int rotation;
int value;
boolean LeftRight;
void setup() {
  //Serial.begin (9600);
  pinMode (CLK, INPUT);
  pinMode (DT, INPUT);
  pinMode (marcha1, INPUT_PULLUP);
  pinMode (marcha2, INPUT_PULLUP);
  pinMode (seta1, INPUT_PULLUP);
  pinMode (seta2, INPUT_PULLUP);

  pinMode (acelerador, INPUT_PULLUP);
  pinMode (freio, INPUT_PULLUP);
  pinMode (embreagem, INPUT_PULLUP);
  rotation = digitalRead(CLK);

  Joystick.begin();
  Joystick.setXAxisRange(-130, 130);
  Joystick.setXAxis(0);
}
void loop() {
  value = digitalRead(CLK);
  if (value != rotation) { // we use the DT pin to find out which way we turning.
    if (digitalRead(DT) != value) {  // Clockwise
      if (RotPosition < 130) {
        RotPosition ++;
      }

      LeftRight = true;
    } else { //Counterclockwise
      LeftRight = false;
      if (RotPosition > -130) {
        RotPosition--;
      }
    }
    //Serial.println(RotPosition);

  }
  rotation = value;
  Joystick.setXAxis(RotPosition);

  //Marcha
  if (#include "Joystick.h"
#define marcha1 16
#define marcha2 10
#define seta1 2
#define seta2 3

#define acelerador 14
#define freio 15
#define embreagem 4

// Criando um objeto do tipo Joystick, onde simulará um gamepad.
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
                   11, 0,                  // Quantidade de botões, Numero de Hat Switch
                   true, true, false,     // Eixos X e Y no joystick, mas não o eixo Z
                   false, false, false,   // Sem Rx, Ry, ou Rz
                   false, false,          // Sem rudder ou throttle
                   false, false, false);  // Sem acelerador, freio, ou direção


int CLK = 9;  // Pin 9 to clk on encoder
int DT = 8;  // Pin 8 to DT on encoder
int RedLed = 4;// You do not need to use the leds.
// you can take a look in the serial monitor if you dont have leds.
// there it will display values.
int RotPosition = 0;
int rotation;
int value;
boolean LeftRight;
void setup() {
  //Serial.begin (9600);
  pinMode (CLK, INPUT);
  pinMode (DT, INPUT);
  pinMode (marcha1, INPUT_PULLUP);
  pinMode (marcha2, INPUT_PULLUP);
  pinMode (seta1, INPUT_PULLUP);
  pinMode (seta2, INPUT_PULLUP);

  pinMode (acelerador, INPUT_PULLUP);
  pinMode (freio, INPUT_PULLUP);
  pinMode (embreagem, INPUT_PULLUP);
  rotation = digitalRead(CLK);

  Joystick.begin();
  Joystick.setXAxisRange(-130, 130);
  Joystick.setXAxis(0);
}
void loop() {
  value = digitalRead(CLK);
  if (value != rotation) { // we use the DT pin to find out which way we turning.
    if (digitalRead(DT) != value) {  // Clockwise
      if (RotPosition < 130) {
        RotPosition ++;
      }

      LeftRight = true;
    } else { //Counterclockwise
      LeftRight = false;
      if (RotPosition > -130) {
        RotPosition--;
      }
    }
    //Serial.println(RotPosition);

  }
  rotation = value;
  Joystick.setXAxis(RotPosition);

  //Marcha
  if (digitalRead(marcha1) == 0 && digitalRead(embreagem) == 0 && digitalRead(acelerador) == 1) {
    Joystick.setButton(0, 1);
  } else {
    Joystick.setButton(0, 0);
  }
  if (digitalRead(marcha2) == 0 && digitalRead(embreagem) == 0 && digitalRead(acelerador) == 1) {
    Joystick.setButton(1, 1);
  } else {
    Joystick.setButton(1, 0);
  }

  //Seta
  if (digitalRead(seta1) == 0) {
    Joystick.setButton(2, 1);
  } else {
    Joystick.setButton(2, 0);
  }
  if (digitalRead(seta2) == 0) {
    Joystick.setButton(3, 1);
  } else {
    Joystick.setButton(3, 0);
  }

  //Pedais
  if (digitalRead(acelerador) == 0) {
    Joystick.setButton(4, 1);
  } else {
    Joystick.setButton(4, 0);
  }
  if (digitalRead(freio) == 0) {
    Joystick.setButton(5, 1);
  } else {
    Joystick.setButton(5, 0);
  }

}
