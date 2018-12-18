#include<stdio.h>
main()
{
     char letra;
     printf("Introduce one letter: ");
     letra=getchar();
     printf("Your chosen letter is... ");
     switch(letra)
     {
                  case 'a': printf("a");
                       break;
                  case 'e': printf("e");
                       break;
                  case 'i': printf("i");
                       break;
                  case 'o': printf("o");
                       break;
                  case 'u': printf("u");
                       break;
                  
                  default: printf("a consonant :\'(\n");
     }     
return 0;
}
