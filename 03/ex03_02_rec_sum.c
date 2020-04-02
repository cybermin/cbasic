#include <stdio.h>

int showSum(int n) {
	if ( n == 1 ) return ;
		
	return n + showSum(n-1) ; 
}

int main() {
	int n = 10;
	
	printf("sum = %d \n", showSum(10)) ;
}


