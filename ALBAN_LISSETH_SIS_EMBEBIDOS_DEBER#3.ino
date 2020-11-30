String pregunta1 = "Quito es la capital del Ecuador?";
String pregunta2 = "El color blanco es un color neutro?";
String pregunta3 = "1+1=3?";
String pregunta4 = "Italia es un pais Europeo?";
String pregunta5 = "Tokio se encuenra en Japon?";
String pregunta6 = "la bicicleta tiene 2 llantas?";
String pregunta7 = "El leon es el rey de la selva?";
String pregunta8 = "el cuadrado tiene 4 lados?";
float num = 0;
String dato;
String res = "";
int conta = 0;
int correct = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Escribimos por el puerto serie mensaje de inicio
  Serial.println("Responda las preguntas con S para SI y N para No");
  Serial.println("Presione una tecla para continuar");
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0)
  {
    dato = Serial.readString();
    dato.toLowerCase();
    if (res == dato)
    {
      correct++;
    }



    if (conta == 5)
    {
      Serial.println("");
      Serial.print("Usted ha respondido correctamente ");
      Serial.print(correct);
      Serial.println(" preguntas");

      conta++;
      if (correct == 0)
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
      }
      else if (correct == 1)
      {
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        delay(300);
      }
      else if (correct == 2)
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
      }
      else if (correct == 3)
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
      }
      else if (correct == 4)
      {
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
      }
      else if (correct == 5)
      {
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        delay(300);
      }
    }
    else if (conta < 5)
    {
      num = random(1, 8);
      conta++;
      Serial.println("");
      if (num == 1)
      {
        Serial.println(pregunta1);
        res = "s";
      }
      else  if (num == 2)
      {
        Serial.println(pregunta2);
        res = "n";
      }
      else  if (num == 3)
      {
        Serial.println(pregunta3);
        res = "n";
      }
      else  if (num == 4)
      {
        Serial.println(pregunta4);
        res = "s";
      }
      else  if (num == 5)
      {
        Serial.println(pregunta5);
        res = "s";
      }
      else  if (num == 6)
      {
        Serial.println(pregunta6);
        res = "s";
      }
      else  if (num == 7)
      {
        Serial.println(pregunta7);
        res = "s";
      }
      else  if (num == 8)
      {
        Serial.println(pregunta8);
        res = "s";
      }
    }

  }


  delay(300);
}
