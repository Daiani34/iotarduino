// C++ code
//
void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int a[4] = {2,5,8,13};            //Definindo as portas dos LEDS
  int i = 0;                        //Controle do Index do Array
  int j = 0;                        //Controle de sequencia que se acendem os leds
  if (digitalRead(7) == 1) {        //Se o sensor de presença foi acionado (0 não acionado, 1 acionado)
    while(j < 5) {
      int led = a[i];               //Identifica qual LED acender
      digitalWrite(led, HIGH);      //Liga o LED
      delay(1000);                  //Delay 
      digitalWrite(led, LOW);       //Desliga o LED
      i = i + 1;                    //Incrementa o valor para trocar de LED na proxima iteracao
      if(i == 4) {        
        i = 0;
        j = j + 1;                  //Depois de cada sequencia, incrementa o valor da sequencia que se acendem os leds
      } // end if
    } // end while
  } // end if
} // end loop

