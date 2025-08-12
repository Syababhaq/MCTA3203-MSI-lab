#include <SoftwareSerial.h>

// Define RX and TX pins for the Bluetooth module
const int BT_RX = 0; // Connect to TX of the Bluetooth module
const int BT_TX = 1; // Connect to RX of the Bluetooth module

// Create a SoftwareSerial object
SoftwareSerial bluetooth(BT_RX, BT_TX);

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);
  Serial.println("Arduino Bluetooth Serial Communication");

  // Initialize Bluetooth Serial
  bluetooth.begin(9600);
  Serial.println("Bluetooth module is ready");
}

void loop() {
  // Check if data is available from the phone
  if (bluetooth.available()) {
    char received = bluetooth.read();
    Serial.print("From Phone: ");
    Serial.println(received);
    // Echo back the received data to the phone
    bluetooth.print("You sent: ");
    bluetooth.println(received);
  }

  // Check if data is available from the Serial Monitor
  if (Serial.available()) {
    char input = Serial.read();
    bluetooth.println(input); // Send data to the phone
    Serial.print("Sent to Phone: ");
    Serial.println(input);
    Serial.println(";");
  }
}
