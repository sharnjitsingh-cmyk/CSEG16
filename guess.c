#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    srand(time(NULL));//this will change value

  int randomnumber = rand()%6;
  printf("Guess a number betwen 0 to 6:");
  int userinput ;
  scanf("%d",&userinput);
  if(userinput == randomnumber){

    printf("Congo you guessed it right");

  }else{
   printf("sorry it was this %d", randomnumber);
  }

return 0;
}
