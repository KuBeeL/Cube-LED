void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
//int-------------------------
int dld = 700; //descente explosion
int dl = 105; //vitesse chenillard
int dlh = 100; //vitesse helice
//Explosion------------------------------------------------------------------------
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 0);
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
delay(1500);

analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
analogWrite(6 , 125);
delay(dld);

analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
analogWrite(6 , 125);
delay(dld);

analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
analogWrite(6 , 125);
delay(700);
//---------------------------
analogWrite(2 , 255);
analogWrite(3 , 255);
analogWrite(4 , 255);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 255);
analogWrite(9 , 255);
analogWrite(10 , 255);
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
delay(400);
analogWrite(13 , 255); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(400);
analogWrite(13 , 255); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 255); //haut
delay(2000);
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 255); //haut
delay(300);
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
delay(300);
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
delay(700);
//Spirale x2 ---------------------------------------------------------------------------------------
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 0);
for(int i = 0; i< 2; i++)
{
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut

analogWrite(4 , 255);
analogWrite(6 , 0);
delay(dl);
analogWrite(3 , 255);
analogWrite(4 , 0);
delay(dl);
analogWrite(7 , 255);
analogWrite(3 , 0);
delay(dl);
analogWrite(10 , 255);
analogWrite(7 , 0);
delay(dl);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dl);
analogWrite(8 , 255);
analogWrite(9 , 0);
delay(dl);
analogWrite(5 , 255);
analogWrite(8 , 0);
delay(dl);
analogWrite(2 , 255);
analogWrite(5 , 0);
delay(dl);
//-----------------------
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
analogWrite(2 , 0);
analogWrite(4 , 255);
delay(dl);
analogWrite(3 , 255);
analogWrite(4 , 0);
delay(dl);
analogWrite(7 , 255);
analogWrite(3 , 0);
delay(dl);
analogWrite(10 , 255);
analogWrite(7 , 0);
delay(dl);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dl);
analogWrite(8 , 255);
analogWrite(9 , 0);
delay(dl);
analogWrite(5 , 255);
analogWrite(8 , 0);
delay(dl);
analogWrite(2 , 255);
analogWrite(5 , 0);
delay(dl);
//---------------------
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
analogWrite(2 , 0);
analogWrite(4 , 255);
delay(dl);
analogWrite(3 , 255);
analogWrite(4 , 0);
delay(dl);
analogWrite(7 , 255);
analogWrite(3 , 0);
delay(dl);
analogWrite(10 , 255);
analogWrite(7 , 0);
delay(dl);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dl);
analogWrite(8 , 255);
analogWrite(9 , 0);
delay(dl);
analogWrite(5 , 255);
analogWrite(8 , 0);
delay(dl);
analogWrite(2 , 255);
analogWrite(5 , 0);
delay(dl);
analogWrite(4 , 255);
analogWrite(2 , 0);
delay(dl);
analogWrite(6 , 255);
analogWrite(4 , 0);

delay(dl);
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(dl);
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
delay(dl);
}

//helice bas------------------------------------------------------------------------
for(int i = 0; i< 3; i++)
{
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut

analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dlh);
}
//helice milieu------------------------------------------------------------------------
for(int i = 0; i< 3; i++)
{
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut

analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dlh);
}

//helice haut------------------------------------------------------------------------
for(int i = 0; i< 3; i++)
{
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut

analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dlh);
analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dlh);
}
//Donkey Kong-----------------------------------------------------------------------------
int dldkd = 200;
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut

analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dldkd);

//---
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut

analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dldkd);

//--------
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut

analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dldkd);

delay(400);

analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dldkd);

//------
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut

analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dldkd);

analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
analogWrite(2 , 0);
analogWrite(3 , 255);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 0);
analogWrite(7 , 255);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 255);
delay(dldkd);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 255);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 255);
analogWrite(10 , 0);
delay(dldkd);
analogWrite(2 , 255);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 255);
analogWrite(6 , 0);
analogWrite(7 , 0);
analogWrite(8 , 255);
analogWrite(9 , 0);
analogWrite(10 , 0);
//Allumage haut transition-------------------------------------------------------------------------
analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
analogWrite(2 , 255);
analogWrite(5 , 255);
analogWrite(8 , 255);
delay(500);
analogWrite(4 , 255);
analogWrite(6 , 255);
analogWrite(9 , 255);
delay(500);
analogWrite(3 , 255);
analogWrite(7 , 255);
analogWrite(10 , 255);
delay(500);
//Persistence retinienne--------------------------------------------------------------------------------
double p = 600;

while (p>100) {
p = p-100;
analogWrite(2 , 255);
analogWrite(3 , 255);
analogWrite(4 , 255);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 255);
analogWrite(9 , 255);
analogWrite(10 , 255);

analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
delay(p);
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(p);
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
delay(p);
}

while (p>30) {
p = p-2;
analogWrite(2 , 255);
analogWrite(3 , 255);
analogWrite(4 , 255);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 255);
analogWrite(9 , 255);
analogWrite(10 , 255);

analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
delay(p);
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(p);
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
delay(p);
}

while (p>5) {
p = p-0.5;
analogWrite(2 , 255);
analogWrite(3 , 255);
analogWrite(4 , 255);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 255);
analogWrite(9 , 255);
analogWrite(10 , 255);

analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
delay(p);
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(p);
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
delay(p);
}
for(int i = 0; i< 200; i++)
{
analogWrite(2 , 255);
analogWrite(3 , 255);
analogWrite(4 , 255);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 255);
analogWrite(9 , 255);
analogWrite(10 , 255);

analogWrite(13 , 0); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 255); //haut
delay(p);
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(p);
analogWrite(13 , 255); //bas
analogWrite(12 , 0); //milieu
analogWrite(11 , 0); //haut
delay(p);
}
//FIN------------------------------------
analogWrite(2 , 255);
analogWrite(3 , 255);
analogWrite(4 , 255);
analogWrite(5 , 255);
analogWrite(6 , 255);
analogWrite(7 , 255);
analogWrite(8 , 255);
analogWrite(9 , 255);
analogWrite(10 , 255);

analogWrite(13 , 255); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 255); //haut
delay(1000);
analogWrite(13 , 255); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(1000);
analogWrite(13 , 0); //bas
analogWrite(12 , 255); //milieu
analogWrite(11 , 0); //haut
delay(1000);
analogWrite(2 , 0);
analogWrite(3 , 0);
analogWrite(4 , 0);
analogWrite(5 , 0);
analogWrite(6 , 255);
analogWrite(7 , 0);
analogWrite(8 , 0);
analogWrite(9 , 0);
analogWrite(10 , 0);
delay(2000);
analogWrite(6 , 0);
}
