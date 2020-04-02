#ifndef _ex09
#define _ex09
#include <stdio.h>

typedef struct student {
	char name[20];
	int score;
} STD;

void fileOut(int n) ;
void fileIn(STD* s, int n) ;
void swap(STD* x, STD* y);
void sort(STD* s, int n) ;
void show(STD* s, int n) ;
#endif
