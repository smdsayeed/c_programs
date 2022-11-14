#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
  
   int id;
   int marks ;
  char email[50];
  char name[20];

};

    int main ()
    {
      struct student sayeed;
      sayeed.id = 123;
      sayeed.marks =333;
      sayeed.email;
      sayeed.name;
     
    
      
      printf("Enter your name \n");
      scanf("%s",sayeed.name);
      
        printf("Enter your email\n");
        scanf("%s",sayeed.email);

      printf("Name   :%s\n",sayeed.name);
      printf("Marks  :%d\n",sayeed.marks);
      printf("id     :%d\n",sayeed.id);
      printf("E-mail : %s\n",sayeed.email);
        return 0;
    }