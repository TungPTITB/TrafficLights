const int aPin = 8;
const int bPin = 7;
const int cPin = 6;
const int dPin = 5;
const int ePin = 4;
const int fPin = 3;
const int gPin = 2;
unsigned char led7Hex[]= { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
int xanh = 11;
int vang =12;
int doo =13;
int xanhs = 25;
int vangs = 3;
int doos = 10;
void LED7_writeByte(unsigned char b){
  if(((b>>0) & 0x01) ==1){
    digitalWrite(aPin, HIGH);
  }
  else{
    digitalWrite(aPin, LOW);
  }
  if(((b>>1) & 0x01) ==1){
    digitalWrite(bPin, HIGH);
  }
  else{
    digitalWrite(bPin, LOW);
  }
  if(((b>>2) & 0x01) ==1){
    digitalWrite(cPin, HIGH);
  }
  else{
    digitalWrite(cPin, LOW);
  }
  if(((b>>3) & 0x01) ==1){
    digitalWrite(dPin, HIGH);
  }
  else{
    digitalWrite(dPin, LOW);
  }
  if(((b>>4) & 0x01) ==1){
    digitalWrite(ePin, HIGH);
  }
  else{
    digitalWrite(ePin, LOW);
  }
  if(((b>>5) & 0x01) ==1){
    digitalWrite(fPin, HIGH);
  }
  else{
    digitalWrite(fPin, LOW);
  }
  if(((b>>6) & 0x01) ==1){
    digitalWrite(gPin, HIGH);
  }
  else{
    digitalWrite(gPin, LOW);
  }
}
void setup(){
  pinMode(aPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  pinMode(dPin, OUTPUT);
  pinMode(ePin, OUTPUT);
  pinMode(fPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(xanh, OUTPUT);
  pinMode(vang, OUTPUT);
  pinMode(doo, OUTPUT);
}
void loop(){
  
  digitalWrite(xanh,HIGH);
  for( int i=xanhs; i>=0; i--){
    LED7_writeByte(led7Hex[i%10]);
    delay(1000);
  }
  digitalWrite(xanh,LOW);
  digitalWrite(vang,HIGH);
  for( int i=vangs; i>=0; i--){
    LED7_writeByte(led7Hex[i%10]);
    delay(1000);
  }
  digitalWrite(vang,LOW);
  digitalWrite(doo,HIGH);
  for( int i= doos; i>=0; i--){
    LED7_writeByte(led7Hex[i%10]);
    delay(1000);
  }
  digitalWrite(doo,LOW);
}
