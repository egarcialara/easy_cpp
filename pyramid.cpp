#include<stdio.h>
main()
{
     int b,h,spaces,points,spaces1,points1;
     
     printf("Number of points in the base (odd number)\n");
     scanf("%d",&b);
     spaces=b/2+3;
     points=1;
     
     for(h=b/2+1;h>1;h--)
     {
                         spaces1=spaces;                           
                         while(spaces>0)
                         {
                              printf(" ");
                              spaces--;
                         }
                         spaces=spaces1-1;
                         
                         printf("/");
                         
                         points1=points;                         
                         while(points>0)
                         {
                                     printf(" ");
                                     points--;
                                     
                         }
                         
                         points=points1+2;
                         
                         printf("\\");
                       
                         printf("\n");                    
     }
     
     
     if(h>0)
     {
            printf("   ");
            printf("/");
            
            b=b/2;
            while(b>0)
            {
                      printf(" _");
                      b--;
            }
            printf(" \\");
     }   

return 0;
}
