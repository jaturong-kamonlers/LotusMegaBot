#ifndef LotusMegaMotor_h
#define LotusMegaMotor_h
////////////////////////////////////////////
//////  www.lotus-arduibot.com   //////////
///////////////////////////////////////////
#include "arduino.h"
#include "wiring_private.h"
////////////////////////////////////////////
#define DR1  9  
#define DR2  8  
#define PWMR 2  
//////////////////////////////////
#define DL1  11  
#define DL2  10  
#define PWML 3 
/////////////////////////////////////////////////
/////// ช่อง B //////////////////////////////////
#define DR1b  13  
#define DR2b  12  
#define PWMRb 4  
//////////////////////////////////
#define DL1b  15  
#define DL2b  14  
#define PWMLb 5 
/////// ช่อง c //////////////////////////////////
#define DR1c  17  
#define DR2c  16  
#define PWMRc 6  
//////////////////////////////////
#define DL1c  23  
#define DL2c  22  
#define PWMLc 7 
////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
void setio(){
pinMode(DL1, OUTPUT);
  pinMode(DL2, OUTPUT);
  pinMode(PWML, OUTPUT);
  pinMode(DR1, OUTPUT);
  pinMode(DR2, OUTPUT);
  pinMode(PWMR, OUTPUT);
  ////////////////////////////
  pinMode(DL1b, OUTPUT);
  pinMode(DL2b, OUTPUT);
  pinMode(PWMLb, OUTPUT);
  pinMode(DR1b, OUTPUT);
  pinMode(DR2b, OUTPUT);
  pinMode(PWMRb, OUTPUT);
  //////////////////////
  pinMode(DL1c, OUTPUT);
  pinMode(DL2c, OUTPUT);
  pinMode(PWMLc, OUTPUT);
  pinMode(DR1c, OUTPUT);
  pinMode(DR2c, OUTPUT);
  pinMode(PWMRc, OUTPUT);
  ////////////////////////////	
}

///////////////////////////////////////////////////////////////////
void run(int spr, int spl)   // ประกาศฟังก์ชัน run(กำลังมอเตอร์ซ้าาย,กำลังมอเตอร์ขวา);
{ setio();
if (spl > 0)
  {   
    digitalWrite(DL1, LOW);
    digitalWrite(DL2, HIGH);
    analogWrite(PWML, spl);
  }
else if (spl < 0)
  {
    digitalWrite(DL1, HIGH);
    digitalWrite(DL2, LOW);
    analogWrite(PWML, -spl);
  }      
else
  {             
    digitalWrite(DL1, HIGH);
    digitalWrite(DL2, HIGH);
  }
///////////////////////////////////////////////
if (spr > 0)
  {     
    digitalWrite(DR1, LOW);
    digitalWrite(DR2, HIGH);
    analogWrite(PWMR, spr);
  }
else if (spr < 0)
  {
    digitalWrite(DR1, HIGH);
    digitalWrite(DR2, LOW);
    analogWrite(PWMR, -spr);
  }
else
  {
    digitalWrite(DR1, HIGH);
    digitalWrite(DR2, HIGH);

  }}
  void runa(int spra, int spla)   // ประกาศฟังก์ชัน run(กำลังมอเตอร์ซ้าาย,กำลังมอเตอร์ขวา);
{ setio();
if (spla > 0)
  {   
    digitalWrite(DL1, LOW);
    digitalWrite(DL2, HIGH);
    analogWrite(PWML, spla);
  }
else if (spla < 0)
  {
    digitalWrite(DL1, HIGH);
    digitalWrite(DL2, LOW);
    analogWrite(PWML, -spla);
  }      
else
  {             
    digitalWrite(DL1, HIGH);
    digitalWrite(DL2, HIGH);
  }
///////////////////////////////////////////////
if (spra > 0)
  {     
    digitalWrite(DR1, LOW);
    digitalWrite(DR2, HIGH);
    analogWrite(PWMR, spra);
  }
else if (spra < 0)
  {
    digitalWrite(DR1, HIGH);
    digitalWrite(DR2, LOW);
    analogWrite(PWMR, -spra);
  }
else
  {
    digitalWrite(DR1, HIGH);
    digitalWrite(DR2, HIGH);
  }}
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
void runb(int sprb, int splb)   // ประกาศฟังก์ชัน run(กำลังมอเตอร์ซ้าาย,กำลังมอเตอร์ขวา);
{ setio();
if (splb > 0)
  {
  digitalWrite(DL1b, LOW);
  digitalWrite(DL2b, HIGH);
  analogWrite(PWMLb, splb);
  }
else if (splb < 0)
  {
    digitalWrite(DL1b, HIGH);
    digitalWrite(DL2b, LOW);
    analogWrite(PWMLb, -splb);
  }
else
  {
    digitalWrite(DL1b, HIGH);
    digitalWrite(DL2b, HIGH);
  }
  //////////////////////////////////////
if (sprb > 0)
  {
    digitalWrite(DR1b, LOW);
    digitalWrite(DR2b, HIGH);
    analogWrite(PWMRb, sprb);
  }
else if (sprb < 0)
  {
    digitalWrite(DR1b, HIGH);
    digitalWrite(DR2b, LOW);
	analogWrite(PWMRb, -sprb);
  }
else
  {
    digitalWrite(DR1b, HIGH);
    digitalWrite(DR2b, HIGH);
  }}

//////////////////////////////////////
void runc(int sprc, int splc)   // ประกาศฟังก์ชัน run(กำลังมอเตอร์ซ้าาย,กำลังมอเตอร์ขวา);
{ setio();
if (splc > 0)
  {
    digitalWrite(DL1c, LOW);
    digitalWrite(DL2c, HIGH);
    analogWrite(PWMLc, splc);
  }
else if (splc < 0)
  {
    digitalWrite(DL1c, HIGH);
    digitalWrite(DL2c, LOW);
    analogWrite(PWMLc, -splc);
    }
else
  {
    digitalWrite(DL1c, HIGH);
    digitalWrite(DL2c, HIGH);
  }
  //////////////////////////////////////
if (sprc > 0)
  {
    digitalWrite(DR1c, LOW);
    digitalWrite(DR2c, HIGH);
    analogWrite(PWMRc, sprc);
  }
else if (sprc < 0)
  {
    digitalWrite(DR1c, HIGH);
    digitalWrite(DR2c, LOW);
    analogWrite(PWMRc, -sprc);
  }
else
  {
    digitalWrite(DR1c, HIGH);
    digitalWrite(DR2c, HIGH);

  }}
 
void RUN(int ml , int mr){runa(ml,mr);runb(ml,mr);runc(ml,mr); } 
void RUN4(int ml , int mr){runa(ml,mr);runb(ml,mr);} 
void FD(int ml , int mr){runa(ml,mr);runb(ml,mr);runc(ml,mr); } 
void AO(){runa(0,0);runb(0,0);runc(0,0); } 
void fd(int a){runa(a,a);runb(a,a);runc(a,a);}
void bk(int a){runa(-a,-a);runb(-a,-a);runc(-a,-a);}
void sr(int a){runa(a,-a);runb(a,-a);runc(a,-a);}
void sl(int a){runa(-a,a);runb(-a,a);runc(-a,a);}
void tr(int a){runa(a,0);runb(a,0);runc(a,0);}
void tl(int a){runa(0,a);runb(0,a);runc(0,a);}
void ao(){runa(0,0);runb(0,0);runc(0,0);}
void fd2(int a,int b){run(a,b);}
///////////////////////////////////////////
#endif
