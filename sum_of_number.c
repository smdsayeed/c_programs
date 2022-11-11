

// program to calculate sum  of digits of a given number
#include <stdio.h>
    int main(){
      int n,t,s=0;
      printf("Enter a number to sum\n");
      scanf("%i",&n);
  while(n!=0){
//algorithm
    
      t=n%10;   //use to get the unit place number
      s=s+t;    //use to get the sum
      n=n/10;   //use to get the remanining number of the provided number
  }

      printf("sum is %d",s);
      
      
    }





// program to check whether a given number is palindrome or not
#include <stdio.h>
    int main(){
      int n=1,t,s=0;
      printf("Enter a number to sum\n");
      scanf("%i",&n);
      x=n;
  while(n!=0){

    
      t=n%10;  
      s=s+t;
      n=n/10;
  }

     if(x==s){
       printf("A panlindrome");
       
     }else{
       printf("Not a Palindrome");
     }
      
      
    }


