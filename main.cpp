#include <iostream>
#include "poly.h"



int main()
{
// Tablica wskaźników na obiekty klasy Figure
    Figure *figures[4];

    // Tworzenie obiektów i przypisywanie wskaźników do tablicy
    figures[0] = new Circle(5.0);
    figures[1] = new Square(5);
    figures[2] = new Circle(3.0);
    figures[3] = new Rectangle(2.5, 5.5);

    // Iteracja przez tablicę i wyświetlanie informacji o obiektach
    for (int i = 0; i < 4; ++i) {
        figures[i]->show();
    }

    // Zwolnienie pamięci
    for (int i = 0; i < 4; ++i) {
        delete figures[i];
    }

    return 0;
}