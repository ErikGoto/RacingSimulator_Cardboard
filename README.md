# Simulador_ETS2

# Materials
- Arduino Micro
- CardBoard
- Copper Wire


# Features
- Steering Wheel
- Throttle
- Brake
- Sequential Clutch
- Headlights(?)

## Pull Up button with Copper Wire
```c++
  #define in 2
  void setup() {
    Serial.begin(9600);
    pinMode (in, INPUT_PULLUP);
  }
  void loop() {
    if(digitalRead() == 0){
      Serial.println("Pressed!")
    }
  }
```
