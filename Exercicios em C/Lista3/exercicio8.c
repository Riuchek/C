#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    /* code */
    int i;
    double w[100];
    double j[100];
    double t;
    double somaw=0;
    double maxw;
    double minj;
    double somaj=0;
    double mediaw=0;
    double mediaj=0;
    for (i = 0; i <100; i++)
    {
        w[i]=rand()%100;
        j[i]=rand()%100;
    }
    for ( i = 0; i <100; i++)
    {
     if (i==0)
     {
        minj=j[i];
        maxw=w[i];
     }
     if (w[i]>maxw)
     {
        maxw=w[i];
     }
     if (j[i]<minj)
     {
      minj=j[i];  
     }
    somaw=somaw+w[i];
    somaj=somaj+j[i];
    }
    mediaw=somaw/100;
    mediaj=somaj/100;
    t =(maxw*minj+1)/(mediaw+mediaj);
    printf("%f ",t);
    return 0;
}
