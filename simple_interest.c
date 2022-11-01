#include<stdio.h>
#include<conio.h>
  int main (){
    // p = principal amount, t = time, r = rate of interest ex : 3 %;
    // si = simple interest
    int p , t , r;
    printf("Enter the principal amount given:\n");
    scanf("%d",&p);
    printf("Enter the time duration in months:\n");
    scanf("%d",&t);
    printf("Enter the rate of interest in percentage:\n");
    scanf("%d",&r);
    float si = p * t * r/100; 

    printf("simple interest is : %f",si);


  return 0;
}