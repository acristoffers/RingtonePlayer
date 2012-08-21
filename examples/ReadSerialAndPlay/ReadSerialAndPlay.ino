#define DEBUG

#include <RingtonePlayer.h>

String s;
unsigned time;

void setup()
{
  Serial.begin(9600);
  time = millis();
}

void loop()
{
  if( Serial.available() > 0 ) {
    s += (char) Serial.read();
    time = millis();
  }
  
  if( ( s.length() > 0 ) && ( ( millis() - time ) > 1000 ) ) {
    Serial.println(s);
    
    char buf[s.length()];
    s.toCharArray(buf, s.length());
    
    playRingtone(13, buf);

    s = "";
  }
}
