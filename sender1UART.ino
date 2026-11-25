const int buttonPin = 2;

bool ledState = false;
bool lastButton = HIGH;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  bool currentButton = digitalRead(buttonPin);

  // Button Press Detect
  if (lastButton == HIGH && currentButton == LOW) 
  {
    ledState = !ledState;

    if (ledState)
      Serial.write('1');
    else
      Serial.write('0');

    delay(200);      // Debounce
  }

  lastButton = currentButton;
}
