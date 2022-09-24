// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int a[4] = {2,5,8,13};
  int i = 0;
  
  while() {
  	int led = a[i];
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    i = i + 1;
    if(i == 4) {
      i=0;
    }
  }
}
