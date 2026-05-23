// En esta parte se les asigna un nombre a los pines fisicos 
//de la placa del arduino para facilitar su uso.
#define trigPin 9
#define echoPin 10

#define buzzer 8
#define RED 7

long duration;
int distance;

// se le informa al arduino con cuales pines debe 
// enviar la informacion u salidas y 
//cuales van a recibirlos u entradas.
void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(RED, OUTPUT);

  Serial.begin(9600);
}
// el loop esta para que esta orden se ejecute varias veces 
// pero igual se divide en tres zonas distintas.
void loop() {
//la primera parte se usa para el envio de del 
//pulso de sonido inaudible para medir "profundidad".
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

// el echopin sirve para medir el tiempo que se 
// demora en chocar con una superficie y la distancia asignada
  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2; // se pasa de microsegundos a centimetros

  Serial.println(distance);
// el if se encargara de que si se invade la distancia asignada
// el pin debera encender y sonara el buzzer
// sino se invade el led no encendera y no sonara el buzzer
  if(distance < 20){

    digitalWrite(RED, HIGH);


    tone(buzzer, 1);

  }else{

    digitalWrite(RED, LOW);
   

    noTone(buzzer);
  }

  delay(200);
}