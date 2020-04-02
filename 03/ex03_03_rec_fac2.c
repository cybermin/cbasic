#include <stdio.h>

int f(n) {
	if (n == 1) {
		printf("%d = ", n);
		return 1;
	}

	printf("%d x ", n) ;
	return n * f(n-1);
}


int main() {
	int n = 4;
	
	printf("%d \n", f(n)) ;
	return 0 ;
}
