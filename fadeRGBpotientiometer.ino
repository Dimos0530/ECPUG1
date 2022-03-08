/*
 * this program will go through all the colors of the rgb led by rotating the potentimeter  
 */



int LED_PINR = 9;                                                                 //sets the pin for the red LED of the RGB
int LED_PING = 10;                                                                //sets the pin for the green LED of the RGB
int LED_PINB = 11;                                                                //sets the pin for the blue LED of the RGB
int x = 0;                                                                        //sets the default value that the potentiometer/wiper is going read first
int wiperPin = A0;                                                                //sets the pin for the potentiometer

void setup() {
                                                                                  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (wiperPin, INPUT);                                                        // states that the potentiometer is an input
pinMode (LED_PINR, OUTPUT);                                                       // states that the red LED is an output
pinMode (LED_PING, OUTPUT);                                                       // states that the red LED is an output
pinMode (LED_PINB, OUTPUT);                                                       // states that the red LED is an output
}

void loop() {
                                                                                  // put your main code here, to run repeatedly:
  Serial.print ("Analog: ");                                                      // prints "Analog: " on the serial monitor
  Serial.print (x);                                                               // prints the value of x on the serial monitor
  delay (100);                                                                    // wait for 100 milliseconds
x = analogRead (wiperPin);                                                        // gives the value of x 

if (x < 341 ) {                                                                   // what the program will do if the value of x is greater than 0 and smaller than 341
 int brightness = map (wiperPin, 0, 341, 0, 255);
digitalWrite (LED_PINR, HIGH);                                                    // the red led will turn on 
digitalWrite (LED_PING, LOW);                                                     // the green led will stay off
digitalWrite (LED_PINB, LOW);                                                     // the blue led will stay off
}
else if  ( x < 681 )  {                                                           // what the program will do if the value of x is greater than 341 and smaller than 681
 int brightness = map (wiperPin, 341, 681, 0, 255);
digitalWrite (LED_PINR, LOW);                                                     // the red led will turn off
digitalWrite (LED_PING, HIGH);                                                    // the green led will turn on
digitalWrite (LED_PINB, LOW);                                                     // the blue led will stay off 
}
else {                                                                            // what the program will do if the value of x does not respect any of the 2 conditions above
 int brightness = map (wiperPin, 681, 1023, 0, 255);
digitalWrite (LED_PINR, LOW);                                                     // the red led will stay off
digitalWrite (LED_PING, LOW);                                                     // the green led will turn off
digitalWrite (LED_PINB, HIGH);                                                    // the blue led will turn off
}
}
