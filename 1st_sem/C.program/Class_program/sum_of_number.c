
#include <stdio.h>

int main(){
	int number = 0;
	int i = 5;
	int sum = 0;

    
  //calculate the sum of numbers from 5 to entered number
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number > 5){
	for (i = 5; i <= number; i++){
		sum = sum + i;
	}
	printf("the sum of numbers from 5 to %d is : %d\n", number , sum);
}
else{
	printf("please enter a number greater than 5\n");
}
 
}

  
   





