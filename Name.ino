const int a = 13;
const int b = 12;
const int c = 11;
const int d = 10;
const int e = 9;
const int f = 8;
const int g = 2;
const int h = 6;
const int j = 5;

void setup ()
{
  Serial.begin(9600);
 pinMode (a,OUTPUT) ;
 pinMode (b,OUTPUT) ;
 pinMode (c,OUTPUT) ;
 pinMode (d,OUTPUT) ;
 pinMode (e,OUTPUT) ;
 pinMode (f,OUTPUT) ;
 pinMode (g,OUTPUT) ;
 pinMode (j,OUTPUT);
}

void loop ()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(j, HIGH);

  delay(1000);




digitalWrite(b, LOW);
digitalWrite(c, LOW);


delay(1000);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(j, HIGH);


delay(1000);

digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);

delay(2000);

digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(f, LOW);
digitalWrite(j, LOW);
delay(1000);

digitalWrite(a, HIGH);
delay(1000);

digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(f, HIGH);
delay(1000);

digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(f, LOW);
digitalWrite(j, LOW);
delay(1000);

digitalWrite(d, LOW);
delay(4000);

}
