const int redPin = 2;     // Pin conectado al LED rojo
const int yellowPin = 3;  // Pin conectado al LED amarillo
const int greenPin = 4;   // Pin conectado al LED verde

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    switch (command) {
      case 'R':
        // Encender luz roja y apagar las otras
        digitalWrite(redPin, HIGH);
        digitalWrite(yellowPin, LOW);
        digitalWrite(greenPin, LOW);
        break;
      case 'Y':
        // Encender luz amarilla y apagar las otras
        digitalWrite(redPin, LOW);
        digitalWrite(yellowPin, HIGH);
        digitalWrite(greenPin, LOW);
        break;
      case 'G':
        // Encender luz verde y apagar las otras
        digitalWrite(redPin, LOW);
        digitalWrite(yellowPin, LOW);
        digitalWrite(greenPin, HIGH);
        break;
      default:
        // Apagar todas las luces en caso de un comando desconocido
        digitalWrite(redPin, LOW);
        digitalWrite(yellowPin, LOW);
        digitalWrite(greenPin, LOW);
        break;
    }
  }
}
