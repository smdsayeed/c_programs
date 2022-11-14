#include<stdio.h>
// Declaring function
int sum(int a , int b );




  int main(){
  
 int r= sum(15,10);  //called function
    printf("The summation is :%d",r);

  return 0;
    
  }

// Defining function
   int sum(int a, int b){
  return (a+b);
};   
    
