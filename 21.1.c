#include <stdio.h>
int main(){
	int bs;
	float da =30;
	float hra =20;
	float	ta =10;
	double gs;
	int count=0;
	while(count<5){
		puts("enter basic salary");
	scanf("%i", &bs);
	fflush(stdin);	
	gs =bs +(bs*da/100)+ (bs*hra/100)+ (bs*ta/100);
printf ("gs =%g\n",gs);
count++;
}
	return 0;
}