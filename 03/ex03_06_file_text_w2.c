#include <stdio.h>
typedef struct point{
	int x ;
	int y ; 
}Point;


int main() {
	FILE *fp ;
	Point p1; 
	int n , i;
	char filename[255] ;
	
	scanf("%d", &n);
	scanf("%s", filename);
	
	fp = fopen(filename, "w") ;
	
	for(i=1; i<=n; i++) {
		scanf("%d %d", &p1.x, &p1.y); 
		fprintf(fp, "%d %d\n", p1.x, p1.y);		
	}

	fclose(fp);
}
