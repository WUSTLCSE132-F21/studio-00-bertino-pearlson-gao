/* helloworld
 *
 * output simple hello message
 *
 */

void setup() {
  Serial.begin(9600);
  Serial.println("Hello, world!");
  pinMode(13, OUTPUT);
  
}

void loop() {
  digitalWrite(13, LOW);
  Serial.print(millis()/1000);
  Serial.println(" seconds have elapsed");
  delay(1000);
  digitalWrite(13, HIGH);
  Serial.print(millis()/1000);
  Serial.println(" seconds have elapsed");
  delay(1000);
}
