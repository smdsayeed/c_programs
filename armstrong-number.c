#include <stdio.h>
//to check whether a number is armstrong number or not//
/*An armstrong number is a number which equal to the sum of the cubes of its individual digits. For example, 153 is an armstrong number as − 153 = (1)3 + (5)3 + (3)3 153 = 1 + 125 + 27 153 = 153.*/
int main(void) {

// algorithm
//   START
//    Step 1 → Take integer variable Arms
//    Step 2 → Assign value to the variable
//    Step 3 → Split all digits of Arms
//    Step 4 → Find cube-value of each digits
//    Step 5 → Add all cube-values together
//    Step 6 → Save the output to Sum variable
//    Step 7 → If Sum equals to Arms print Armstrong Number
//    Step 8 → If Sum not equals to Arms print Not Armstrong Number
// STOP

 int arm, t,s=0,x;
  printf("enter ther value \n");
  scanf("%d",&arm);
  x=arm;
  while(arm!=0){
    t=arm%10;  //gives the remainder of the provided number ,the output value will be the units place digit of the provided value
    s=s+(t*t*t); 
    arm=arm/10; ////this gives the quotient which the the first values before the units place and we are assining the value to the same variable again
  }
  
  
  if(x==s){
    printf("\n Armstrong number");
    
  }else{
    printf("not Armstrong number");
  }

  
  return 0;
}
