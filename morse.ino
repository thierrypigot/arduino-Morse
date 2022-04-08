/*
  Morse
  
  by Thierry PIGOT

  This example code is in the public domain.

  https://www.thierry-pigot.fr
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void short_space() {
  delay(300);
}

void long_space() {
  delay(1000);
}


void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void a(){ dot(); dash(); short_space(); }
void b(){ dash(); dot(); dot(); dot(); short_space(); }
void c(){ dash(); dot(); dash(); dot(); short_space(); }
void d(){ dash(); dot(); dot(); short_space(); }
void e(){ dot(); short_space(); }
void f(){ dot(); dot(); dash(); dot(); short_space(); }
void g(){ dash(); dash(); dot(); short_space(); }
void h(){ dot(); dot(); dot(); dot(); short_space(); }
void i(){ dot(); dot(); short_space(); }
void j(){ dot(); dash(); dash(); dash(); short_space(); }
void k(){ dash(); dot(); dash(); short_space(); }
void l(){ dot(); dash(); dot(); dot(); short_space(); }
void m(){ dash(); dash(); short_space(); }
void n(){ dash(); dot(); short_space(); }
void o(){ dash(); dash(); dash(); short_space(); }
void p(){ dot(); dash(); dash(); dot(); short_space(); }
void q(){ dash(); dash(); dot(); dash(); short_space(); }
void r(){ dot(); dash(); dot(); short_space(); }
void s(){ dot(); dot(); dot(); short_space(); }
void t(){ dash(); short_space(); }
void u(){ dot(); dot(); dash(); short_space(); }
void v(){ dot(); dot(); dot(); dash(); short_space(); }
void w(){ dot(); dash(); dash(); short_space(); }
void x(){ dash(); dot(); dot(); dash(); short_space(); }
void y(){ dash(); dot(); dash(); dash(); short_space(); }
void z(){ dash(); dash(); dot(); dot(); short_space(); }

void un(){ dot(); dash(); dash(); dash(); dash(); short_space(); }
void deux(){ dot(); dot(); dash(); dash(); dash(); short_space(); }
void trois(){ dot(); dot(); dot(); dash(); dash(); short_space(); }
void quatre(){ dot(); dot(); dot(); dot(); dash(); short_space(); }
void cinq(){ dot(); dot(); dot(); dot(); dot(); short_space(); }
void six(){ dash(); dot(); dot(); dot(); dot(); short_space(); }
void sept(){ dash(); dash(); dot(); dot(); dot(); short_space(); }
void huit(){ dash(); dash(); dash(); dot(); dot(); short_space(); }
void neuf(){ dash(); dash(); dash(); dash(); dot(); short_space(); }
void zero(){ dash(); dash(); dash(); dash(); dash(); short_space(); }

// the loop function runs over and over again forever
void loop() {
  

  //  bonjour thierry
  b(); o(); n(); j(); o(); u(); r(); long_space();
  t(); h(); i(); e(); r(); r(); y(); long_space();

  //  ne pas oublier de prendre du pain
  n(); e(); long_space();
  p(); a(); s(); long_space();
  o(); u(); b(); l(); i(); e(); r(); long_space();
  d(); e(); long_space();
  p(); r(); e(); n(); d(); r(); e(); long_space();
  d(); u(); long_space();
  p(); a(); i(); n(); long_space();  
  
}
