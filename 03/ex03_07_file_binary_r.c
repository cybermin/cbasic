#include <stdio.h>
typedef struct point{
	int x ;
	int y ; 
}Point;


int main() {
	FILE *fp ;
	Point p1; 
	int n , i;
	 
	
	fp = fopen("pb2.dat", "rb") ;
	
	while(1) {
		fread(&p1, sizeof(p1), 1, fp);
		if (feof(fp)) break;
		printf("(%d, %d)\n", p1.x, p1.y) ;		
	}

	fclose(fp);
}
