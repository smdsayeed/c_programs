

#include<stdio.h>
#include<string.h>




  int main(){
// strchr - finds the first occurence of given character in a string
    char s1[50]="I am the example of function strchr";
    
    printf(" %s",strchr(s1,'f'));
//here s1 is the variable name, and the 'f' is the first occurence letter
  return 0;
    
  }

// output: f fucntion strchr
