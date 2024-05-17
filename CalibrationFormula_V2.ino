const float R2 = 200000; // R2 in ohms
const float Vin = 12.0;  // Vin in volts
const float Vref = 3.0;  // Vref in volts


void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
      float Vout = Serial.readStringUntil('\n').toFloat();
      float Rdut = calculateRdut(Vin, Vref, Vout, R2);
      Serial.print("Vout: ");
      Serial.println(Vout,3);
      Serial.print("Rdut: ");
      Serial.println(Rdut);
  }
}

float calculateRdut(float Vin, float Vref, float Vout, float R2) {
  return (R2 * (Vin - Vref)) / (Vref - Vout);
}
