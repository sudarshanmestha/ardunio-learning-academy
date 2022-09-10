/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
















//1

void setup() {
  Serial.begin(9600);   
  for(int i=0;i<5;i++)
  {
int senserValue = analogRead(A0);
  Serial.println("hello world");
  delay(1);
  }
}
void loop() {
}




//2

//void setup() {
//  Serial.begin(9600);
//  int x=0;
//  while(x<5)
//  {
//    int senserValue = analogRead(A0);
//    Serial.print("hello World\n");
//    x++;
//    delay(1);
//  }
//}
//void loop() {
//}
