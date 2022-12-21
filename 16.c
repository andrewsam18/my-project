
#include<stdio.h>
int main(){
	int day;
	puts("enter a number between 1to7 ");
	scanf ("%i",&day);
	if(day ==1){
	puts("mon");
}
else if(day ==2){
	puts("tue");
	}
	else if(day ==3){
	puts("wed");}
	else if(day ==4){
	puts("thu");}
	else if(day ==5){
	puts("fri");}
	else if(day ==6){
	puts("sat");}
	else if(day ==7){
	puts("sun");}
	else{
	
	puts("no days");}
	return 0;
}