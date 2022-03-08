/*
 * In this program, when the PB is pressed the LED turns on and whe the PB is 
 * released the LED immediately turns back off
 */

int ledPin = 13;                                                // sets the pin for the LED
int PBpin = 12;                                                 //sets the pin for the PB
int buttonState = 0;                                            //sets the initial value for the PB


void setup() {
                                                                // put your setup code here, to run once:
Serial.begin (9600);                                            // baud rate of 9600
pinMode(ledPin, OUTPUT);                                        // states that the LED is an output
pinMode(PBpin, INPUT);                                          // states that the PB is an input
}

void loop() {
                                                                // put your main code here, to run repeatedly:

  buttonState = digitalRead (PBpin);                            //reads the state of the PB
                            
  if (buttonState ==HIGH){                                      //states what the program will do when the PB is presseed

  digitalWrite(ledPin, HIGH);                                   //if the PB is pressed the LED turns on
  Serial.println("LED ON");                                     //prints "LED ON" on the serial monitor when the PB is pressed
}
else {                                                          // states what the program will do if the PB is anything but pressed

  digitalWrite(ledPin,LOW);                                     //if the PB is anything else than pressed the LED turns off
  Serial.println("LED OFF");                                    //prints "LED OFF" on the serial monitor when the PB is not pressed
}
}
