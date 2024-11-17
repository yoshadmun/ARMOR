const int leds[] = {3, 4, 6, 7, 8, 10, 11, 12};
const int pir = 2;
const int buzzer = 9;
int motion;
unsigned long previousMillis = 0;
const long interval = 100;
bool ledState = LOW;

void setup() {
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  motion = digitalRead(pir);
  if (motion) {
    digitalWrite(buzzer, HIGH);
    blinkLedNonBlocking(leds, interval);
  } else {
    for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
      digitalWrite(leds[i], LOW);
    }
    digitalWrite(buzzer, LOW);
  }
}

void blinkLedNonBlocking(const int pins[], long interval) {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    ledState = !ledState;
    for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
      digitalWrite(pins[i], ledState);
    }
  }
}