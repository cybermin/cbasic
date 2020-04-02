#include <stdio.h>

typedef struct student {
	char name[20];
	int score;
} STD;

void fileOut(int n) {
	FILE *fp ;
	STD st ;
	int i;
	
	fp = fopen("student.txt", "w");
	for(i=0; i<n; i++) {
		scanf("%s %d", st.name, &st.score); 
		fprintf(fp,"%s %d\n",st.name, st.score);
	}
	fclose(fp);	
}

void fileIn(STD* s, int n) {
	FILE *fp ;
	STD st ;
	int i=0;
	
	fp = fopen("student.txt", "r"); 
	while(fscanf(fp, "%s %d", st.name, &st.score) != EOF) {
		*(s+i) = st ;
		//printf("%s => %d\n", (s+i)->name, (s+i)->score) ;
		i++;
	}
	
	fclose(fp);	
}

void swap(STD* x, STD* y) {
	STD temp ;
	
	temp = *x;
	*x = *y ;
	*y = temp;
}

void sort(STD* s, int n) {
	STD temp ;
	int i, j;
	
	for(i=0; i<n-1; i++) {
		for(j=i+1; j <n ; j++) {
			if ( (s+i)-> score < (s+j)->score) swap((s+i) , (s+j));
		}
	}
}

void show(STD* s, int n) {
	int i ;
	
	for(i=0; i<n; i++) {
		printf("%s => %d\n", (s+i)->name, (s+i)->score) ;
	}
}

int main() {
	STD s[5] ;
	int i ;
	
	fileOut(5);
	fileIn(s, 5);
	sort(s, 5);
	show(s,5);
	return 0;
}
 
