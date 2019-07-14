#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double dBase, dHeight, dArea;

    printf("Enter base length : ");
    scanf("%lf",&dBase);
    printf("Enter height length : ");
    scanf("%lf",&dHeight);
     printf("DArea  %5.2lf\n", dArea);
     printf("Dbase  %5.2lf\n", dBase);
     printf("DHeight  %5.2lf\n", dHeight);
    dArea=0.5*dBase*dHeight;
    printf("\nArea of the triangle is : %5.6lf\n", dArea);
   
   
   return 0;

}
