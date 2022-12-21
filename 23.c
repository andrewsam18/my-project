#include <stdio.h>
int main(){
	int month;
	puts("enter a number between 1to12");
	scanf("%i",&month);
	for (int days = 1;days<=31; days++)	{
		if ((month ==4 ||month ==6 ||month==9|| month==11)&&days ==31)
			continue;
		printf("day %i\n ",days);
	if(month==2&&days==28)break;
			
	}
	return 0;
}