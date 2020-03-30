#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
} PT;

int main() {
	PT* pt1 = malloc(sizeof(PT)) ;
	PT* pt2 = malloc(sizeof(PT)) ;
	double dis ;
	
	printf("두 좌표 입력\n");
	scanf("%d %d", &pt1->x, &pt1->y) ;
	scanf("%d %d", &pt2->x, &pt2->y) ;
		
	printf("(%d, %d)\n", pt1->x, pt1->y);
	printf("(%d, %d)\n", pt2->x, pt2->y);
	
	dis = sqrt(pow((pt1->x - pt2->x),2.0) + pow((pt1->y - pt2->y),2.0))	;
	
	printf("두점사이 거리 : %lf\n", dis) ;
	return 0;
}


