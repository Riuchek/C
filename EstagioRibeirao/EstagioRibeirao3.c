#include <stdio.h>
#include <stdlib.h>
int main()
{
 /*
3) Descubra a lógica e complete o próximo elemento:



a) 1, 3, 5, 7, ___

b) 2, 4, 8, 16, 32, 64, ____

c) 0, 1, 4, 9, 16, 25, 36, ____

d) 4, 16, 36, 64, ____

e) 1, 1, 2, 3, 5, 8, ____

f) 2,10, 12, 16, 17, 18, 19, ____ 
*/
   printf("a) 1, 3, 5, 7, __= 9 (+2)\n");
   printf("b) 2, 4, 8, 16, 32, 64, ___= 128(*2) \n");
   printf("c) 0, 1, 4, 9, 16, 25, 36, ___= 49 (n*n) \n");
   printf("d) 4, 16, 36, 64, ___= 100 (2*2 4*4 6*6 8*8 10*10) \n");
   printf("e) 1, 1, 2, 3, 5, 8, ___=13 (fibonacci)\n");
   printf("f) 2,10, 12, 16, 17, 18, 19, ____ -> 200 (Dois Dez Doze ... Duzentos) \n");
    return 0;
  }
