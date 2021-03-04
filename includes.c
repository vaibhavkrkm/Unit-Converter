#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include "conversion_data.c"

void waitFor(float);
void clearScreen(void);

void waitFor(float timer)
{
	clock_t initialTime;
	
	initialTime = clock();
	
	while(clock() - initialTime < timer);
}

void clearScreen()
{
	system("cls");
}
