#include <LotusMegaBot.h>
////////// กรอกค่าเฉลี่ยเซนเซอร์แต่ละตัว
/////////////////ตั้งค่าพอร์ต Analog//////////////
#define A0 628 // ค่ากลางเซนเซอร์ A0 
#define A1 604   // ค่ากลางเซนเซอร์ A1 
#define A2 727 // ค่ากลางเซนเซอร์ A2 
#define A3 629  // ค่ากลางเซนเซอร์ A3 
#define A4 588  // ค่ากลางเซนเซอร์ A4 
////////// ตั้งค่าเซอร์โว////////////////////
#define sv_front 80  // องศาเซอร์โวยิงไปด้านหน้า
#define sv_reverse 5  // องศาเซอร์โวถอยหลัง
/////////////////////////////// 
#define sw in(53)  // พอร์ตสวิตซ์
//////////////////////////////

void setup() {
sv1(sv_front);
set(); // ดึงLibraryและการตั้งค่า จอOLED เข็มทิศ และAnalog I2C
sound_setup();
}
void sound_setup(){sound_set();sound_set();sound_set();snd(1200,200);}
////////////////////////////////////////////////////
void sensor(){ana2();}
//////////////////////////////////////////////////
void ana() {
  while (true) {
    oleddel();                      // ล้างหน้าจอ
    oledcur(0, 0); oledsize(1);     // ตั้งเคอเซอร์ที่จุด0,0 ขนาดอักษร1
    oledp("A0 = "); oledlnp(inA(0));//พิมพ์ค่า A0 = ค่าจากสัญญาณAnalog0
    oledp("A1 = "); oledlnp(inA(1));//พิมพ์ค่า A1 = ค่าจากสัญญาณAnalog1
    oledp("A2 = "); oledlnp(inA(2));//พิมพ์ค่า A2 = ค่าจากสัญญาณAnalog2
    oledp("A3 = "); oledlnp(inA(3));//พิมพ์ค่า A3 = ค่าจากสัญญาณAnalog3
    oledp("A4 = "); oledlnp(inA(4));//พิมพ์ค่า A4 = ค่าจากสัญญาณAnalog4
    oledplay();                     //แสดงที่พิมพ์ผ่านจอOLED
    delay(30);                      //หน่วงเวลา 30 มิลลิวินาที
  }
}
void ana2() {beep();delay(50);beep();delay(50);beep();delay(50);
  while (true) {
    int a0 =inA(0);int a1 =inA(1);int a2 =inA(2);int a3 =inA(3);int a4 =inA(4);int a5 =inA(5);int a6 =inA(6);int a7 =inA(7);
    oleddel();                      
    oledp(0,0,1,"A0 = ",a0); //พิมพ์ค่า A0 = ค่าจากสัญญาณAnalog0
    oledp(0,8,1,"A1 = ",a1);//พิมพ์ค่า A1 = ค่าจากสัญญาณAnalog1
    oledp(0,16,1,"A2 = ",a2);//พิมพ์ค่า A2 = ค่าจากสัญญาณAnalog2
    oledp(0,24,1,"A3 = ",a3);//พิมพ์ค่า A3 = ค่าจากสัญญาณAnalog3
    oledp(0,32,1,"A4 = ",a4);//พิมพ์ค่า A4 = ค่าจากสัญญาณAnalog4
    oledp(0,40,1,"A5 = ",a5);//พิมพ์ค่า A2 = ค่าจากสัญญาณAnalog5
    oledp(0,48,1,"A6 = ",a6);//พิมพ์ค่า A3 = ค่าจากสัญญาณAnalog6
    oledp(0,56,1,"A7 = ",a7);//พิมพ์ค่า A4 = ค่าจากสัญญาณAnalog7
    oledplay();               //แสดงที่พิมพ์ผ่านจอOLED
    delay(30);                //หน่วงเวลา 30 มิลลิวินาที
    
  if (sw == 0){beep();delay(50);beep();delay(50);beep();while(true){
    int b0 =inA(0);int b1 =inA(1);int b2 =inA(2);int b3 =inA(3);int b4 =inA(4); int b5 =inA(5);int b6 =inA(6);int b7 =inA(7);             
    oledp(60,0,1," ",b0);oledp(" "); //พิมพ์ค่า A0 = ค่าจากสัญญาณAnalog0 แถบที่2
    oledp(60,8,1," ",b1);oledp(" ");//พิมพ์ค่า A1 = ค่าจากสัญญาณAnalog1 แถบที่2
    oledp(60,16,1," ",b2);oledp(" ");//พิมพ์ค่า A2 = ค่าจากสัญญาณAnalog2 แถบที่2
    oledp(60,24,1," ",b3);oledp(" ");//พิมพ์ค่า A3 = ค่าจากสัญญาณAnalog3 แถบที่2
    oledp(60,32,1," ",b4);oledp(" ");//พิมพ์ค่า A4 = ค่าจากสัญญาณAnalog4 แถบที่2
    oledp(60,40,1," ",b5);oledp(" ");//พิมพ์ค่า A2 = ค่าจากสัญญาณAnalog5 แถบที่2
    oledp(60,48,1," ",b6);oledp(" ");//พิมพ์ค่า A3 = ค่าจากสัญญาณAnalog6 แถบที่2
    oledp(60,56,1," ",b7);oledp(" ");//พิมพ์ค่า A4 = ค่าจากสัญญาณAnalog7 แถบที่2
    oledplay();                     //แสดงที่พิมพ์ผ่านจอOLED แถบที่2
  
    if (sw == 0){beep();delay(50);beep();delay(50);beep();
    int c0 =(a0+b0)/2;   int c1 =(a1+b1)/2; int c2 =(a2+b2)/2; int c3 =(a3+b3)/2; int c4 =(a4+b4)/2; int c5 =(a5+b5)/2; int c6 =(a6+b6)/2; int c7 =(a7+b7)/2; 
    oledp(100,0,1,c0); //พิมพ์ค่าเฉลี่ย A0 = ค่าจากสัญญาณAnalog0
    oledp(100,8,1,c1);//พิมพ์ค่าเฉลี่ย A1 = ค่าจากสัญญาณAnalog1
    oledp(100,16,1,c2);//พิมพ์ค่าเฉลี่ย A2 = ค่าจากสัญญาณAnalog2
    oledp(100,24,1,c3);//พิมพ์ค่าเฉลี่ย A3 = ค่าจากสัญญาณAnalog3
    oledp(100,32,1,c4);//พิมพ์ค่าเฉลี่ย A4 = ค่าจากสัญญาณAnalog4
    oledp(100,40,1,c5);//พิมพ์ค่าเฉลี่ย A2 = ค่าจากสัญญาณAnalog2
    oledp(100,48,1,c6);//พิมพ์ค่าเฉลี่ย A3 = ค่าจากสัญญาณAnalog3
    oledp(100,56,1,c7);//พิมพ์ค่าเฉลี่ย A4 = ค่าจากสัญญาณAnalog4  
    oledplay();            //แสดงที่พิมพ์ผ่านจอOLED   
    wait_ana2();     }}}}}

