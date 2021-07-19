#define pinAcelerador 8
#define pinFreio 9
          
#define pinFreioMao 13

#define pinA 2
#define pinB 3
#define pinC 4
#define pinD 5
#define pinE 6
#define pinF 7

void setup() {
  Serial.begin(115200);
  pinMode(pinAcelerador, INPUT_PULLUP);
  pinMode(pinFreio, INPUT_PULLUP);
  pinMode(pinFreioMao, INPUT_PULLUP);

  pinMode(pinA, INPUT_PULLUP);
  pinMode(pinB, INPUT_PULLUP);
  pinMode(pinC, INPUT_PULLUP);
  pinMode(pinD, INPUT_PULLUP);
  pinMode(pinE, INPUT_PULLUP);
  pinMode(pinF, INPUT_PULLUP);

}

void sendDataUSB(int state, int lastState, char lowMessage, char highMessage) {
  if (state != lastState) {
    if (state == LOW) {
      Serial.write(lowMessage);
    }
    else {
      Serial.write(highMessage);
    }
  }
}

int aceleratorLastState = HIGH;
int freioLastState = HIGH;

int freioMaoLastState = HIGH;

int ALastState = HIGH;
int BLastState = HIGH;
int CLastState = HIGH;
int DLastState = HIGH;
int ELastState = HIGH;
int FLastState = HIGH;

void loop() {

  int aceleratorState = digitalRead(pinAcelerador);
  sendDataUSB(aceleratorState, aceleratorLastState, 'a', 'b');
  aceleratorLastState = aceleratorState;

  int freioState = digitalRead(pinFreio);
  sendDataUSB(freioState, freioLastState, 'c', 'd');
  freioLastState = freioState;

  int freioMaoState = digitalRead(pinFreioMao);
  sendDataUSB(freioMaoState, freioMaoLastState, 'e', 'f');
  freioMaoLastState = freioMaoState;

  int AState = digitalRead(pinA);
  sendDataUSB(AState, ALastState, 'g', 'h');
  ALastState = AState;

  int BState = digitalRead(pinB);
  sendDataUSB(BState, BLastState, 'i', 'j');
  BLastState = BState;

  int CState = digitalRead(pinC);
  sendDataUSB(CState, CLastState, 'k', 'l');
  CLastState = CState;
  
  int DState = digitalRead(pinD);
  sendDataUSB(DState, DLastState, 'm', 'n');
  DLastState = DState;

  int EState = digitalRead(pinE);
  sendDataUSB(EState, ELastState, 'o', 'p');
  ELastState = EState;
  
  int FState = digitalRead(pinF);
  sendDataUSB(FState, FLastState, 'q', 'r');
  FLastState = FState;




}
