#include <stdio.h>

int decTobin(int n) {
	if ( n < 1 ) return ;
		
	decTobin(n/2) ; 
	printf("%d", n %2);
}

int main() {
	int n = 10;
	
	decTobin(n) ;
}


