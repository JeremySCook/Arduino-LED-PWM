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

  PWM freq change info: https://etechnophiles.com/change-frequency-pwm-pins-arduino-uno/

  Modified by Jeremy S. Cook 2/6/2020
*/

int led0910 = 9;           // the PWM pin the LED is attached to
int led0506 = 5;
int led0311 = 3;

int brightness = 127;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led0910, OUTPUT);
  pinMode(led0506, OUTPUT);
  pinMode(led0311, OUTPUT);

//change LED 9/10

TCCR1B = TCCR1B & B11111000 | B00000100; // for PWM frequency of 122.55 Hz

//change LED 5/6

TCCR0B = TCCR0B & B11111000 | B00000101; // for PWM frequency of 61.04 Hz

//change LED 3/11

TCCR2B = TCCR2B & B11111000 | B00000111; // for PWM frequency of 30.64 Hz

}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness
  analogWrite(led0910, brightness);
  analogWrite(led0506, brightness);
  analogWrite(led0311, brightness);

  // change the brightness for next time through the loop:
  //brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  //if (brightness <= 0 || brightness >= 255) {
  //  fadeAmount = -fadeAmount;
  //}
  // wait for 30 milliseconds to see the dimming effect
  //delay(30);
}
