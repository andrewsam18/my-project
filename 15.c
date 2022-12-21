#include<stdio.h>
int main (){
	int salary;
	double bonus =8.33;
	puts ("your salary");
	scanf ("%i",&salary);
	if(salary<10000){
		printf("bonus=%g", salary*bonus/100);
	}
	else
	puts("no bonus");
return 0;	
}