void wait_ana2(){while(true){if (sw == 0){snd(1200,500);compass_oled();}  }} 
void compass_oled() {beep(); int Azi0 = 0;int Azi1 = 0;int Azi2 = 0;
while (true) { Azi0 =cp();oleddel(); 
    oledlnp(0,0,2," Compass");                     
    oledp(0,20,1,Azi0);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();               //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);while(true){Azi1 =cp();
    oledp(30,20,1," ",Azi1);oledp(" ");//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();                     //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);snd(1200,500);while(true){ Azi2 =(Azi0+Azi1)/2;
    oledp(70,20,1,"Med = ",Azi2);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();            //แสดงที่พิมพ์ผ่านจอOLED   
    compass_oled1();
    break;
    }}}}}}
void compass_oled1() {beep();int Azi0 = 0;int Azi1 = 0;int Azi2 = 0;
while (true) { Azi0 =cp();               
    oledp(0,30,1,Azi0);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();               //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);while(true){ Azi1 =cp();
    oledp(30,30,1," ",Azi1);oledp(" ");//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();                     //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);snd(1200,500);while(true){ Azi2 =(Azi0+Azi1)/2;
    oledp(70,30,1,"Med = ",Azi2);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();            //แสดงที่พิมพ์ผ่านจอOLED   
    compass_oled2();
    break;
    }}}}}}    
