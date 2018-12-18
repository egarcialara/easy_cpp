#include<stdio.h>
main()
{
    int i=0;
    float x,max;
    
    printf("The largest number\n");    
    printf("\nGive 3 numbers");
        
    printf("\nNumber %d: ",i+1);
    scanf("%f",&x);
    max=x;
    
    i=1;
    while(i<3)
    {
               printf("\nNumber %d: ",i+1);
               scanf("%f",&x);
    
               if(x>max)max=x;
    
               i++;               
    }
    
    printf("\nThe largest number is: %.2f",max);

return 0;
}
