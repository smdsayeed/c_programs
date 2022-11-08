#include<stdio.h>
#include<conio.h>
  int main (){
   // The Fibonacci series is an infinite series, starting from '0' and '1', 
   //in which every number in the series is the sum of two numbers preceding it in the series.
  int i,a=0,b=1,n,sum;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    
    printf("%d,",a);
  }
sum=a+b;
a=b;
b=sum;
  return 0;
}