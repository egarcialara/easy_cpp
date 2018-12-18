#include<stdio.h>
main()
{
      char cad[80];
      int i,j,sw;  
      
      printf("Your sentence:\n");
      gets(cad);
      i=0;
      sw=0;                
      for(j=0;cad[j];j++);
      j--;
      
      while(i<j)
      {
                if(cad[i]==cad[j]) sw=0;
                else
                {
                     sw=1;
                     break;
                }
                i++;
                j--;
      }
      
           if(sw==0) printf("It is a palindrome\n");
           else printf("Sorry, try again!\n");
return 0; 
}
