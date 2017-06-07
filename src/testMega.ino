// // testMega.ino

// // #include "Util.h"

// char msg [] = "12.00 456.00 78.00";

// unsigned int previousMillis = 0;
// unsigned int currentMillis  = 0;
// unsigned int interval       = 3000;

// String getNext (String &text) {
//     int lastPos;

//     String tmp = "";

//     Serial.print(text);
//     Serial.print(" -> ");

//     for (int i = 0; i < text.length (); i++)
//         if (text [i] != ' ')
//             tmp += text [i],
//             lastPos = i + 2;
//         else break;

//     text.remove (0, lastPos);
//     Serial.print (text);
//     Serial.print ("[");
//     Serial.print (tmp);
//     Serial.print (", ");
//     Serial.print(lastPos);
//     Serial.println ("]");

//     return tmp;
// }

// void setup () {
//     Serial.begin (9600);

//     Serial.println("//////////////");
//     Serial.println ();
// }

// void loop () {
//     currentMillis = millis ();

//     if (currentMillis - previousMillis >= interval) {
//         previousMillis = currentMillis;

//         Serial.println (msg);
//         // Serial.println (msg [0]);

//         // Serial.println (sizeof(msg) - 1);
//         String tmp = "";
//         for (int i = 0; i < sizeof(msg) - 1; i++) tmp += msg [i];

//         Serial.println (tmp);
//         Serial.println (getNext (tmp));
//         Serial.println (getNext (tmp));

//         Serial.println ();
//     }
// }
#define SUMILATION

int definitonPin [] = {1, 2, 3, 4};

void setup () {
    for (int i = 0; i < sizeof (definitonPin) / sizeof (int); i++) {
        pinMode (definitonPin [i], INPUT);
    }


    #if defined SIMULATION
        for (int i = 0; i < sizeof (definitonPin) / sizeof (int); i++) {
            definitonPin [i] = LOW;
        }
        definitonPin [0] = HIGH;
    #else
        for (int i = 0; i < sizeof (definitonPin) / sizeof (int); i++) {
            if (digitalRead(definitonPin [i] == HIGH)) {
                // TODO: New algorith for detecting pins
            }
        }
    #endif


}
void loop () {

}
