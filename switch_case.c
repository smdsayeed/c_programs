#include<stdio.h>
#include<conio.h>
  int main (){
    int wd;
    printf("Enter the week days from (0-6\n");
    scanf("%d",&wd);

    switch (wd)
    {
    case 0:
        printf("SUNDAY");
        break;
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    
    case 6:
        printf("SATURDAY");
        break;
    
    default:
        break;
    }

  return 0;
}