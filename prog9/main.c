#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // for getch (to read push of symbol)

int main()
{
    char mass[11][21]; // matrix == masssive of massives
    int i;
    int x = 10, y = 5; // dog's position
    char key; // var saves pushed symbol
    int ox, oy; // dog's possition before move
    int ax = 5, ay = 3; // initial apple's position
    int apples = 0;

    srand(time(NULL)); // takes parameter, which makes all arrangement of random numbers => is par == const, same arrangement, if time dependent - different

    do // rewrite field and positionss due to user's actions
    {

        sprintf(mass[0], "####################"); // borders
        for (i = 1; i < 9; i++)
        {
            sprintf(mass[i], "#                  #");
        }
        sprintf(mass[9], "####################");

        mass[y][x] = '@';
        mass[ay][ax] = '*';

        system("cls"); // let to do commands from command window
        for (i = 0; i < 10; i++) // field
        {
            printf("%s\n", mass[i]); // when call i - work with all elements of m[i][:]
        }
        printf("\n apples: %d", apples);
        key = getch(); // waits to push button and gives back ssymbol

        ox =x;
        oy = y;

        if (key == 'w') y--; //move dog due to pushed button
        if (key == 's') y++;
        if (key == 'a') x--;
        if (key == 'd') x++;
        if (mass[y][x] == '#') // don't let leave field
            {
             y = oy;
             x = ox;
            }
       if ((x == ax) && (y == ay)) // && - logical and
       {
           ax = rand() * 1.0 / RAND_MAX * 18 + 1; // rand generates rand from 0 to RAND_MAX(don't know it)
           ay = rand() * 1.0 / RAND_MAX * 8 + 1; // => when rand()/RAND_MAX * 18 or * 8 and + 1 - to be in field
           apples++;
      //1.0 - for ordinary / and not int /
       }

    }
    while (key != 'e'); // all ends when dog gets a key, e - to exit

    return 0;
}
