#include<stdio.h>
#include<conio.h>
  int main (){
    //  A program to find a bigger number between two 

    int a,b;
    printf("Enter values of  to Compare\n");
    scanf("%d %d",&a , &b);

    a<b?printf("%d is the Big Number",b):printf("%d is the Big Number",a);

  return 0;
}