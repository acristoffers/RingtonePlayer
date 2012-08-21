#ifndef RINGTONE_PLAYER_H
#define RINGTONE_PLAYER_H

#include <Arduino.h>

#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951

#ifdef DEBUG
#define debug(x) Serial.println(String() + x);
#define debug_inline(x) Serial.print(String() + x);
#else
#define debug(x)
#define debug_inline(x)
#endif

#define SKIP_SPACES while((*r==' ')||(*r=='\t')) r++;
#define is_num (*r >= '0') && (*r <= '9')

// 100 16#a1 16#a1 16#a1 8#f1 ...
// the first number is Tempo, after that the song
void playRingtone(int pin, char* r)
{    
    int notes[] = { 0,
        NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4,
        NOTE_C5, NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_AS5, NOTE_B5,
        NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6, NOTE_A6, NOTE_AS6, NOTE_B6,
        NOTE_C7, NOTE_CS7, NOTE_D7, NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, NOTE_G7, NOTE_GS7, NOTE_A7, NOTE_AS7, NOTE_B7 };
    
    int tempo = 0, duration = 0, note = 0, scale = 0;
    bool sharp = false;
    
    // skips spaces at beggining
    SKIP_SPACES

    // get tempo
    while( is_num ) {
        tempo = ( tempo * 10 ) + ( *r - '0' );
        r++;
    }

    debug("Playing")
    debug("Tempo: " + tempo)
    
    tempo = (60 * 1000L / tempo) * 4; // Beat Per Minute of the song
    
    debug("Tempo: " + tempo + "ms")
    debug("")

    // skips spaces after tempo
    SKIP_SPACES

    // loop through notes
    while( *r ) {
        duration = note = scale = 0;
        sharp = false;
        
        while( is_num ) {
            duration = ( duration * 10 ) + ( *r - '0' );
            r++;
        }
            
        if( *r == '.' ) {
            duration += duration/2;
            r++;
        }
        
        if( *r == '#' ) {
            sharp = true;
            r++;
        }
        
        if ( ((*r >= 'a') && (*r <= 'g')) || ((*r >= 'A') && (*r <= 'G')) ) {
            switch(*r) {
                case 'c':
                case 'C':
                note = 1;
                break;

                case 'd':
                case 'D':
                note = 3;
                break;

                case 'e':
                case 'E':
                note = 5;
                break;

                case 'f':
                case 'F':
                note = 6;
                break;

                case 'g':
                case 'G':
                note = 8;
                break;

                case 'a':
                case 'A':
                note = 10;
                break;

                case 'b':
                case 'B':
                note = 12;
                break;
            }

            if ( sharp )
                note++;

            r++;
        }
        
        if( is_num ) {
            scale = *r - '0';
            r++;
        }
        
        duration = tempo/duration;
        
        if( (note > 0) && (duration > 0) ) {
            note = ( (scale - 1) * 12 ) + note;
            if ( note > 0 ) {
                note = notes[note];
                debug_inline("Playing: ") debug_inline(note) debug_inline("hz / ") debug_inline(duration) debug("ms")
                tone( pin, note, duration);
                delay( duration );
                noTone( pin );
            }
        } else if ( (note == 0) && (duration > 0) ) {
            debug_inline("Pausing: ") debug(duration)
            delay( duration );
        } else {
            debug_inline("Error: ") debug(note)
        }
        
        r++;
        
        SKIP_SPACES
    }
    
    debug("Finished")
}

#endif