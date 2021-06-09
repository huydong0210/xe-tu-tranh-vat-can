#include <Arduino.h>
#include "khaibao.h"
#include "prototype.h"
#include "dichuye.h"
#include "canquay.h"
#include "cambien.h"
#include "hamphu.h"
int a[]={0,0,0};
void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  Serial.begin(9600); //Mở cổng Serial ở 9600
  pinMode(trig, OUTPUT); //Chân trig xuất tín hiệu
  pinMode(echo, INPUT); //Chân echo nhận tín hiệu
  myservo.attach(servoPin);
}
void loop() {
  myservo.write(78);
  delay(550);
  a[0]=doKhoangCach();
  delay(50);
  myservo.write(35);
  delay(550);
  a[1]=doKhoangCach();
  delay(50);
  myservo.write(120);
  delay(550);
  a[2]=doKhoangCach();
  delay(50);
  myservo.write(78);
  delay(500);
  if (a[1]<10 || a[2]<10)
    {
      if (a[1]<10)
        {
          luiNhe();
          delay(100);
          reTrai1Chut();
          delay(100);
          return;
        }
      else
        {
          luiNhe();
          delay(100);
          rePhai1Chut();
          delay(100);
          return;
        }
    }
  if (a[0]>40)
    {
      while (a[0]>15)
        {
          diThang();
          a[0]=doKhoangCach();
          if (a[0]<=15)
          {
            lui();
            delay(300);
            int x=ranDom();
          if (x==0)
            {
              luiNhe();
              delay(100);
              quayDauPhai();
              delay(100);
              return;
            }
          else 
            {
              luiNhe();
              delay(100);
              quayDauTrai();
              delay(100);
              return;
            }
            dung1();
            dung2();
            delay(500);
            break;
          }
        }
      return;
    }
  else
    {
      if (a[0]<17 && a[1]<17 && a[2]<17)
        {
          lui();
          delay(100);
          int x=ranDom();
          if (x==0)
            {
              luiNhe();
              luiPhai();
              delay(100);
              return;
            }
          else
            {
              luiNhe();
              luiTrai();
              delay(100);
              return;
            }
        }
      else
      {
      int k=doKhoangCach();
      if (k==0)
        {
          int x=ranDom();
          if (x==0)
            {
              luiNhe();
              delay(100);
              quayDauPhai();
              delay(100);
              return;
            }
          else 
            {
              luiNhe();
              delay(100);
              quayDauTrai();
              delay(100);
              return;
            }
        }
      else
        {
          if (k==1)
            {
              luiNhe();
              delay(100);
              quayDauPhai();
              delay(100);
              return;
            }
          else
            {
              luiNhe();
              delay(100);
              quayDauTrai();
              delay(100);
              return;
            }
        }
      }
    }
}
