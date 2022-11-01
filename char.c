#include<stdio.h>
#include<conio.h>
  int main (){
    int empid = 01;
    float salary = 25000;
     char ename[100], dept[20],desig[25];
     printf("Enter your name\n");
     scanf("%s",&ename);
     printf("Enter your department\n");
     scanf("%s",&dept);
     printf("Enter your Designation\n");
     scanf("%s",&desig);

printf("Your details are :%s, %s, %s",ename,dept,desig);
    
  return 0;
}