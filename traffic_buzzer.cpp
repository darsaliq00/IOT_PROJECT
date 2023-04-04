#include <wiringPi.h>

// Pin numbers for the LEDs and buzzer
const int redPin = 17;
const int greenPin = 18;
const int buzzerPin = 27;

// Function to beep the buzzer for a short time
void beepBuzzer() {
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
}

int main() {
    // Initialize wiringPi and set pin modes
    wiringPiSetupGpio();
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);

    // Loop through the traffic light sequence indefinitely
    while (true) {
        // Green light
        digitalWrite(greenPin, HIGH);
        digitalWrite(redPin, LOW);
        beepBuzzer();
        delay(5000);

        // Yellow light
        digitalWrite(greenPin, LOW);
        digitalWrite(redPin, HIGH);
        beepBuzzer();
        delay(2000);

        // Red light
        digitalWrite(greenPin, LOW);
        digitalWrite(redPin, HIGH);
        beepBuzzer();
        delay(5000);

        // Yellow light
        digitalWrite(greenPin, LOW);
        digitalWrite(redPin, HIGH);
        beepBuzzer();
        delay(2000);
    }

    return 0;
}