void compass_oled2() {beep();int Azi0 = 0;int Azi1 = 0;int Azi2 = 0;
while (true) { Azi0 =cp();               
    oledp(0,40,1,Azi0);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();               //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);while(true){ Azi1 =cp();
    oledp(30,40,1," ",Azi1);oledp(" ");//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();                     //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);snd(1200,500);while(true){ Azi2 =(Azi0+Azi1)/2;
    oledp(70,40,1,"Med = ",Azi2);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();            //แสดงที่พิมพ์ผ่านจอOLED  
    compass_oled3() ;
    break;
    }}}}}}   
void compass_oled3() {beep();int Azi0 = 0;int Azi1 = 0;int Azi2 = 0;
while (true) { Azi0 =cp();               
    oledp(0,50,1,Azi0);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();               //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);while(true){ Azi1 =cp();
    oledp(30,50,1," ",Azi1);oledp(" ");//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();                     //แสดงที่พิมพ์ผ่านจอOLED
  if (sw == 0){beep();delay(50);beep();delay(50);snd(1200,500);while(true){ Azi2 =(Azi0+Azi1)/2;
    oledp(70,50,1,"Med = ",Azi2);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();            //แสดงที่พิมพ์ผ่านจอOLED  
    compass_oled4() ;
    break;
    }}}}}} 
void compass_oled4() {oledlnp(0,60,1,"---------------");oledplay();  
  while (true) {if(sw == 0){beep();delay(50);beep();delay(50);snd(1200,500); sv_knob();}}
  }        
void ana22() {
  while (true) {
    int b0 =inA(0);int b1 =inA(1);int b2 =inA(2);int b3 =inA(3);int b4 =inA(4);int Azi1 =cp();
    oleddel();                      
    oledp(70,0,1,b0); //พิมพ์ค่า A0 = ค่าจากสัญญาณAnalog0
    oledp(70,8,1,b1);//พิมพ์ค่า A1 = ค่าจากสัญญาณAnalog1
    oledp(70,16,1,b2);//พิมพ์ค่า A2 = ค่าจากสัญญาณAnalog2
    oledp(70,24,1,b3);//พิมพ์ค่า A3 = ค่าจากสัญญาณAnalog3
    oledlnp(70,32,1,b4);//พิมพ์ค่า A4 = ค่าจากสัญญาณAnalog4
    oledlnp("-------------");        //พิมพ์ค่า -----------------------
    oledlnp(70,48,1,Azi1);//พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
       oledplay();                     //แสดงที่พิมพ์ผ่านจอOLED
    delay(30);                      //หน่วงเวลา 30 มิลลิวินาที
  }
}
void track() {
  while (true) { // วนรอบloop while
   if((inA(0)>A0)and (inA(2)>A2)){RUN4(50,50);} // ถ้าA0 และA2 เจอขาวจะตรงไป
   if((inA(0)< A0)){RUN4(-100,100);delay(200);} // ถ้าA0 เจอดำจะเลี้ยวซ้าย
   if((inA(2)< A2)){RUN4(100,-100);delay(200);} // ถ้าA2 เจอดำจะเลี้ยวขวา
  }
}

