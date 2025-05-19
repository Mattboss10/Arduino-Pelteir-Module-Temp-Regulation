/*
  Blink

  Turns an LED/any device(pelteir in my case) on for 5 seconds, then off for 3 second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 28 May 2021
  by Matthew Cohen
  modified 28 May 2021
  by Matthew Cohen
  modified 28 May 2021
  by Matthew Cohen

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
const int peltierPin = 9; // PWM-capable pin sending partial power signal .

void setup() {
  pinMode(peltierPin, OUTPUT);
}

void loop() { //creating a loop to run endlessely until circuit is switched off
  analogWrite(peltierPin, 128); // 50% power output to Peltier instead of always ON
  delay(10000);                 // run for 10 seconds
}

