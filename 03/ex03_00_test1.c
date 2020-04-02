#include <stdio.h>

void sort(char* num, int len) {
	int i, j;
	char temp, x, y;
	
	for(i=0; i<len-1; i++) {
		printf("%c=> ",*(num+i) );
		for(j=0; j<len; j++) {

			if (*(num + i) < *(num +j) ) {
							printf("(%d)%c\t",j,*(num+j) );
				temp = *(num+i);
				*(num+i) = *(num+j);
				*(num+j) = temp;
			}
		}
		printf("\n") ;
	}
}


void show(char* num, int len) {
	int i=0, temp ;
	
	for(i=0; i<=len; i++) {
		printf("%c",*(num+i) );
	}
	printf("\n") ;
}

int sumAll(char* num, int len) {
	int i, sum = 0 ;
	
	for(i=0; i<len; i++) {
		sum = sum + (*(num+i) - '0') ;
	}
	
	return sum;
}

int main() {
	char num[] = "67091";
	int len = sizeof(num) / sizeof(char) - 1;
	
	printf("len = %d\n", len );
	//show(num, len);
	printf("%s\n", num);
	sort(num, len);
	printf("%s\n", num);
	printf("각자리 합 = %d\n",sumAll(num, len)) ;
}
