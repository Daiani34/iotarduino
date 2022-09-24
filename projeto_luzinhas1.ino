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
  int a[4] = {2,5,8,13};            //Definindo as portas dos LEDS
  int i = 0;                        //Controle do Index do Array
  
  while() {
  	int led = a[i];                 //Identifica qual LED acender
    digitalWrite(led, HIGH);        //Liga o LED
    delay(1000);                    //Delay 
    digitalWrite(led, LOW);         //Desliga o LED
    i = i + 1;                      //Incrementa o valor para trocar de LED na proxima iteracao

    if (i == 4) {                   //Verifica se eh o ultimo elemento do array
      i=0;                          //Se for o ultimo elemento do array  atribui o valor do elemento inicial
    }
  }
}
