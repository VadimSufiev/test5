void setup() {
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
Serial.begin(9600);
}
int a = 100;
int s = 0;
void vp()
{
  if(Serial.available()=1)
 digitalWrite(4,1);
 digitalWrite(5,0);
 digitalWrite(9,1);
 digitalWrite(10,0);
     analogWrite(3,a);
     analogWrite(11,a);
     delay(2000);

 }
 void pr()
 {
 digitalWrite(9,1);
 digitalWrite(10,0);
 analogWrite(11,a);
 delay(1000);
 Serial.println("pr");
  }
  void pl()
 {
digitalWrite(5,1);
digitalWrite(4,0);
analogWrite(3,a);
delay(1000);
Serial.println("pl");
  }
  void st()
 {
 digitalWrite(9,0);
 digitalWrite(10,0);
 digitalWrite(4,0);
 digitalWrite(5,0);
 analogWrite(3,a);
 analogWrite(11,a);
 delay(1000);
 Serial.println("st");
  }
   void nz()
 {
 digitalWrite(9,0);
 digitalWrite(10,1);
 digitalWrite(4,0);
 digitalWrite(5,1);
 analogWrite(3,a);
 analogWrite(11,a);
 delay(1000);
 Serial.println("nz");
 }
void loop() 
{
 
vp();
st();
pr();
st();
vp();
st();
pr();
st();
st();
delay(99999);
}