void compass(){
 while(true){
    oleddel();                            // ล้างหน้าจอ
    oledcur(20, 0); oledsize(2);          // ตั้งเคอเซอร์ที่จุด20,0 ขนาดอักษร2
    oledlnp("Compass");                   //พิมพ์ค่า A0 = ค่าจากสัญญาณAnalog0
    oledp(" Azi = "); oledlnp(cp());      //พิมพ์ค่ามุม Azi = ค่ามุมอาซิมูซที่วัดได้จากเซนเซอร์HMC5883L
    oledsize(1);                          //ขนาดอักษร1
    oledp("     X   =  "); oledlnp(cpx());//พิมพ์ค่าการหมุนรอบแกนx = ค่าการหมุนรอบแกนxที่วัดได้จากเซนเซอร์HMC5883L
    oledp("     Y   =  "); oledlnp(cpy());//พิมพ์ค่าการหมุนรอบแกนy = ค่าการหมุนรอบแกนyที่วัดได้จากเซนเซอร์HMC5883L
    oledp("     Z   =  "); oledlnp(cpz());//พิมพ์ค่าการหมุนรอบแกนz = ค่าการหมุนรอบแกนzที่วัดได้จากเซนเซอร์HMC5883L
    oledplay();                           //แสดงที่พิมพ์ผ่านจอOLED
    delay(30);                            //หน่วงเวลา 30 มิลลิวินาที
  } 
  }
 void sv_knob(){
while(true){
int nob = inA(15); //ชื่อตัวแปร nob อ่านค่าสัญญาณAnalog Input พอร์ตA15
int k  = map(inA(15),0,1023,0,180);// ชื่อตัวแปรk ปรับอัตราส่วน ค่าAnalog inputพอร์ต15 จาก 0-1023 กลายเป็น 0-180
oleddel(); // ลบหน้าจอ OLED
oledcur(0,0);// ตำแหน่งเคอเซอร์แรกอยู่ที่ตำแหน่ง 0,0
oledsize(3);oledp("SVl=");oledp(k); // ตัวอักษรขนาด3 และพิมพ์ตัวอักษรคำว่า SV1 = องศาเซอร์โว
oledplay();// แสดงผลที่หน้าจอ OLED
sv1(k);
delay(10); // หน่วงเวลาทุกๆ 50 มิลลิวินาที
}}
void p() {
  while (true) { // วนรอบloop while
   if((inA(1)< A1)){RUN4(0,0);delay(100);RUN4(-100,-100);delay(300);set_straight();delay(100);RUN4(-100,-100);delay(300);RUN4(0,0);beep();break;}// ถ้าA1 เจอดำถอยหลังแล้วหยุด
   else if((inA(0)< A0)){RUN4(80,-80);delay(20);} // ถ้าA0 เจอดำจะเลี้ยวขวา
   else if((inA(2)< A2)){RUN4(-80,80);delay(20);} // ถ้าA2 เจอดำจะเลี้ยวซ้าย
   else{RUN4(150,150);}
  }
}

void p(int m) {
  while (true) { // วนรอบloop while
   if((inA(1)< A1)){RUN4(0,0);delay(200);RUN4(-100,-100);delay(300);RUN4(0,0);beep();break;}// ถ้าA1 เจอดำถอยหลังแล้วหยุด
   else if((inA(0)< A0)){RUN4(100,-80);delay(80);} // ถ้าA0 เจอดำจะเลี้ยวขวา
   else if((inA(2)< A2)){RUN4(-80,100);delay(80);} // ถ้าA2 เจอดำจะเลี้ยวซ้าย
   else{RUN4(m,m);}
  }
}
void p(int l,int r,int t) {
      int j = 0; // กำหนดให้J = 0
  while (true) { // วนรอบloop while
   if (j > t){RUN4(0,0);delay(200);beep();break;}// ถ้าA1 เจอดำถอยหลังแล้วหยุด
   else if((inA(0)< A0)){RUN4(100,-80);delay(80);} // ถ้าA0 เจอดำจะเลี้ยวขวา
   else if((inA(2)< A2)){RUN4(-80,100);delay(80);} // ถ้าA2 เจอดำจะเลี้ยวซ้าย
   else{RUN4(l,r);}
   j++;
  }
}
void set_straight(){
  while(true){RUN4(40,40);
    if((inA(0)< A0) and (inA(2)< A2) ){beep();RUN4(0,0);delay(10);break;} 
    if((inA(0)< A0)){ck(-70,70,2,0);break;} 
    if((inA(2)< A2)){ck(70,-70,0,0);break;}
    }
  }
  //set_straight();delay(100);
