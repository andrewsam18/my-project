#include<stdio.h>
int main(){
	int bs;
	float da =30;
	float hra =20;	
	float ta =10;
	double gs;
	for (int count =0; count<5;count++){
		puts("enter basic salary");
	scanf("%i", &bs);
	fflush(stdin);
gs =bs +(bs*da/100)+ (bs*hra/100)+ (bs*ta/100);
printf ("gs =%g\n",gs);
//count++;

}
	return 0;
}