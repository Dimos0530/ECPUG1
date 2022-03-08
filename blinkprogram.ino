/* 
This program turns on an LED for one second and then 
turns it off for another second.
*/

void setup() {
                                            // put your setup code here, to run once:
pinMode (13, OUTPUT);                       //sets pin 13 of the DO pins as an output
}

void loop() {
                                            // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);                      //turns the LED on HIGH (ON)
delay(1000);                                //wait for 1000 milliseconds
digitalWrite(13,LOW);                       //turns the LED on LOW (OFF)
delay(1000);                                //wait for 1000 milliseconds
}
