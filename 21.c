#include <stdio.h>
#include <stdlib.h>
int main()
{
	int  bs;
	float da=30;
	float hra=20;
	float ta =10;
	double gs;
	char quit ='n';
	while(quit !='y'){
			puts("enter basic salary");
	scanf("%i", &bs);
	fflush(stdin);
	gs =bs+(bs*da/100)+(bs*hra/100)+(bs*ta/100)
	;
printf("gs =%g\n",gs );
puts("quit?(y)es/(n)o");
quit =getchar();
}
	return 0;
}