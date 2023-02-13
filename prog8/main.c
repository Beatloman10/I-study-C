#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int m[9][9]; //2d mass 9*9
   m[2][5] = 3;

   int i, j;
   for (j = 0; j < 9; j++)
   {
       for (i = 0; i < 9; i++)
       {
           m[j][i] = 7;
           //printf("%d\t", m[i]); // \t means TAB
           printf("%d ", m[0][i]);
       }
       printf("\n");
   }
   char  mm[3][3][3]; // 3d mass
   mm[1][1][1] = 'w';
*/
   int ms[9][9];
   int i, j;
   for (j = 0; j < 9; j++)
   {
       for (i = 0; i < 9; i++)
        {
            ms[j][i] =  (i + 1) * (j + 1);
             /*  if (j == 5)
                    ms[j][i] = 5;
                  if (i == 3)
                        ms[j][i] = 3;
         */ printf("%d\t", ms[j][i]); // thats how table becomes straight
        }
    printf("\n\n");

   }


   return 0;
}
