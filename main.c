/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define PASS 4156
/*
create a program where you need ask user to type
atm pin , and user has 3 chance to enter correct pin
if the pin is correct then tell you authenticate other
ask 2 more times if still not correct then print
your card is blocked 
*/

int main()
{

   printf("Enter your ATM Pin :");
   int pin ;
   scanf("%d",&pin);
   
   if(pin==PASS){
       
       printf("Congo you are authenticated..");
       return 0;
   }else{
       printf("wrong pin try again ..");
   }
   
   printf("Enter your ATM Pin :");

   scanf("%d",&pin);
   
   if(pin==PASS){
       
       printf("Congo you are authenticated..");
       return 0;
   }else{
       printf("wrong pin try again ..");
   }
      scanf("%d",&pin);

   
   if(pin==PASS){
       
       printf("Congo you are authenticated..");
       return 0;
   }else{
       printf("Wrong pin card blocked");
   }
  
  
  
    return 0;
}