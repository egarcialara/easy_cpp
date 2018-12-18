#include<stdio.h>
main()
{
//variables     
     int matrix1[3][3],matrix2[3][3],result[3][3];
     int i,j,i1,j1,d;  
        
//scanning the data
     printf("First matrix");
     for(i=0;i<3;i++)
     {
                     for(j=0;j<3;j++)
                     {
                                     printf("\nrow %d, column %d: ",i+1,j+1);
                                     scanf("%d",&matrix1[i][j]);
                     }
                                
     }
     
     
     printf("\nSecond matrix\n");
     for(i=0;i<3;i++)
     {
                     for(j=0;j<3;j++)
                     {
                                     printf("\nrow %d, column %d: ",i+1,j+1);
                                     scanf("%d",&matrix2[i][j]);
                     }
                                 
     }    
    
     
//operations
     i=0;
     j=0;
     i1=0;
     
     while(j1=0)
       for(j1=0;j1<3;j++)
       {
              while(i<3&&j<3) 
              {
                    result[i1][j1]=matrix1[i1][j]*matrix2[i][j1] +d;
                    d=result[i1][j1];
                    
                    i++;
                    j++;
              }               
       } 
                
 //result             
      printf("\n");
      for(i1=0;i1<3;i1++)
     {
                for(j1=0;j1<3;j1++)
                     printf("%d ",result[i1][j1]); 
                printf("\n");
     }
           
return 0;
}
