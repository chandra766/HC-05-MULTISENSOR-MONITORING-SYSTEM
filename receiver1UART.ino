char data;

void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);

  digitalWrite(8, LOW);   // Initially OFF
}

void loop()
{
  if (Serial.available() > 0)
  {
    data = Serial.read();

    if (data == '1')
    {
      digitalWrite(8, HIGH);   // Stay ON
    }
    else if (data == '0')
    {
      digitalWrite(8, LOW);    // Stay OFF
    }
  }
}

