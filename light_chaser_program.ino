/*
 * This program turns on an LED, then a second later turns another one on and then second later turns on another. After another second the program closes 
 * each LED light in reverse order of which they were turned with one second increeents between each light turning off
 */


void setup()
{
  pinMode(12, OUTPUT);                                        //sets pin 12 of the DO pins as an output
  pinMode(13, OUTPUT);                                        //sets pin 13 of the DO pins as an output
  pinMode(11, OUTPUT);                                        //sets pin 11 of the DO pins as an output
}

void loop()
{
  digitalWrite(13, HIGH);                                     //turns the LED on HIGH (ON)
  delay(1000);                                                // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);                                     //turns the LED on HIGH (ON)
  delay(1000);                                                // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);                                     //turns the LED on HIGH (ON)
  delay(1000);                                                // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);                                      //turns the LED on LOW (OFF)
  delay(1000);                                                // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);                                      //turns the LED on LOW (OFF)
  delay(1000);                                                // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);                                      //turns the LED on LOW (OFF)
  delay(1000);                                                // Wait for 1000 millisecond(s)
}