void ps() { //หยุดยิงลูกกระสุน
  while (true) { // วนรอบloop while
    RUN4(150,150);
   if((inA(1)< A1)){RUN4(0,0);delay(100);RUN4(-100,-100);delay(300);beep();set_straight();break;}
   if((inA(0)< A0)){RUN4(100,-80);delay(100);} // ถ้าA0 เจอดำจะเลี้ยวขวา
   if((inA(2)< A2)){RUN4(-80,100);delay(100);} // ถ้าA2 เจอดำจะเลี้ยวซ้าย
  } }
 void ps(int m) { //หยุดยิงลูกกระสุน
  while (true) { // วนรอบloop while
    RUN4(m,m);
   if((inA(1)< A1)){RUN4(0,0);beep();set_straight();break;}
   if((inA(0)< A0)){RUN4(100,-80);delay(100);} // ถ้าA0 เจอดำจะเลี้ยวขวา
   if((inA(2)< A2)){RUN4(-80,100);delay(100);} // ถ้าA2 เจอดำจะเลี้ยวซ้าย
  } }

void cpt(int l,int r ,int a){while(true){RUN4(l,r);if((cp()>a-5) and(cp()<a+5) ){RUN4(0,0);beep();break;}
if((cp()>=355>=a)and (cp()<=360<=a)and (cp()>=0>=a)and(cp()<=5<=a)){RUN4(0,0);beep();break;}}}

void cptt(int l,int r ,int a){while(true){RUN4(l,r);
if((cp()>=355>=a)and (cp()<=360<=a)and (cp()>=0>=a)and(cp()<=5<=a)){RUN4(0,0);beep();break;}
else if((cp()>a-5)and(cp()<a+5) ){RUN4(0,0);beep();break;}
}}

void cpp(int l,int r ,int a) { // แทร็คทิศเมื่อเซนเซอร์กลางA1เจอดำ ถึงจะถอยหลังนิดหน่อยแล้วหยุด
  while (true) { // วนรอบloop while
   if((inA(1)< A1)){RUN4(0,0);delay(200);RUN4(-100,-100);delay(300);RUN4(0,0);beep();break;}// ถ้าA1 เจอดำถอยหลังแล้วหยุด
   if ((cp()>a-5) and(cp()<a+5)){RUN4(l,r);}  // ถ้ามุมa อยู่ในช่วง +- 5 จากค่าที่ตั้งไว้จะเดินตรง
   if (cp() > (a + 5)) {RUN4 (100, -50);}// ถ้ามุมa มากกว่า + 5 จะเลี้ยวขวา
   if (cp() < (a - 5)) {RUN4 (-50, 100);} // ถ้ามุมa น้อยกว่า + 5 จะเลี้ยวซ้าย
   if((inA(0)< A0)){RUN4(100,-80);delay(80);} // ถ้าA0 เจอดำจะเลี้ยวขวา
   if((inA(2)< A2)){RUN4(-80,100);delay(80);} // ถ้าA2 เจอดำจะเลี้ยวซ้าย
  }
}
void cpp(int l,int r ,int a,int t) { // แทร็คทิศตามจำนวนนับ
  int j = 0; // กำหนดให้J = 0
  while (true){ // วนรอบloop while 
   if (j > t){RUN4(0,0);delay(200);beep();break;}// ถ้าA1 เจอดำถอยหลังแล้วหยุด
   if ((cp()>a-5) and(cp()<a+5)){RUN4(l,r);}  // ถ้ามุมa อยู่ในช่วง +- 5 จากค่าที่ตั้งไว้จะเดินตรง
   if (cp() > (a + 5)) {RUN4 (100, -100);}// ถ้ามุมa มากกว่า + 5 จะเลี้ยวขวา
   if (cp() < (a - 5)) {RUN4 (-100, 100);} // ถ้ามุมa น้อยกว่า + 5 จะเลี้ยวซ้าย
   if((inA(0)< A0)){RUN4(100,-80);delay(80);} // ถ้าA0 เจอดำจะเลี้ยวขวา
   if((inA(2)< A2)){RUN4(-80,100);delay(80);} // ถ้าA2 เจอดำจะเลี้ยวซ้าย
  j++;  // เพิ่มค่าJ+1ในแต่ละรอบของLoop While
  }
}
void cpb(int l,int r ,int a,int t) { // แทร็คทิศตามจำนวนนับ
  int j = 0; // กำหนดให้J = 0
  while (true){ // วนรอบloop while 
   if (j > t){RUN4(0,0);delay(200);beep();break;}// ถ้าA1 เจอดำถอยหลังแล้วหยุด
    
   if ((cp()>a-5) and(cp()<a+5)){RUN4(-l,-r);}  // ถ้ามุมa อยู่ในช่วง +- 5 จากค่าที่ตั้งไว้จะเดินตรง
   if (cp() > (a + 5)) {RUN4 (100, -100);}// ถ้ามุมa มากกว่า + 5 จะเลี้ยวขวา
   if (cp() < (a - 5)) {RUN4 (-100, 100);} // ถ้ามุมa น้อยกว่า + 5 จะเลี้ยวซ้าย
  j++;  // เพิ่มค่าJ+1ในแต่ละรอบของLoop While
  }
}
void cpl(int l,int a){while(true){RUN4(-l,l);if((cp()>a-5) and(cp()<a+5) ){RUN4(0,0);beep();break;}if((cp()>=355>=a)and (cp()<=360<=a)and (cp()>=0>=a)and(cp()<=5<=a)){RUN4(0,0);beep();break;}}} // เลี้ยวซ้ายล็อคทิศ
void cpr(int r,int a){while(true){RUN4(r,-r);if((cp()>a-5) and(cp()<a+5) ){RUN4(0,0);beep();break;}if((cp()>=355>=a)and (cp()<=360<=a)and (cp()>=0>=a)and(cp()<=5<=a)){RUN4(0,0);beep();break;}}} // เลี้ยวขวาล็อคทิศ


