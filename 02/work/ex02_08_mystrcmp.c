#include <stdio.h>

int mystrcmp(char* mystr1, char* mystr2) {
	int flag = 1 ;
	while(*mystr1 || *mystr2)  {
		if ( *mystr1++ == *mystr2++) continue ;
		else { 
			flag = 0;
			break;
		}
	}
	
	return flag ;
}

int main() {
	char mystr1[256];
	char mystr2[256]; 

	gets(mystr1);
	gets(mystr2);
	
	if ( mystrcmp(mystr1, mystr2)) {
		printf("�ι��ڿ��� �����ϴ�.\n");
	}
	else {
		printf("�ι��ڿ��� �ٸ��ϴ�.\n");
	} 

	return 0;
}
