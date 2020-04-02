#include <stdio.h>

void show(int n) {
	if ( n < 1 ) return ;
		
	show(n-1) ;
	printf("%d\n", n) ;
}

int main() {
	int n = 5;
	
	show(n) ;
}
