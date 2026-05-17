void setup() {
  // Inicializa el puerto serie a 115200 baudios
  Serial.begin(115200);

  // Establece la resolución del ADC del pin 34 a 8 bits
  analogReadResolution(10);
}

void loop() {
  // Lee el valor del pin 34
  int valor1 = analogRead(34);
  int valor2 = analogRead(35);
  int valor = valor1 + valor2;
  // Imprime el valor leído en el monitor serie
  Serial.println(valor);
  delay(10);
}
