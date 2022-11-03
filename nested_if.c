#include<stdio.h>
#include<conio.h>
#include<string.h>
  int main ()
  {
    int apno;
    char name[25],gr[15],br[15];

    printf("\nEnter the Application Number:");
    scanf("%d",&apno);

    printf("Enter the applicant Name:");
    scanf("%s",&name);

    printf("\nEnter  Group:");
    scanf("%s",&gr);

    printf("\nEnter Branch:");
    scanf("%s",&br);

    if (strcmp(gr,"bsc")==0)
    {
        if (strcmp(br,"mecs")==0)
          printf("\n Fees = 10000" );

        else
         if (strcmp(br,"mpcs")==0)
          printf("\n Fees = 9000");

        else
         if (strcmp(br,"mscs")==0)
        printf("\n Fees = 8000");
      }  else
        if (strcmp(gr,"bcom")==0)
        {
     
          if (strcmp(br,"bcomp")==0)
          printf("\n Fee = 8500");

          else
           if (strcmp(br,"gbcom")==0)
          printf("\n Fee = 7500");
        }
        
     else
     printf("\n No such Group or Branch");
     
  
  
  return 0;
}