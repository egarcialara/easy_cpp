#include<stdio.h>
main()
{
      int s,min,h;
      
      printf("How many seconds?:");
      scanf("%d",&s);
      
      h=s/3600;
      s=s%3600;
      min=s/60;
      s=s%60;
      
      printf("%dh %dmin %ds",h,min,s);
      
return 0; 
}
