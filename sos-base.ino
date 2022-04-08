/*
  SOS - Morse
  
  by Thierry PIGOT

  This example code is in the public domain.

  https://www.thierry-pigot.fr
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

//  Fonction de flash
void flash( int duree ) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duree);
  digitalWrite(LED_BUILTIN, LOW);
  delay(duree);
}


// the loop function runs over and over again forever
void loop() {
  
  // S
  flash(200); flash(200); flash(200);
  delay(300);
  // O
  flash(500); flash(500); flash(500);
  delay(300);
  // S
  flash(200); flash(200); flash(200);
  delay(1000);

}
