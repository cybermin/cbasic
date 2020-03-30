/*
3015 : ����ǥ ���
�����̴� �������� �������� JH�� �����ֱ� ���� �������� ����ó�� ���α׷��� ������ �ߴ�.
JH �������� �л����� ��ܰ� ������ �Է��ϸ� ���� m���� �л� ����� ����� �ֱ⸦ ���Ѵ�.

���� ������ �����ϴ� ���α׷��� �ۼ��� ����. 

�Է�
ù° �ٿ� �������� ���� n (3<=n<=100)�� ����ο� m (1<=m<=n)�� �������� ���еǾ� �Էµȴ�.
��° �ٺ��� �л� �̸��� ����(0 100)�� �������� ���еǾ� �Էµȴ�. 
�� �̸��� ���̴� �ִ� 10����Ʈ �̳��̴�. 

���
���� m���� �л������ ����Ѵ�.
��, ��¼����� ������ ���� �л��� ���� ��µǸ�, ������ ���� ��� �Է� ������ ���� ������ ����Ѵ�. 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct num {
	int n;
	int in;
	int order;
} NUM;
 
int compareIn(const void *m, const void *n) {
    NUM *pa = (NUM *)m;
    NUM *pb = (NUM *)n;
    return pa->in - pb->in;
 
}
 
int compareOrder(const void *m, const void *n) {
    NUM *pa = (NUM *)m;
    NUM *pb = (NUM *)n;
    return pa->n - pb->n;
 
}
 
int main() {
	NUM* d = malloc(sizeof(NUM) * 50000);
	int n;
	int i, j;
	
	scanf("%d", &n) ;
	for(i=0; i<n ; i++) {
		scanf("%d", &(d+i)->n);
		(d+i)->in = i+1 ;
	}
		
	// ������ �迭, ��� ����, ��� ũ��, �� �Լ��� �־���
    qsort(d, n, sizeof(NUM), compareOrder);
	for(i=0; i<n; i++){
		(d+i)->order = i ;	
	}
	qsort(d, n, sizeof(NUM), compareIn);
	for(i=0; i<n; i++){
		printf("%d ", (d+i)->order) ;
	} 
	free(d) ;
	return 0;
}

