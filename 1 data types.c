#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
	printf("data types:\n");
	printf("_____________________________\n");
printf("unsigned ranges:\n");
printf("max. char value =%u\n", UCHAR_MAX);
printf("max. short int value =%u\n", USHRT_MAX);
printf("max. int value =%u\n", UINT_MAX);
printf("max. long value =%u\n", ULONG_MAX);
printf("_____________________________\n");
printf("\nsigned ranges:\n");
printf("min.char value =%i\n", CHAR_MIN);
printf("max.char value =%i\n", CHAR_MAX);
printf("min. short int value =%u\n", SHRT_MIN);
printf("max.short int  value =%u\n", SHRT_MAX);
printf("min.  int value =%i\n", INT_MIN);
printf("max.  int value =%i\n", INT_MAX);
printf("min. long  int value =%i\n", LONG_MIN);
printf("max long  int value =%i\n", LONG_MAX);
printf("_____________________________\n");
printf("\nfloat,double and long double\n");
printf("max. float value =%g\n",FLT_MAX);
printf("min. float value =%g\n",FLT_MIN);
printf("max.double value =%g\n",DBL_MAX);
printf("min.double value =%g\n",DBL_MIN);
printf("max.long double value =%g\n",LDBL_MAX);
printf("min.long double value =%g\n",LDBL_MIN);
printf("_____________________________\n");
puts("memory size and data types");
printf("char =%i bytes\n",sizeof(char));
printf("short int =%i bytes\n",sizeof(short));
printf("int =%i bytes\n",sizeof(int));
printf("long int =%i bytes\n",sizeof(long));
printf("float =%i bytes\n",sizeof(float));
printf("double =%i bytes\n",sizeof(double));



return 0;	
}
