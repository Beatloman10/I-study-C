#include <stdio.h>
#include <stdlib.h>


struct sPoint // structure = unit of language, which can consist other variables
{
    int x, y;
} p; // variable, which is structure sPiont

struct Furn
{
    int x1, y1 ,z1;
    char s[50];
    char color;
} f;



//typedef int celoe; // redefine(actually, make a new one) type on a base of int
typedef struct sPoint TPoint; // type of scructures sPoint

int g; // global var

int main()
{
    TPoint a, b[10];
    a.y = 9;
    b[0].y = 11;
    printf("%d %d", a.y, b[0].y);

    int dick = 0; // local in main var
    {
        printf(" %d ", dick); // here we see dick
    }
  /*{
        int cock = 1;
    }                     // here don't see cock
    printf("%d", cock);
  */


    /*struct sPoint a;
    a.y = 999;
    p.x = 7;
    celoe i = ;
    printf("%d %d", p.x, a.y);
    */

    f.color = 'black';
    f.s[0] = 'A';
    f.s[1] = 's';
    f.s[2] = 's';
    f.x1 = 1;
    f.y1 = 2;
    f.z1 = 3;

    printf("%d %d %d", f.x1, f.y1, f.z1);
    printf("%s", f.color);
    printf("%s", f.s[0], f.s[1], f.s[2]);

    return 0;

}


