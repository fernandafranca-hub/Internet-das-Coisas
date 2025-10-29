#define SAIDA 2
#define LED_0 8
#define LED_1 9
#define LED_2 10


int led2=0;
int led1=0;
int led0=0;
void setup()
{
  pinMode(SAIDA, OUTPUT);
  pinMode(LED_0,INPUT);
  pinMode(LED_1,INPUT);
  pinMode(LED_2,INPUT);
  Serial.begin(9600);
}


void loop()
{
  led2=digitalRead(LED_2);
  led1=digitalRead(LED_1);
  led0=digitalRead(LED_0);


  if(led2 && led1 && led0)
  {
  Serial.println("111 = 7");
  for(int i=0; i < 7; i++)
  {
    digitalWrite(SAIDA, HIGH);
    delay(500);
    digitalWrite(SAIDA,LOW );
    delay(500);
  }
  } else if(led2 && led1 && !led0)
  {
  Serial.println("110 = 6");
  for(int i=0; i<6; i++)
  {
    digitalWrite(SAIDA, HIGH);
    delay(500);
    digitalWrite(SAIDA,LOW );
    delay(500);
  }
  }else if(led2 && !led1 && led0)
  {
  Serial.println("101 = 5");
  for(int i=0; i<5; i++)
  {
    digitalWrite(SAIDA, HIGH);
    delay(500);
    digitalWrite(SAIDA,LOW );
    delay(500);
  }
  }else if(led2 && !led1 && !led0)
  {
  Serial.println("100 = 4");
  for(int i=0; i<4; i++)
  {
    digitalWrite(SAIDA, HIGH);
    delay(500);
    digitalWrite(SAIDA,LOW );
    delay(500);
  }
  }else if(!led2 && led1 && led0)
  {
  Serial.println("011 = 3");
  for(int i=0; i<3; i++)
  {
    digitalWrite(SAIDA, HIGH);
    delay(500);
    digitalWrite(SAIDA,LOW );
    delay(500);
  }
  }else if(!led2 && led1 && !led0)
  {
  Serial.println("010 = 2");
  for(int i=0; i<2; i++)
  {
    digitalWrite(SAIDA, HIGH);
    delay(500);
    digitalWrite(SAIDA,LOW );
    delay(500);
  }
  }else if(!led2 && !led1 && led0)
  {
  Serial.println("001 = 1");
  for(int i=0; i<1; i++)
  {
    digitalWrite(SAIDA, HIGH);
    delay(500);
    digitalWrite(SAIDA,LOW );
    delay(500);
  }
  }
  else
  {
  Serial.println("000 = 0");
  }

delay(2000);
}












