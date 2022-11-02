#include<stdio.h>
#include<conio.h>
  int main (){
    int age;
    printf("Enter you age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("YOU CAN VOTE!\n");
    }
    else{
        printf("You are Under 18..!");
    }

  return 0;
}