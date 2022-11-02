#include<stdio.h>
#include<conio.h>
  int main (){
    // A program to check whether a student is pass or fail
    int rno, m1, m2, m3,tot;
    float avg;
    char name[25];

    printf("Enter your name\n");
    scanf("%s",&name);
    
    printf("Enter your Roll Number\n");
    scanf("%d",&rno);

    printf("Enter the marks of Telugu, Hindi, English \n");
    scanf("%d %d %d",&m1,&m2,&m3);
    tot= m1+m2+m3;
    printf("Total marks = %d\n" ,tot);
    avg= tot/3;
    printf("Average = %f",avg);

    
    if (m1>=35 && m2>=35 && m3>=35 && avg>=75)
    {
        printf("\n Grade: Distinction, Result = Pass.");
    }
    else if (m1>=35 && m2>=35 && m3>=35 && avg>=60 || avg<75)
    {
         printf("\n Grade : First Class");
    }
    else if (m1>=35 && m2>=35 && m3>=35 && avg>=50 || avg<60)
    {
         printf("\n Grade : Second Class ");
    }
    else if (m1>=35 && m2>=35 && m3>=35 && avg>=35 || avg<50)
    {
         printf("\n Grade : Third Class, Result = Pass.");
    }
    else
    {
       printf("\n Result: Fail..!"); 
    }

    
    
   
    

  return 0;
}