#include "ex03_09.h"
void swap(STD* x, STD* y) {
	STD temp ;
	
	temp = *x;
	*x = *y ;
	*y = temp;
}

void sort(STD* s, int n) {
	STD temp ;
	int i, j;
	
	for(i=0; i<n-1; i++) {
		for(j=i+1; j <n ; j++) {
			if ( (s+i)-> score < (s+j)->score) swap((s+i) , (s+j));
		}
	}
}

void show(STD* s, int n) {
	int i ;
	
	for(i=0; i<n; i++) {
		printf("%s => %d\n", (s+i)->name, (s+i)->score) ;
	}
}

