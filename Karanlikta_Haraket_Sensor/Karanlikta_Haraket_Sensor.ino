#define sensor 7
#define LDR A0
#define role 8
int harakets = 0;
int gece_durum = 0;

void setup() {
  
 pinMode(sensor,INPUT);
 pinMode(LDR,INPUT);
 pinMode(role,OUTPUT);
 digitalWrite(role,0);
}
void loop() {
  
 gece_durum = analogRead(LDR);
 harakets = digitalRead(sensor);
 
 if(gece_durum < 150)
 { 
  start();
 }
 else{};
}
void start() {
  
  if (harakets == 1)
  {
    digitalWrite(role,1);
    delay(10000);
    digitalWrite(role,0);
   }
 else {
    digitalWrite(role,0);
  }
} 