void cpl(int l, int d , int t) {int a = cp();int re_cp = a % 270; oleddel(); oledlnp(0, 0, 2,"Old = ", a); oledlnp("New = " ,a+90); oledplay();
      while (true) {RUN4(-l, l); if (cp() == 0){RUN4(-l, l);}
                                 if ((cp() > a + 90 )) { RUN4(0, 0);delay(50);beep();RUN4(-d, d);delay(t);RUN4(0, 0);beep();break;}
                                 if (( a >= 270 ) and (a <= 360)) {if (((cp() >= (re_cp))and(cp() <= 90))) {RUN4(0, 0);delay(50);beep();RUN4(-d, d);delay(t);RUN4(0, 0);beep();break;}}}}

void cpr(int r, int d , int t) {int a = cp();int re_cp = a + 270; oleddel(); oledlnp(0, 0, 2,"Old = ", a); oledlnp("New = " ,a+270); oledplay();
      while (true) {RUN4(r, -r);  if (cp() == 0){RUN4(r, -r);}
                                  if ((cp() < a - 90 )) { RUN4(0, 0);delay(50);beep();RUN4(d, -d);delay(t);RUN4(0, 0);beep();break;}
                                  if (( a >= 0 ) and (a <= 90)) {if (((cp() >= (re_cp))and(cp() >= 270))) {RUN4(0, 0);delay(50);beep();RUN4(r, -r);delay(t);RUN4(0, 0);beep();break;}}
                            }
                                 }
void st(int l,int r,int t){ RUN4(l,r);delay(t);RUN4(0,0);beep();} // ออกตัว หรือจบ ตามเวลาแยกมอเตอร์
void l (int l,int t){ RUN4(-l,l);delay(t);RUN4(0,0);beep();} // เลี้ยวซ้ายตามเวลา
void r (int r,int t){ RUN4(r,-r);delay(t);RUN4(0,0);beep();} // เลี้ยวขวาตามเวลา
void b (int b,int t){ RUN4(-b,-b);delay(t);RUN4(0,0);beep();} // เลี้ยวถอยตามเวลา
void shoot (int x){  sv1(sv_reverse); delay(x);sv1(sv_front);delay(200);  } // ยิงลูกบากศ์
//////////////////////////////////////////////////// 
void sound_set(){snd(1200,50);delay(30);}
////////////////////////////////////////////////////
////////
void ck( int p1,int p2,int s,int c)
{while(1){ RUN4(p1,p2);  
 if(s==0){if(c==0){if(inA(0)<A0)  {RUN4(0,0);break;}}if(c==1) {if(inA(0)>A0)   {RUN4(0,0);break;}}}
 if(s==1){if(c==0){if(inA(1)<A1)  {RUN4(0,0);break;}}if(c==1) {if(inA(1)>A1)   {RUN4(0,0);break;}}}
 if(s==2){if(c==0){if(inA(2)<A2)  {RUN4(0,0);break;}}if(c==1) {if(inA(2)>A2)   {RUN4(0,0);break;}}} 
 if(s==3){if(c==0){if(inA(3)<A3)  {RUN4(0,0);break;}}if(c==1) {if(inA(3)>A3)   {RUN4(0,0);break;}}}
  if(s==4){if(c==0){if(inA(4)<A4)  {RUN4(0,0);break;}}if(c==1) {if(inA(4)>A4)   {RUN4(0,0);break;}}}
 if(s==5){if(c==0){if(inA(5)<A5)  {RUN4(0,0);break;}}if(c==1) {if(inA(5)>A5)   {RUN4(0,0);break;}}}
 if(s==6){if(c==0){if(inA(6)<A6)  {RUN4(0,0);break;}}if(c==1) {if(inA(6)>A6)   {RUN4(0,0);break;}}}
 if(s==7){if(c==0){if(inA(7)<A7)  {RUN4(0,0);break;}}if(c==1) {if(inA(7)>A7)   {RUN4(0,0);break;}}}
}}

