#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int i;

    printf("input x: ");
    scanf("%g", &x);
    printf("input y: ");
    scanf("%g", &y);

    printf("choose operation: \n 1 = *\n 2 = +\n 3 = -\n 4 = /\n select code = ");
    scanf("%d", &i);

    if (i == 1)
        printf("%g * %g = %g", x, y, x * y);

    if (i == 2)
        printf("%g + %g = %g", x, y, x + y);

    if (i == 3)
        printf("%g - %g = %g", x, y, x - y);

    if (i == 4)
        printf("%g / %g = %g", x, y, x / y);

    return 0;
}
