/*
 * this program calculates the value of a resistor and projects its value on the LCD 
 * display and the serial monitor. To find that value we need to use ohms law to find 
 * the voltage accross the resistor and then find its resistance.
 */



const int sensorPin = A0;                                       // Analog input pin that senses Vout
int sensorValue = 0;                                            // sensorPin default value
float Vin = 5;                                                  // Input voltage
float Vout = 0;                                                 // Vout default value
float Rref = 220;                                               // Reference resistor's value in ohms 
float R = 0;                                                    // Tested resistors default value


#include <LiquidCrystal.h>                                      // include the library code:



const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;     // initialize the library by associating any needed LCD interface pin
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);                      // with the arduino pin number it is connected to
byte customChar[] = {                                           //Create the custom caracter as an OHM sysmbol
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B01010,
  B01010,
  B11011,
};
void setup() {
    Serial.begin(9600);                                         // baud rate of 9600

 
 lcd.begin(16, 2);                                              // set up number of columns and rows

  lcd.createChar(0, customChar);                                // create a new custom character

  lcd.setCursor(6, 0);                                          // move cursor
  lcd.write((byte)0);                                           // print the custom char
}

void loop() {
                                                                // set the cursor to column 0, line 1
                                                                // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
                                                                // print the number of seconds since reset:
  lcd.print(R);                                                 // Project the value of R on the LCD
  sensorValue = analogRead(sensorPin);                          // Read Vout on analog input pin A0 (Arduino can sense from 0-1023, 1023 is 5V)
  Vout = (Vin * sensorValue) / 1023;                            // Convert Vout to volts
  R = Rref * (1 / ((Vin / Vout) - 1));                          // Formula to calculate tested resistor's value
  Serial.print("R: ");                                          // Print R:
  Serial.println(R);                                            // Give calculated resistance in Serial Monitor
  delay(1000);                                                  // Delay in milliseconds between reeds
}
