

/*
  This program shows how to fade an LED on pin 9
  using the analogWrite() function.
*/

int brightness = 0;                                                 // sets the default brightness of the LED at 0

void setup()
{
  pinMode(9, OUTPUT);                                               // sets pin 9 of the DO pins as an output
}

void loop()
{
  for (brightness = 0; brightness <= 255; brightness += 5) {        // counts up until the brightness reaches 255
    analogWrite(9, brightness);                                     // fades the LED to the maximum brightness
    delay(30);                                                      // Wait for 30 millisecond(s)
  }
  for (brightness = 255; brightness >= 0; brightness -= 5) {        // counts down until the brightness reaches 0
    analogWrite(9, brightness);                                     // fades the LED to the minimum brightness
    delay(30);                                                      // Wait for 30 millisecond(s)
  }
}
