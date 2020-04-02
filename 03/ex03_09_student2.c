#include "ex03_09.h"
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

