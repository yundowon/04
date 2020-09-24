#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	int hour, min, sec;
	
	printf("input the second :");
	scanf("%i", &input);
	
	hour = input/3600;
	min = (input%3600)/60;
	sec = input%60;
	
	printf("The time for %i second is %i : %i : %i\n", input, hour, min, sec);
	
	return 0;
}
