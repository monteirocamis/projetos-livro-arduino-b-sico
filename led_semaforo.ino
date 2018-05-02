// projeto 3 - semaforo
int ledDelay = 1000;    // espera entre as alterações
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;


void setup() {
 pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
   pinMode(greenPin, OUTPUT);
}

void loop() {
 digitalWrite(redPin, HIGH);      //acende vermelha
 delay(ledDelay);                 // espera 5 segundos

digitalWrite(yellowPin, HIGH);      //acende amarela
delay(2000);                     // espera 5 segundos

digitalWrite(greenPin, HIGH);      //acende verde
digitalWrite(redPin, LOW);             //apaga luz vermelha
digitalWrite(yellowPin, LOW);       //apaga luz amarela
 delay(ledDelay);                     // espera 5 segundos

digitalWrite(yellowPin, HIGH);      //acende luz amarela
digitalWrite(greenPin, LOW);       //apaga luz verde
 delay(2000);                     // espera 2 segundos

digitalWrite(yellowPin, LOW);       //apaga luz amarela
                   


}
