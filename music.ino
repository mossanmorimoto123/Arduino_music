const int loudspeaker_pin = 13;
const int base_time = 16 * 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  delay(100);
tone(loudspeaker_pin, 587);
delay(base_time / 4);
tone(loudspeaker_pin, 698);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 1109);
delay(base_time / 2);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 1109);
delay(base_time / 2);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 698);
delay(base_time / 4);
tone(loudspeaker_pin, 659);
delay(base_time / 2);
tone(loudspeaker_pin, 698);
delay(base_time / 4);
}
