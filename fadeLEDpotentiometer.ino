/*
 * this program fades an led by rotating the knob of a potentionmeter
 */



int analogpin = A0;                               //define analog pin
int ledpin = 3;                                   //declare the led pin
int adcvalue = 0;                                 //variable to store the adc value from potentiometer
int ledfadevalue = 0;                             //variable to store the brightness of led 
void setup(){

  Serial.begin(9600);
  pinMode(analogpin, INPUT);                      // sets A0 as an input
  pinMode(ledpin, OUTPUT);                        // sets pin 13 of the DO pins as an output
}
void loop(){
adcvalue = analogRead(analogpin);                 //read the analog value from A0
Serial.print(" ADC VALUE; ");                     // print " ADC VALUE; " on the serial monitor
 Serial.println(adcvalue);                        // print the value of the adcvalue on the serial monitor 
 ledfadevalue = map(adcvalue, 0, 1023, 0, 255);   // takes the adcvalue, the value which we need to map, the range from minimum to maximum and the range of the value we need to map 
 Serial.print ("Brightness Value :");             // print "Brightness Value :" on the serial monitor
 Serial.print (ledfadevalue);                     // print the value from the ledfadevalue on the serial monitor
 analogWrite(ledpin, ledfadevalue);               // writes the value of the ledfadevalue on the led pin which is shown on the LED itself
 delay(1000);                                     // wait for 1000 milliseconds
}
