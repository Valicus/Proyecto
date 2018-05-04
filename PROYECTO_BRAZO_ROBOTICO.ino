#include <Servo.h> // Libreria para controlar los servomotores

#define pinBase 9  
#define pinCodo 12
#define pinBrazo 11
#define pinGarra 10 
#define initBase 82
#define initCodo 90  
#define initBrazo 10
#define initGarra 160

Servo Base;
Servo Codo;
Servo Brazo;
Servo Garra;
int i,val=0;

void setup() 
{
  Base.attach (pinBase);
  Codo.attach (pinCodo);
  Brazo.attach (pinBrazo);
  Garra.attach (pinGarra);
  
  Base.write (initBase);
  Base.write (initBase +65);
  delay (500);
  Base.write (initBase -65);
  delay (500);
  Base.write (initBase);
  delay (500);
  Codo.write (initCodo);
  delay (500);
  Codo.write (initCodo -70);
  delay (500);
  Codo.write (initCodo);
  delay (500);
  Brazo.write (initBrazo);
  delay (500);
  Brazo.write (initBrazo +50);
  delay (500);
  Codo.write (initCodo);
  delay (500);
  Codo.write (initCodo -70);
  delay (500);
  Codo.write (initCodo);
  delay (500);
  Codo.write (initCodo -70);
  delay (500);
  Garra.write (initGarra);
  delay (200);
  Garra.write (initGarra -45); // la garra el angulo recto es con 90°
  delay (200);
  Garra.write (initGarra);
  delay (200);
  Garra.write (initGarra -45);
  delay (200);
  Garra.write (initGarra);
  delay (200);
  Garra.write (initGarra -45);
  delay (200);
  Garra.write (initGarra);
  Serial.begin(9600);

  }


  void loop() 
  {


  val = Serial.read();
    
  if(val=='3'){          
  Garra.write(160);                 
  delay(15);
i++;
}
  if(val=='0'){
    Garra.write(90);
    delay(15);
    i--;
    }

     if(val=='2'){
    Brazo.write(50);
    delay(15);}
     if(val=='8'){
    Brazo.write(120);
    delay(15);}
     if(val=='9'){
    Codo.write(40);
    delay(15);}
     if(val=='7'){
    Codo.write(160);
    delay(15);}
     if(val=='6'){
    Base.write(5);
    delay(15);}
    if(val=='4'){
    Base.write(175);
    delay(15);}

  }
  


