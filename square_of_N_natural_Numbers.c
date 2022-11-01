#include<stdio.h>
#include<conio.h>
  int main (){
    int n;
    printf("Enter the number to print the first n natural numbers\n");
    scanf("%d",&n);
    float sum = n*(n+1)/2;
    printf("The Sum of the First Natural numbers of the given Number is %f",sum);
        
    

  return 0;
}