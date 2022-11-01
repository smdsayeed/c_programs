#include<stdio.h>
#include<conio.h>
// swapping of two numbers
  int main (){
    int a,b,temp;
    printf("Enter the A & B values\n");
    scanf("%d %d ", &a,&b);

    printf(" The provided values are %d %d\n",a ,b);

    // logic
    temp=a;
    a=b;
    b=temp;

    printf("\nAfter swapping of the values a=%d b=%d",a,b);

  return 0;
}