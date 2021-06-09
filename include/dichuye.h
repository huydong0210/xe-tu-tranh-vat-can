
void tien1(int speed)
{
    analogWrite(ena,speed);
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
}
void lui1(int speed)
{
    analogWrite(ena,speed);
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
}
void tien2(int speed)
{
    analogWrite(enb,speed);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
}
void lui2(int speed)
{
    analogWrite(enb,speed);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
}
void dung1()
{
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
}
void dung2()
{
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
}
void quayDauTrai()
{
     tien1(90);
     lui2(90);
     delay(170);
     dung1();
     dung2();
}
void quayDauPhai()
{
     tien2(90);
     lui1(90);
     delay(170);
     dung1();
     dung2();
}
void rePhai1Chut()
{
    tien2(100);
    dung1();
    delay(250);
    dung2();

}
void reTrai1Chut()
{
    tien1(100);
    dung2();
    delay(250);
    dung1();
}
void diThang()
{
    tien1(75);
    tien2(75);
}
void luiPhai()
{
    lui1(100);
    dung2();
    delay(300);
    dung1();
}
void luiTrai()
{
    lui2(100);
    dung1();
    delay(300);
    dung2();
}
void lui()
{
    lui1(100);
    lui2(100);
    delay(200);
    dung1();
    dung2();
}
void luiNhe()
{
    lui1(80);
    lui2(80);
    delay(350);
    dung1();
    dung2();
}