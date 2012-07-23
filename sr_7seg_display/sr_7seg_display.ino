int clk = 8;
int out = 9;
int reset = 10;
int one[8] = {0,1,1,0,0,0,0,0};
int two[8] = {1,1,0,1,1,0,1,0};
int three[8] = {1,1,1,1,0,0,1,0};
int four[8] = {0,1,1,0,0,1,1,0};
int five[8] = {1,0,1,1,0,1,1,0};
int six[8] = {1,0,1,1,1,1,1,0};
int seven[8] = {1,1,1,0,0,0,0,0};
int eight[8] = {1,1,1,1,1,1,1,0};
int nine[8] = {1,1,1,1,0,1,1,0};
int zero[8] = {1,1,1,1,1,1,0,0};

void numberFunc(int number[]);

int j = 7;

void setup() 
{
  pinMode(clk, OUTPUT);
  pinMode(out, OUTPUT);
  pinMode(reset, OUTPUT);
  Serial.begin(9600);

}



void loop() 
{
 digitalWrite(reset, HIGH); 
 numberFunc(one);
 Serial.println("one");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(two);
  Serial.println("two");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(three);
  Serial.println("three");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(four);
  Serial.println("four");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(five);
  Serial.println("four");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(six);
  Serial.println("four");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(seven);
  Serial.println("four");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(eight);
  Serial.println("four");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(nine);
  Serial.println("four");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
 numberFunc(zero);
  Serial.println("four");
   delay(1000);
 digitalWrite(reset, LOW);
 digitalWrite(reset, HIGH);
  
}

void numberFunc(int number[])
{
   while(j != 0)
  {
     Serial.println(number[j-1]);
     delay(10);
    if (number[j-1] == 0)
    {
     digitalWrite(clk, LOW);
     digitalWrite(out, HIGH);
     digitalWrite(clk, HIGH);
    }
    if (number[j-1] == 1)
    {
     digitalWrite(clk, LOW);
     digitalWrite(out, LOW);
     digitalWrite(clk, HIGH);
    } 
    j--;
  }
  if (j == 0)
    j = 8;
  }

