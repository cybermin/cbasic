#include <stdio.h>

void show(int n) {
	if ( n < 1 ) return ;
	
	printf("%d\n", n) ;
	show(n-1) ;
}

int main() {
	int n = 5;
	
	show(n) ;
}


