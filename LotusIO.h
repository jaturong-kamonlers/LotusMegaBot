//------------------------------------------------------------------------------------------------//
// Program	: Library Read/Write digital I/O   
// Description 	: Library Read/Write digital I/O 
// Frequency	: Crytal 16 MHz  
// Filename	: in_out.h
// C compiler	: Wirring
//------------------------------------------------------------------------------------------------//
#ifndef _IN_OUT_H_
#define _IN_OUT_H_
////////////////////////////
#include "pins_arduino.h"
#include "wiring_private.h"
#include "LotusMegaSound.h"
#include "LotusOLED.h"
#include "Adafruit_ADS1015.h"
//////////////////////////////
Adafruit_ADS1115 ads1115;
//////////////////////////////

int8_t _sw = 53;
uint8_t _k = 15;
//////////////////////////
void ok() {
  ads1115.begin();
  oledset();
  lotext();
  cpset();
  pinMode(_sw,INPUT);
  sound(1024,50);delay(20);sound(1152,50);delay(20);sound(1280,50);delay(20);sound(1380,50);
  sound(1536,50);delay(20);sound(1728,50);delay(20);sound(1920,50);
  while(true){
	if (digitalRead(_sw)==0){
		lotextdel();
		beep();
		OLED.clearDisplay(); 
		OLED.setCursor(0,0); 
	break;}
}}


int Knob(){ return (analogRead(_k));}

void set(){
oledset(); 	
cpset();
ads1115.begin();
}

void out(int num,int _dat)
{
     pinMode(num, OUTPUT); 
     digitalWrite(num,_dat);
}
void outA(int num,int _dat)
{
     pinMode(num, OUTPUT); 
     analogWrite(num,_dat);
}
void sleep(int num)
{
	delay(num);
}

int in(int num)
{
     pinMode(num,INPUT); 
     return(digitalRead(num));
}

int inA(int a)
{
	return (analogRead(a));
}

int inAA(int aa)
{   
	return (map(ads1115.readADC_SingleEnded(aa),0,27000,0,1023));
}

#endif




