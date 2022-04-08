/*
  Morse
  
  by Thierry PIGOT

  This example code is in the public domain.

  https://www.thierry-pigot.fr


  Conventions de cadence :
  - Le rythme élémentaire est donné par la durée du point, le « ti ». Il se note par un point « . ».
  - Un « taah » est conventionnellement 3 fois plus long qu’un « ti ». Il se note par un trait horizontal « – ».
  - L’espacement entre les « ti » et « taah » dans une lettre a la longueur d’un « ti ». Il se note par le passage d’un symbole à l’autre.
  - L’espacement entre les lettres d’un mot a pour longueur un « taah » (3 « ti »). Il se note par un espace.
  - L’espacement entre les mots est d’au moins 5 « ti » (7 recommandés18, comme ici). Il se note par une barre oblique « / ».
  
*/

// the setup function runs once when you press reset or power the board

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

int cadence = 200;

void espace_lettre() {
  delay(cadence*3);
}

void espace_mot() {
  delay(cadence*4); // 7 - le dernier espace_lettre (3), soit 4
}


void ti(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(cadence);
  digitalWrite(LED_BUILTIN, LOW);
  delay(cadence);
}

void taah(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(cadence*3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(cadence);
}

void a(){ ti(); taah(); espace_lettre(); }
void b(){ taah(); ti(); ti(); ti(); espace_lettre(); }
void c(){ taah(); ti(); taah(); ti(); espace_lettre(); }
void d(){ taah(); ti(); ti(); espace_lettre(); }
void e(){ ti(); espace_lettre(); }
void f(){ ti(); ti(); taah(); ti(); espace_lettre(); }
void g(){ taah(); taah(); ti(); espace_lettre(); }
void h(){ ti(); ti(); ti(); ti(); espace_lettre(); }
void i(){ ti(); ti(); espace_lettre(); }
void j(){ ti(); taah(); taah(); taah(); espace_lettre(); }
void k(){ taah(); ti(); taah(); espace_lettre(); }
void l(){ ti(); taah(); ti(); ti(); espace_lettre(); }
void m(){ taah(); taah(); espace_lettre(); }
void n(){ taah(); ti(); espace_lettre(); }
void o(){ taah(); taah(); taah(); espace_lettre(); }
void p(){ ti(); taah(); taah(); ti(); espace_lettre(); }
void q(){ taah(); taah(); ti(); taah(); espace_lettre(); }
void r(){ ti(); taah(); ti(); espace_lettre(); }
void s(){ ti(); ti(); ti(); espace_lettre(); }
void t(){ taah(); espace_lettre(); }
void u(){ ti(); ti(); taah(); espace_lettre(); }
void v(){ ti(); ti(); ti(); taah(); espace_lettre(); }
void w(){ ti(); taah(); taah(); espace_lettre(); }
void x(){ taah(); ti(); ti(); taah(); espace_lettre(); }
void y(){ taah(); ti(); taah(); taah(); espace_lettre(); }
void z(){ taah(); taah(); ti(); ti(); espace_lettre(); }

void un(){ ti(); taah(); taah(); taah(); taah(); espace_lettre(); }
void deux(){ ti(); ti(); taah(); taah(); taah(); espace_lettre(); }
void trois(){ ti(); ti(); ti(); taah(); taah(); espace_lettre(); }
void quatre(){ ti(); ti(); ti(); ti(); taah(); espace_lettre(); }
void cinq(){ ti(); ti(); ti(); ti(); ti(); espace_lettre(); }
void six(){ taah(); ti(); ti(); ti(); ti(); espace_lettre(); }
void sept(){ taah(); taah(); ti(); ti(); ti(); espace_lettre(); }
void huit(){ taah(); taah(); taah(); ti(); ti(); espace_lettre(); }
void neuf(){ taah(); taah(); taah(); taah(); ti(); espace_lettre(); }
void zero(){ taah(); taah(); taah(); taah(); taah(); espace_lettre(); }

void point() { ti(); taah(); ti(); taah(); ti(); taah(); espace_lettre(); }
void virgule() { taah(); taah(); ti(); ti(); taah(); taah(); espace_lettre(); }
void inter() { ti(); ti(); taah(); taah(); ti(); ti(); espace_lettre(); }
void apo() { ti(); taah(); taah(); taah(); taah(); ti(); espace_lettre(); }
void excla() { taah(); ti(); taah(); ti(); taah(); taah(); espace_lettre(); }
void aro() { ti(); taah(); taah(); ti(); taah(); ti(); espace_lettre(); }

// the loop function runs over and over again forever
void loop() {

  //  bonjour thierry
  b(); o(); n(); j(); o(); u(); r(); espace_mot();
  t(); h(); i(); e(); r(); r(); y(); espace_mot();
  virgule(); espace_mot();

  //  ne pas oublier de prendre du pain
  n(); e(); espace_mot();
  p(); a(); s(); espace_mot();
  o(); u(); b(); l(); i(); e(); r(); espace_mot();
  d(); e(); espace_mot();
  p(); r(); e(); n(); d(); r(); e(); espace_mot();
  d(); u(); espace_mot();
  p(); a(); i(); n(); espace_mot();
  
  point(); espace_mot();

}
