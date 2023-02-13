#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mas[10];
    i = 0;
    while (i < 10)
    {
        if (i < 5)
        {
        mas[i] = 7;
        }
        else
        {
        mas[i] = i * i;
        }
        i = i +1;
    }
    i = 0;
    while (i < 10)
    {
        printf("mas[%d] = %d\n", i, mas[i]);
        i = i + 1;
    }
    return 0;
}
