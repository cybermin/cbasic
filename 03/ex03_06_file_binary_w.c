#include <stdio.h>
typedef struct point{
	int x ;
	int y ; 
}Point;


int main() {
	FILE *fp ;
	Point p1; 
	int n , i;
	
	scanf("%d", &n);
	
	fp = fopen("pb.dat", "wb") ;
	
	for(i=1; i<=n; i++) {
		scanf("%d %d", &p1.x, &p1.y); 
		fwrite(&p1, sizeof(p1), 1, fp);		
	}

	fclose(fp);
}
