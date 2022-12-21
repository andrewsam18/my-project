#include <stdio.h>
int main (){
	int num;
	long factorial =1;
	puts("enter a number");
	scanf("%i",&num);
	while (num>0){
		factorial *=num--;
			printf("factorial=%i\n",factorial);
		//	printf("factorial=%i",factorial);
	}
	return 0;
}