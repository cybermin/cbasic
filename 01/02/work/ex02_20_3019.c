/*
3019 : ������ ����
�������� ���� ������ �޸� �ִ�.

�޸�� �����ٸ�, ��, ��, �� �� ���·� �����Ǿ� �ִ�.
�� �޸� ���� ��¥�� ���� ������ �����Ͽ� ����ϰ��� �Ѵ�.
���� ��¥�� ������ ��� �����ٸ��� ������ ������ �������� �����Ѵ�.

�Է�
ù°�ٿ� �������� ���� n�� �Էµȴ�.(1<=n<=100)
�� �����ٺ��� n���� �����Ͱ� �����ٸ�, ��, ��, �� ���·� �� �ٿ� �ϳ��� �Էµȴ�. 
�����ٸ��� ������� ���ĺ��ҹ��� 99���� ����, ������� ��ȿ�� ��¥�� �Էµȴ�. 

��� 
���� ���� �ؾ� �� �����ٸ���� �����Ͽ�  ����Ѵ�. 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct schedule {
	char memo[21];
	char y[5];
	char m[3];
	char d[3]; 
	char ymdmemo[40] ;
} SCH;


int compareymmemo(const void *m, const void *n) {
    SCH *pa = (SCH *)m;
    SCH *pb = (SCH *)n;
    return strcmp(pa->ymdmemo , pb->ymdmemo) ;
}

void swap(SCH* sch1, SCH* sch2) {
	SCH temp;
	
	temp = *sch1 ;
	*sch1 = *sch2 ;
	*sch2 = temp ;
}

int main() {
	SCH* sch = malloc(sizeof(SCH) * 100);
	int n;
	int i, j, size;
	
	scanf("%d", &n) ;
	for(i=0; i<n ; i++) {
		scanf("%s %s %s %s", (sch+i)->memo,(sch+i)->y,(sch+i)->m,(sch+i)->d); 
		//���� ���ڸ��� ���� 
		
		if (strlen((sch+i)->y)!=4) { 
			size = strlen((sch+i)->y) ;
			for(j=size-1; j>=0; j--) {
				(sch+i)->y[3-j] = (sch+i)->y[j]; 
			}
			for(j=0; j<4-size; j++) {
				(sch+i)->y[j] = '0';
			} 
		}
		
		if (strlen((sch+i)->m) == 1) {
			(sch+i)->m[1] = (sch+i)->m[0];
			(sch+i)->m[0] = '0';
		}
		
		if (strlen((sch+i)->d) == 1) {
			(sch+i)->d[1] = (sch+i)->d[0];
			(sch+i)->d[0] = '0';
		}
		
		strcat((sch+i)->ymdmemo,(sch+i)->y);
		strcat((sch+i)->ymdmemo,(sch+i)->m);
		strcat((sch+i)->ymdmemo,(sch+i)->d);  
		strcat((sch+i)->ymdmemo,(sch+i)->memo); 
	}
 	
	// ������ �迭, ��� ����, ��� ũ��, �� �Լ��� �־���	
	qsort(sch, n, sizeof(SCH), compareymmemo);  
	for(i=0; i<n; i++){
		printf("%s\n", (sch+i)->memo) ;
	}
 
	free(sch) ;
	return 0;
}

