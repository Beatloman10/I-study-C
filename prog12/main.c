#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 7;
    float r = 5.12; // if just r = 5.12 -> by itself becomes float
// var i is still int
    printf("%f %d", (float)i, (int)r); // i in float type
    printf("\n%d", (int)round(r));
    printf("\n%f\n", r - (int)r); // reminder

    char c[50], cc[50] = "567";
    int j;

    //sprintf(c, "%i", i); // string has an i number
    itoa(i,c, 10);// put number i in char c with 10number base system
    printf("\n%s", c);
    j = atoi(cc); // sstring to number
    printf("\n%d\n", j);
    //j = atof(cc); // for float


    char ch = 'd', ch1 = 105;
    printf("\n%c\n", ch);
    printf("\n%i\n", ch); // code of symbol
    printf("\n%c\n", ch1); // number as a symbol




    return 0;
}
