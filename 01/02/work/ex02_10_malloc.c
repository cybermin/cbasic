#include <stdio.h>
#include <stdlib.h>
int maxh(int* height, int n) {
	int i ;
	int maxn = *(height) ;
	
	for(i=1; i<n; i++) {
		if (*(height+i) > maxn) maxn = *(height+i);
	}
	
	return maxn;
}
int main()
{
    int n ;
    int* height;
    int i ;
     
	printf("ó���� �ο��� : ") ;
	scanf("%d", &n) ;
	
	//height = (int*)malloc(sizeof(int)*n) ;
	height = (int*)calloc(n, sizeof(int)) ;
	
	printf("%d���� Ű�� �Է��ϼ���.\n", n) ;
	for(i=0; i<n; i++) {
		scanf("%d", (height+i)) ;
	}
	
	printf("�ִ밪 : %d\n", maxh(height, n)) ;
	
	free(height);
    return 0; 
}
