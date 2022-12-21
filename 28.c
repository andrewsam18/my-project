 #include <stdio.h>
long factorial(int num);
int main(){
	int num;
	puts("enter a number");
	scanf("%i",&num);
		printf("factorial=%i\n",factorial(num));
return 0;
}
long factorial(int num){
	if (num==1)return num;
		return num*factorial(num-1);
}