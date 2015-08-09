#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void rgbWrite(int myRed, int myGreen, int myBlue){
  analogWrite(5,myRed);
  analogWrite(6,myGreen);
  analogWrite(9,myBlue);
  }

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    irrecv.resume(); // Receive the next value
  }

  if (results.value==1347){
    rgbWrite(0,0,0);  
  } else if (results.value==1348){
    rgbWrite(255,0,0);  
  } else if (results.value==1349){
    rgbWrite(0,255,0);  
  } else if (results.value==1350){
    rgbWrite(0,0,255);  
  } else if (results.value==1351){
    rgbWrite(255,255,0);  
  } else if (results.value==1352){
    rgbWrite(255,0,255);  
  } else if (results.value==1353){
    rgbWrite(0,255,255);  
  }
  
 
}
