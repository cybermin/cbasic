#include <stdio.h>
#include <math.h>
typedef struct point{
	int x ;
	int y ; 
}Point;

double dis(Point p1, Point p2) {
	return sqrt(pow((p1.x - p2.x), 2)+pow((p1.y - p2.y),2));
}

void show(Point p1) {
	printf("p(%d ,%d) ", p1.x, p1.y) ;
}
int main() {
	FILE *fp ;
	Point p1, p2; 
	int n , i;
	int flag = 0; 
	
	scanf("%d", &n);	
	fp = fopen("p.txt", "w") ;
	
	for(i=1; i<=n; i++) {
		scanf("%d %d", &p1.x, &p1.y); 
		fprintf(fp, "%d %d\n", p1.x, p1.y);		
	}

	fclose(fp);
	
	fp = fopen("p.txt", "r") ;
	while(fscanf(fp, "%d %d", &p1.x, &p1.y) != EOF) {
		if (flag) {
			show(p2);
			show(p1);
			printf("distance = %.4lf\n" , dis(p1, p2)) ;
		}
		else flag = 1;

		p2 = p1 ;
	}

	fclose(fp);
}
