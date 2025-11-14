#include <stdio.h>

void funktion_a(); // Funktionsdeklarationen am Anfang unseres Quellcodes
void funktion_b(); // ""

void funktion_a() { // Diese Funktion weist einer variable "foo" den Wert 42 zu und gibt sie anschließend auf dem Terminal aus
    funktion_b();
    int foo = 42; // Zuweisung der foo variable des Typ "int" einen Wert von 42
    printf("foo hat den Wert: %d\n", foo);
}

void funktion_b() { // Diese Funktion weist der Variable "bar" den Wert 67 zu und gibt diesen Wert im Terminal aus, ähnlich wie funktion_a 
    funktion_a();
    int bar = 67;
    printf("bar hat den Wert: %d\n", bar);
}

int main(void) {
    return 0;
}