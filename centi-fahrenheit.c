#include<stdio.h>
#include<conio.h>
  int main (){
    int c, f;
      printf("Enter the Fahrenheit temp\n");
    scanf("%d",&f);
   
    c = (f-32)*5/9;
printf("Fahrenheit to centigrade Temp is: %d",c);
  return 0;
}