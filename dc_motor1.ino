// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(A4, INPUT);
}

void loop()
{
  analogWrite(5,analogRead(A4));
}