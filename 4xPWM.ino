/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.
  https://etechnophiles.com/change-frequency-pwm-pins-arduino-uno/

  http://www.arduino.cc/en/Tutorial/Fade

  Modified by Jeremy S. Cook 2/6/2020
*/

int led490a = 9;           // the PWM pin the LED is attached to
int led490b = 10; 
int led976a = 5;
int led976b = 6;

int brightness = 127;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led490a, OUTPUT);
  pinMode(led490b, OUTPUT);
  pinMode(led976a, OUTPUT);
  pinMode(led976b, OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led490a, brightness);
  analogWrite(led490b, brightness);
  analogWrite(led976a, brightness);
  analogWrite(led976b, brightness);

  // change the brightness for next time through the loop:
  //brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  //if (brightness <= 0 || brightness >= 255) {
  //  fadeAmount = -fadeAmount;
  //}
  // wait for 30 milliseconds to see the dimming effect
  //delay(30);
}
