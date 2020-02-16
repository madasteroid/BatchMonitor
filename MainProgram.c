#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){
	char  command []= "./a.out";
	char  jobs [] = "cd /Users/madasteroid/batch/jobs";
	int number;
	printf("\n Enter a number to perform following: \n");
	printf("1.Program that prints 50 dots. \n");
	printf("2.Program that does a summation of numbers from 1 to 10. \n");
	printf("3.Program that does a factorial of 10.\n");
	printf("4.Program that prints 100 ‘#’s. \n");
	printf("5.To re run the program. \n");
	printf("0.Exit the program. \n");
	scanf("%d", &number);
	if (number ==1){
		system(jobs);		
		char compile [] = "gcc /Users/madasteroid/batch/jobs/Program0.c";
		system(compile);
                system(command);
		main();
	}
	else if( number ==2){
		system(jobs);
		char compile [] = "gcc /Users/madasteroid/batch/jobs/Program1.c";
                system(compile);
                system(command);
   		main();
	}
	else if (number ==3){
		system(jobs);
		char compile [] = "gcc /Users/madasteroid/batch/jobs/Program2.c";
                system(compile);
                system(command);
		main();
	}
	else if (number == 4){
		system(jobs);
		char compile [] = "gcc /Users/madasteroid/batch/jobs/Program3.c";
                system(compile);
                system(command);
		main();
	}
	else if(number ==5){
	main();
	}
	else if (number == 0){
	printf("Thank you for using the program. Have a good day!");
	exit(0);

	}
	else {
	printf("Invalid number.");
	}
}
