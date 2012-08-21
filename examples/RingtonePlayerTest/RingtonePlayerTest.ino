#define DEBUG

#include <RingtonePlayer.h>

void setup()
{
  Serial.begin(9600);
  
  int pin = 13;
  
  //Abba: Mamma Mia 
//  playRingtone(pin,"40 32f2 32#d2 32f2 8#d2 32#d2 32#d2 32f2 32g2 32f2 16.#d2 32- 16f2 8#d2 16#g2 32#g2 32#g2 32#g2 16g2 16.#d2 32- 8#a2 32#a2 32#a2 16#a2 16f2 16g2 8#g2 16g2 16g2 32g2 16g2 16d2 16#d2 8f2 16f2 8#d2 16#g2 32#g2 32#g2 32#g2 32g2 32#d2 32f2 16#d2");
  //Abba: Money Money Money v1
//  playRingtone(pin,"112 8e3 8e3 8e3 8e3 8e3 8e3 16e2 16a2 16c3 16e3 8#d3 8#d3 8#d3 8#d3 8#d3 8#d3 16f2 16a2 16c3 16#d3 4d3 8c3 8a2 8c3 4c3 2a2 32a2 32c3 32e3 8a3");
  //Abba: Money Money Money v2
//  playRingtone(pin,"200 4a1 8b1 4c2 8a1 4b1 4c2 4- 4c2 8a1 4b1 4c2 4- 4b1 8a1 4c2 4.c2 16- 1a1");
  //Adams Family v1
//  playRingtone(pin,"70 8#f1 16#f1 16#f1 16#f1 8b1 32#d2 8b1 32#g1 8e1 8#c2 32a1 8#a1 32#c2 8#a1 32#f1 8#d1 8b1 32#f1 8b1 32#d2 8b1 32#g1 8e1 8#c2 32b1 8#a1 32#f1 8#g1 32#a1 4b1 32#f1 8b1 32#d2 8b1 32#g1 8e1 8#c2 32a1 8#a1 32#c2 8#a1 32#f1 8#d1 8b1 32#f1 8b1 32#d2 8b1 32#g1 8e1");
  //Adams Family v2 
//  playRingtone(pin,"160 8c2 4f2 8a2 4f2 8c2 4b1 2g2 8f2 4e2 8g2 4e2 8e1 4a1 2f2 8c2 4f2 8a2 4f2 8c2 4b1 2g2 8f2 4e2 8c2 4d2 8e2 1f2 8c2 8d2 8e2 8f2 1- 8d2 8e2 8#f2 8g2 1- 8d2 8e2 8#f2 8g2 4- 8d2 8e2 8#f2 8g2 4- 4c2 8e2 1f2");
  //Aerosmith: I Don't Wanna Miss A Thing
//  playRingtone(pin,"125 2- 16a1 16- 16a1 16- 8a1 16- 4a2 16g2 16- 2g2 16- 4- 8- 16g2 16- 16g2 16- 16g2 8g2 16- 4c2 16#a1 16- 4a2 8g2 4f2 4g2 8d2 8f2 16- 16f2 16- 16c2 8c2 16- 4a2 8g2 16f2 16- 8f2 16- 16c2 16- 4g2 4f2");
  //Aha: Take on me 
  playRingtone(pin,"100 8- 16#a1 16#a1 16#a1 8#f1 8#d1 8#g1 8#g1 16#g1 16c2 16c2 16#c2 16#d2 16#c2 16#c2 16#c2 8#g1 8#f1 8#a1 8#a1 16#a1 16#g1 16#g1 16#a1 16#g1 16#a1 16#a1 16#a1 8#f1 8#d1 8#g1 8#g1 16#g1 16c2 16c2 16#c2 16#d2 16#c2 16#c2 16#c2 8#g1 8#f1 8#a1 8#a1");
  //Airwolf 
//  playRingtone(pin,"100 4e1 16a1 16b1 16d2 4e2 16g2 16#f2 16d2 4e2 16g2 16#f2 16d2 4e2 8d2 16#f2 4b1 4a1 8g1 16a1 8#f1 16d1 4g1 16c2 16d2 16f2 4g2 16c2 16b2 16f2 4g2 16c2 16b2 16f2 4g2 8f2 16a2 4d2 4c2 8b1 16d2 8a1 16f1 4g1 16c2 16d2 16f2 4g2 16c2 16b2 16f2");
  //Alice DJ: Back In My Life
//  playRingtone(pin,"140 1c2 4- 8c2 8c2 8e2 8c2 8b1 1c2 4- 8- 8c2 8c2 8e2 8c2 8b1 1c2 8g1 4b1 8b1 4b1 4c2 1c2 2- 4- 8c2 8d2 8c2 16e2 16d2 1c2");
  //Alice DJ: Better off Alone
//  playRingtone(pin,"140 8c2 8- 8c2 8a1 8- 8c2 8- 8c2 8- 8b1 8- 8g1 8g2 16- 8g2 16- 8e2 8c2 8- 8c2 8a1 8- 4c2 8c2 8- 8b1 8- 8g1 8f2 16- 8f2");
  //Ann Lee: Two Times
//  playRingtone(pin,"63 8#a1 16#a1 16#c2 16#a1 16#c2 8#a1 8#a1 16#a1 16b1 16#a1 16b1 8#a1 8#a1 16#a1 16#c2 16#a1 16#c2 8#a1 8#a1 16#a1 16b1 16#a1 16b1 8#a1 8#a1 16#a1 16#c2 16#a1 16#c2 8#a1 8#a1 16#a1 16b1 16#a1 16b1 8#a1 8#a1 16#a1 16#c2 16#a1 16#c2 8#a1 8#a1 16#a1 16b1 16#a1 16b1 8#a1 8#a1 16#a1");
  //Aqua: Barbie Girl
//  playRingtone(pin,"125 8#g2 8e2 8#g2 8#c3 4a2 4- 8#f2 8#d2 8#f2 8b2 4#g2 8#f2 8e2 4- 8e2 8#c2 4#f2 4#c2 4- 8#f2 8e2 4#g2 4#f2");
  //Aqua: Lollipop
//  playRingtone(pin,"140 8#d1 8c2 8f1 8c2 8f1 8c2 8f1 8#d2 8f1 8#c2 8#a1 8#c2 8#a1 8#c2 8#g1 16#c2 16#d2 16e2 16f2 8c2 8f1 8c2 8f1 8c2 8f1 8#d2 8f1 8#c2 8#a1 8#c2 8#a1 8#c2 8#g1 8#a1 8f1 8c2 8f1 8c2 8f1 8c2 8f1 8#d2 8f1 8#c2 8#a1 8#c2 8#a1 8#c2 8#g1 16#c2");
  //ATB: 9PM
//  playRingtone(pin,"140 8a1 8a1 8b1 4a1 16c2 8- 16- 16c2 8- 16- 8c2 8e2 8d2 4f1 4- 8g1 8g1 8a1 4g1 16a1 8- 16- 8c2 8- 8c2 8d2 8c2 4g1");
  //A-Team
//  playRingtone(pin,"100 1d2 4d2 4e2 2#f2 1g2 4a2 4a1 4d2 4#c2 8#f2 8#f2 8e2 4#f2 4e2 4#f2 4e2 8e2 4b2 4a2 8#f2 8#f2 8e2 4#f2 4e2 4d2 4d2 8e2 2e2 8#f2 8#f2 8e2 4#f2 4e2 4#f2 4e2 8e2 4b2 4a2 8#f2 8#f2 8e2 4#f2 4e2 4d2 4d2 8e2 2e2");
  //Auld Lang Syne
//  playRingtone(pin,"100 4g1 4.c2 8c2 4c2 4e2 4.d2 8c2 4d2 8e2 8d2 4.c2 8c2 4e2 4g2 2.a2 4a2 4.g2 8e2 4e2 4c2 4.d2 8c2 4d2 8e2 8d2 4.c2 8a1 4a1 4g1 2c2");
  //Austin Powers
//  playRingtone(pin,"100 4b1 8#c2 4#c2 4e2 8#c2 8#f2 4e2 4#c2 4e2 8g2 8e2 8a2 8g2 8e2 4e2 8e2 8e2 8b1 4d2 8e2 8b1 4d2 8e2 8b1 4d2 8e2 4d2 8e2 8e2 8d2 8e2 8g2 8a2 8g2 4b2 4b2 8d2 4b2 8d2 8e2 8e2 8e2 8d2 8b2 8a2 8g2 8d2 8e2 8b1 8d2");
  //Avril Lavigne: Sk8er Boy
//  playRingtone(pin,"160 8a1 8a1 8a1 8#a1 8a1 4f1 8a1 8a1 8a1 8a1 8#a1 8a1 4f1 8f1 8f1 8f1 4e1 4e1 4g1 4e1 4.f1 8- 8a1 8a1 8a1 8#a1 8a1 4f1 8a1 8a1 8a1 8a1 8#a1 8a1 4f1 8f1 8f1 8f1 4e1 4e1 4g1 4e1 4.f1");
  //Axel F
//  playRingtone(pin,"100 4g2 8.#a2 16g2 16- 16g2 8c3 8g2 8f2 4g2 8.d3 16g2 16- 16g2 8#d3 8d3 8#a2 8g2 8d3 8g3 16g2 16f2 16- 16f2 8d2 8a2 2g2");
}
void loop()
{
}

