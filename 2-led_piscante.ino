// projeto 2 - LED sos
int ledPin = 10;


void setup() {
  pinMode(ledPin, OUTPUT);     //define o pino como saida//
}

void loop() {
  
  // 3 pontos
for (int x=0; x<3; x++){
  digitalWrite(ledPin, HIGH); //acende led
  delay(150);                 //espera 150ms
  digitalWrite(ledPin, LOW);  //apaga led
  delay(1000);                //espera 100ms
  }
  delay(100);                  //espera  100ms para marcar o intervalo entre as letras 

// 3 traços
for (int x=0; x<3; x++){
  digitalWrite(ledPin, HIGH); //acende led
  delay(400);                 //espera 400ms
  digitalWrite(ledPin, LOW);  //apaga led
  delay(1000);                //espera 100ms
  }
  delay(100);

//3 pontos novamente
for (int x=0; x<3; x++){
  digitalWrite(ledPin, HIGH); //acende led
  delay(150);                 //espera 150ms
  digitalWrite(ledPin, LOW);  //apaga led
  delay(1000);                //espera 100ms
  }
  delay(5000);                //espera 5 segundos antes de repetir tudo do inicio
}
