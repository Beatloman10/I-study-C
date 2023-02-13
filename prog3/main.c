#include <stdio.h>
#include <stdlib.h>

void proc1(int x)
{
    if (x < 10)
        printf("%d\n", x);
    else
        printf("error\n");
}

int ass0(int a, int b)
{
    if (a > b)
        return 1;
    else
        return 0;
}


int main()
{
    int g;

    g = ass0(1, 15);
    proc1(g);
    return 0;
}
