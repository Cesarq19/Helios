/*
   SOLAR CODERS
*/

#include<WiFi.h>
#include <HTTPClient.h>
#include  <SPIFFS.h>

const char* ssid = "Wokwi-GUEST";
const char* pass = "";
HTTPClient client;
float kpNow;

//RGB
#define red 23 
#define  green 22 
#define  blue 21 

bool status1;
bool status2;
bool status3;
bool status4;

void setColor(int R, int G, int B) {
  analogWrite(red,   R);
  analogWrite(green, G);
  analogWrite(blue,  B);
}

void setup(){
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  while(WiFi.status() != WL_CONNECTED){
    delay(100);
    Serial.println(".");
  }
  Serial.println("WiFi Connected!");
  Serial.println(WiFi.localIP());
  kpNow=0;

  //RGB
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  bool status1 = false;
  bool status2 = false;
  bool status3 = false;
  bool status4 = false;

}

void loop(){
  if ((WiFi.status() == WL_CONNECTED)){
    //---------------Getting geomagnetic indexes in real time ------------
    client.begin("https://www-app3.gfz-potsdam.de/kp_index/Kp_ap_Ap_SN_F107_nowcast.txt");
    int response = client.GET();
    if (response > 0){
      String mensaje = client.getString();
      int idx_lastLine = mensaje.lastIndexOf("\n");
      String lastReading = mensaje.substring(idx_lastLine-158,idx_lastLine); //Always 158 characters
      String kpIndexes = lastReading.substring(33,88);
      for (int i=0;i<kpIndexes.length();i++){
        String kp = kpIndexes.substring(i,i+6);
        //Serial.println(kp.toFloat());
        float kpFloat =kp.toFloat();
        if (kpFloat != -1){
          kpNow = kpFloat;
        }
        i=i+6;
      }
    }else{
      Serial.println("Lost Connection");
    }
  }else{
    Serial.println("Lost Connection");
  }
  delay(5);
  
  //-------Turn on LED depending on the last kp index registered--------
  //kpNow = 6; //Change this value to try entering different status
  Serial.print("Real Time Kp: ");
  Serial.println(kpNow); //Show in serial monitor real time kp
  if (kpNow>0 and kpNow<=3 and status1==false){
    setColor(0,255,0); //Green
    status1 = true;
    status2 = false;
    status3 = false;
    status4 = false;
  }else if(kpNow>3 and  kpNow<=4 and status2==false){
    setColor(255,255,0); //Yellow
    status1 = false;
    status2 = true;
    status3 = false;
    status4 = false;
  }else if(kpNow>4 and kpNow<=6 and status3==false){
    setColor(255,165,0); //Orange
    status1 = false;
    status2 = false;
    status3 = true;
    status4 = false;
  }else if(kpNow>6 and status4==false){
    setColor(255,0,0); //Red
    status1 = false;
    status2 = false;
    status3 = false;
    status4 = true;
  }
  delay(5);
}