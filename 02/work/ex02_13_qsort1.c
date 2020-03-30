#include <stdio.h>
#include <stdlib.h>    // qsort �Լ��� ����� ��� ����

//���� ���� 
int intcmp1(const void *v1, const void *v2) { 
	return (*(int*)v1 - *(int*)v2); 
}  
//��������  
int intcmp2(const void *v1, const void *v2) {
	 return (*(int*)v2 - *(int*)v1); 
}  

int main()
{
    // ���ĵ��� ���� �迭
	int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };    
	
	int i ;
    // ������ �迭, ��� ����, ��� ũ��, �� �Լ��� �־���
    qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), intcmp1);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);    // 1 2 3 4 5 6 7 8 9 10
    }
    printf("\n");

	qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), intcmp2);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);    // 1 2 3 4 5 6 7 8 9 10
    }
    printf("\n");

    return 0;
}


