#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for reading current time
//make macros - indentifier, which programm see as some array of symbols
#define cnt 5 // define name meaning // for constants
#define celoe int // word celoe becomes int
#define celi int p = 7 // for program celi == int p = 7
#define cc int j = cnt
#define showw printf("%d\n", i)

#define ass 10

/*
int main()
{
    celoe i = cnt;
    celi;
    cc;
    showw;
    printf("%d %d %d", i, p, j);
    return 0;
}
*/

//random numbers generator
int main()
{
    int i;
    int mas[ass];
    int z;

    srand(time(NULL)); // make the seed

    i = rand(); // in this presentation gives same rands
    printf("%d\n", i % 18); // for rand in range [0, 18]
    i = rand();
    printf("%d\n", i % 18);
    i = rand();
    printf("%d\n", i % 18);


    printf("%d\n", ass);
    for (int k = 0; k < ass; k++)
    {
        mas[k] = k + 1;
        printf("%d ", mas[k]);
    }

    z = rand();
    printf("\n%d\n", 10 + z % (9 + 1)); // for range [10, 19]

    for (int k = 0; k < ass; k++)
    {
        mas[k] = 20 + rand() % 20;
        printf("%d ", mas[k]);
    }

}
