#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // for chars
#include <locale.h> // for russsian
#include <windows.h> // module for win libraries
#include <winuser.h> // for entering russian chars

int main()
{
    setlocale(LC_ALL, "Russian"); // turn on russsian

    /*char ch = 'S'; //use with '' for char
    printf("%c\n", ch);

    ch = getch(); //if you want to enter without Enter bottom
    printf("ch = %c", ch);
*/
    char c[10] = "fcdfyyqi"; //[0] and [9] - symbols of the beginning and the end of char, so max is 8 char
    c[0] = '7';
    printf("%s\n", c);

    sprintf(c, "’ÛÈ"); // to all massive at once and no &, cause variable, which is a massive saves the address of the first element of mass
    c[3] = '\0'; // end of string char
    printf("%s\n", c);

    //scanf("%s", c);
    gets(c); // fix the problem with first russian 'a' chars
    OemToChar(c, c); // change shitty symbols to normal
    printf("%s\n", c);


    return 0;
}
