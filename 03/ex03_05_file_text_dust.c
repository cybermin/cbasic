#include <stdio.h>
#include <math.h>
typedef struct area{
	char name[6] ;
	int dust ; 
}Area;
 
void show(Area a) {
	int i ;
	printf("%s : ", a.name) ; 
	for(i=1; i<= a.dust; i++) {
		printf("■");
	}
	printf("(%d)\n", a.dust); 
}

int main() {
	FILE *fp ;
	Area a;  
	fp = fopen("도별미세먼지.txt", "r") ;
	
	while(fscanf(fp, "%s %d", &a.name, &a.dust) != EOF) {
		show(a);
	}

	fclose(fp);
}
