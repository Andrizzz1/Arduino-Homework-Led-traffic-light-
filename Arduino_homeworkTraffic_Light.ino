int DELAY_TIME = 3000;
int DIGITAL_PIN_2 = 2;
int DIGITAL_PIN_4 = 4;
int DIGITAL_PIN_7 = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(DIGITAL_PIN_2,OUTPUT);
pinMode(DIGITAL_PIN_4,OUTPUT);
pinMode(DIGITAL_PIN_7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(DIGITAL_PIN_2,HIGH);
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_2,LOW);

digitalWrite(DIGITAL_PIN_4,HIGH);
delay(1000);
digitalWrite(DIGITAL_PIN_4,LOW);

digitalWrite(DIGITAL_PIN_7,HIGH);
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_7,LOW);
}
