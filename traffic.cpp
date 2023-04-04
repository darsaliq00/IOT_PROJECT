#include <wiringPi.h>
#include <iostream>

#define LED_RED 17   // GPIO17 is connected to the red LED
#define LED_GREEN 27 // GPIO27 is connected to the green LED
#define SPEAKER 18   // GPIO18 is connected to the speaker

int main() {
  wiringPiSetupGpio(); // Initialize wiringPi library
  
  pinMode(LED_RED, OUTPUT);   // Set red LED as an output
  pinMode(LED_GREEN, OUTPUT); // Set green LED as an output
  pinMode(SPEAKER, OUTPUT);   // Set speaker as an output
  
  while (true) {
    digitalWrite(LED_RED, HIGH);  // Turn on the red LED and speaker for "Stop" signal
    digitalWrite(SPEAKER, HIGH);
    std::cout << "Stop" << std::endl;
    delay(5000); // Wait for 5 seconds
    
    digitalWrite(LED_RED, LOW);  // Turn off the red LED and speaker
    digitalWrite(SPEAKER, LOW);
    
    digitalWrite(LED_GREEN, HIGH); // Turn on the green LED and speaker for "Go" signal
    digitalWrite(SPEAKER, HIGH);
    std::cout << "Go" << std::endl;
    delay(5000); // Wait for 5 seconds
    
    digitalWrite(LED_GREEN, LOW); // Turn off the green LED and speaker
    digitalWrite(SPEAKER, LOW);
  }

  return 0;
}
