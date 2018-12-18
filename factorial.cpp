#include<stdio.h>
main()
{
   
       int x, result;
       
       printf("Factorial of?:");
       scanf("%d",&x);
       
       result=1;
       
       while(x>0)
       {
                 result=result*x;
                 x--;
        }              
       
        printf("Result: %d\n",result);
      
return 0;
}
