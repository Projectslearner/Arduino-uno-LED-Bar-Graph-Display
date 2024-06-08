/*
    Project name : LED Graph Display
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-led-bar-graph-display
*/

const int sensorPin = A1; // Set pin of the Photoresistor sensor
const float GAMMA = 0.7;
const float RL10 = 50;

void setup() 
{
  Serial.begin(9600); // Start serial communication
}

void loop() 
{
  // Read the Photoresistor sensor value
  int sensorReading = analogRead(sensorPin);

  // Convert the analog value into lux value
  float voltage = sensorReading / 1024.0 * 5.0;
  float resistance = 2000.0 * voltage / (1.0 - voltage / 5.0);
  float lux = pow(RL10 * 1e3 * pow(10.0, GAMMA) / resistance, (1.0 / GAMMA));

  // Print lux value to Serial Monitor
  Serial.print("Lux: ");
  Serial.println(lux);

  delay(1000); // Adjust delay according to your needs
}
