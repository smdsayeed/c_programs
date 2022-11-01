#include<stdio.h>
#include<conio.h>
  int main (){
    int f , c;
    printf("Enter the centigrade temp\n");
    scanf("%d",&c);
   
        f = (c+32)*9/5;

    printf("Centigrade to Fahrenheit Temp is: %d",f);
  return 0;
}