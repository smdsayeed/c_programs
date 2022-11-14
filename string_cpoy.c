#include<stdio.h>
#include<conio.h>
#include<string.h>

  int main (){
    char s1[40]="string1";
    char s2[40]="i am gonna copy into the string1";
    strcpy(s1,s2); 
    puts(s1); //puts is the function used instead of the printf function we don't need to specify any format specifer ,because it work for only strings.

  return 0;
}

//output: the s2 content has been copied the s1 
