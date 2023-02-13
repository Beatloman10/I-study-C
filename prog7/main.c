#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = -3, d = 5;
    a += 1;
    a*=5;
    a++; // increment operator (as a + 1)
    a--; // decrement
    //b = a++; // increm and decrement has different priority according to before or after var
    // if x++ --> first - equation, next increment
    // if ++x --> first - increm, next - equation
    b = ++a;
    c += ++d + ++d;
    printf("%d\n%d\n", a, b);
    printf("%d\n%d\n", c, d);

    int t;
    printf("1 = dick,\n2 = cock1,\n3 = cock2,\n4 = cock3,\n5 = cum\n");
    scanf("%d", &t);
    if (t == 1)
    {
        dick();
    }
    if (t == 2)
    {
        cock1();
    }
    if (t == 3)
    {
        cock2();
    }
    if (t == 4)
    {
        cock3();
    }
    if (t == 5)
    {
        cum();
    }
    return 0;
}

int dick()
{
    int a;

    do //postconditional
    {
            printf("input int = 7\n");
            scanf("%d", &a);
    }
    while (a != 7);

    return 0;
}

int cock1()
{
    int a;

    for (a = 2; a < 20; a += 2) //(var for iteration number; condition to do cycle;change of iteration)
       printf("%d\n", a);
}

int cock2()
{
    int a = 2;

    while (a < 20)
    {
        printf("%d\n", a);
        a += 2;
    }
}

int cock3()
{
    int a = 2;

    do
    {
        printf("%d\n", a);
        a += 2;
    }
    while (a < 20);
}

int cum()
{
    int i;
    char s[9];

    for (i = 0; i < 8; i++)
    {
        s[i] = '#';
    }
    s[8] = '\0';
    printf("%s\n", s);

    i = 0;

    while (s[i] != '\0')
    {
        printf("%c\n", s[i]); // here to print need %c, cause ???
        i++;
    }
}


