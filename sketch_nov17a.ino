// Define the pin numbers
int motorPin1 = 6;
int motorPin2 = 7;
char val;
void setup()
{
    pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
//  pinMode(ledpin, OUTPUT);  // pin 13 (on-board LED) as OUTPUT
  Serial.begin(9600);       // start serial communication at 115200bps
}

void loop() {
  if ( Serial.available() )      // if data is available to read
  {
    val = Serial.read();         // read it and store it in 'val'
    Serial.println(val );
    if ( val == '0' )              // if '0' was received led 13 is switched off
    {
       // Turn the motor in one direction
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
    }
    if ( val == '1' )              // if '1' was received led 13 on
    {
       // Turn the motor in one direction
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
    }
  }
}
