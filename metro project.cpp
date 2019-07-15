//**
//*Metro railways makes weekly payments to their workers
//*The remuneration is based on weekly worked hours
//*The rate of payment varies with number of hours
//*The basic of payment is the following ..
//*Hours worke a wee				Rate
//*First 40hrs						Rs. r per hour
//*Next 20 hrs						Rs. r*1.5 per hour
//*Next onwards 					Rs.r*2.5 per hour
//*Here r has been assumed to be the rate for 40 hrs slab
//*Write a program to get the weekly worked hours and r values
//*as input and calculate the remuneration for the worker.
//**

#include<stdio.h>
int main(void)
{
	//Declare all variables
	int wh;
	double r, rem;
	//Accept the inputs
	printf("Enter worked hours for the week(Total hours in a week are'168'): ");
	scanf("%d", &wh);
	printf("Enter 'r' value :  ");
	scanf("%d", &r);
	//Calculate remuneration
	if (wh>=60)
	rem = 40*r + 20*r*1.5 + (wh - 60)*r*2.5;
	else if (wh>=40)
	rem = 40*r + (wh -40)*r*1.5;
	else
	rem = wh*r;
	//Display remuneration
	printf("Remuneration for the week : %d",rem);
	return 0;
}
