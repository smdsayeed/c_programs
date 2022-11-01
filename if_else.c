
#include<stdio.h>
#include<conio.h>
  int main (){

    int emp_id ,sal;
    char name[25];
    printf("Enter the employee name\n");
    printf("Enter the name without spaces or use hyphen '-'\n");
    scanf("%s",&name);

    printf("Enter your employee_id\n");
    scanf("%d",&emp_id);

    printf("Enter your salary\n");
    scanf("%d",&sal);

    if(sal>=1000){
      printf("You got a BONUS of rs1000");
    }
    else{
      printf("your salary is below 10000rs NO BONUS");
    }


  return 0;
}