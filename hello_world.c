#include <stdio.h> // Relevant für den Präprozessor, dieser nimmt die Inhalte der Datei stdio.h (Headerdatei), welche sich im Dateisystem befindet. 

int main(void) { // Jedes Programm muss eine main() besitzen. Die Exekution beginnt mit dieser.
    printf("Hello, world!\n"); // Hier wird die printf() benutzt um einen String, in diesem Fall "Hello, world!"
    return 0; // Anweisungen werden durch semikolon ; beendet. Der main() wird die 0 zurückgegeben, was heißt dass das Programm ohne Fehler verlaufen ist
}