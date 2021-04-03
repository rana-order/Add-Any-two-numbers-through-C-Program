#include <stdio.h>
#include <conio.h>
int main(){
int number;
printf("Enter num of Day");
scanf("%d",&number);
switch(number)
case 1:	printf("The day is Sunday. \n");
	case 2:		printf("The day is Monday. \n");
	case 3:	printf("The day is Tuesday. \n");
	case 4:	printf("The day is Wednesday. \n");
	case 5:	printf("The day is Thursday. \n");
	case 6:		printf("The day is Friday. \n");
	case 7:	printf("The day is Saturday. \n");
	
	Default:
		printf("Invalid Option Given");
		return 0;
	}