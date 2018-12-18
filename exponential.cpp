#include<stdio.h>
main()
{
       int x,y,exp;
       
       printf("Base:");
       scanf("%d",&x);
       printf("Exponent:");
       scanf("%d",&y);
       exp=1;
       
       while(y>0)
       {
                 exp=exp*x;
                 y--;
        }              
       
        printf("Result: %d",exp);

return 0;
}
