/*
1170 : 당신의 학번은? 1
태어학번을 입력 받아 다음 형식으로 출력하시오.
학번은 학년, 반, 번호로 입력된다.
예)
2 3 27   =====>    2327로 출력
2 3 7   ======> 2307로 출력   (번호가 10번미만이면 0을 붙여 출력)
*/
#include <stdio.h>
int main() {
    int n1, n2, n3 ;

	scanf("%d %d %d", &n1, &n2, &n3) ;
    
    if ( n3 < 10) printf("%d%d0%d", n1, n2,n3);
    else printf("%d%d%d", n1, n2,n3);
    return 0;
}