////////

void loop() {
  oleddel(); // ลบหน้าจอ OLED
//  int sw = in(53); // ตั้งชื่อ sw เป็นพอร์ตดิจิตอล 53
  int nob = inA(15); //ตั้งชื่อ nob เป็นพอร์ตอะนาล็อก 15
  int menu = map(nob, 0, 1023, 0, 11); // ทำการmap ค่าสัญญาณ analog input 0-1023 ให้มีจำนวนค่า 0-11
  oledcur(23, 0); oledsize(3); oledlnp("Menu"); // พิมพ์ตัวอักษาคำว่า Memu
  oledcur(45, 25); oledsize(3); oledlnp(menu); // พิมพ์ค่าตัวเลขmenuที่ได้จากการmapค่าตั้งแต่ 0-11
  oledcur(15, 55); oledsize(1); oledlnp("Robot & AI Center"); //พิมพ์ตัวอักษรคำว่าRobot & AI Center
  oledplay();// แสดงค่าตัวอักษา
  if ((sw == 0) and (menu == 0)) {sound_set();snd(1200,30); menu0(); }
  if ((sw == 0) and (menu == 1)) {sound_set(); menu1();  }
  if ((sw == 0) and (menu == 2)) {sound_set();menu2();   }
  if ((sw == 0) and (menu == 3)) {sound_set(); menu3();   }
  if ((sw == 0) and (menu == 4)) {sound_set(); menu4();   }
  if ((sw == 0) and (menu == 5)) {sound_set(); menu5(); }
  if ((sw == 0) and (menu == 6)) {sound_set(); menu6(); }
  if ((sw == 0) and (menu == 7)) {sound_set();menu7(); }
  if ((sw == 0) and (menu == 8)) {sound_set(); menu8(); }
  if ((sw == 0) and (menu == 9)) {sound_set(); menu9(); }
  if ((sw == 0) and (menu == 10)) {sound_set(); menu10(); }
  delay(50);
}

void menu0(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 0 ****เขียนCodeใต้บรรทัดนี้****
sensor();  
}
void menu1(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 1****เขียนCodeใต้บรรทัดนี้****

}
void menu2(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 2****เขียนCodeใต้บรรทัดนี้****

}
void menu3(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 3****เขียนCodeใต้บรรทัดนี้****

}
void menu4(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 4****เขียนCodeใต้บรรทัดนี้****

}
void menu5(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 5****เขียนCodeใต้บรรทัดนี้****

}
void menu6(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 6****เขียนCodeใต้บรรทัดนี้****

}
void menu7(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 7****เขียนCodeใต้บรรทัดนี้****

}
void menu8(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 8****เขียนCodeใต้บรรทัดนี้****

}
void menu9(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 9****เขียนCodeใต้บรรทัดนี้****

}
void menu10(){// เมือกดปุ่มok(D53) พร้อมmemuหมายเลข 10****เขียนCodeใต้บรรทัดนี้****
menu1();menu2();menu3();menu4();menu5();menu6();menu7();menu8();menu9();
}
