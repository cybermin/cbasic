#include <stdio.h>

int f(n) {
	if (n < 1) return ;

	f(n/2);
	printf("%d", n%2) ;
}


int main() {
	int n = 10;
	
	f(n); 
	return 0 ;
}
