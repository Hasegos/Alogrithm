#include <stdio.h>

/* 문제 : (A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오. */

/* 입력 : 첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000) */

/* 출력 : 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다. */

/* 예제 입력 1 : 5 8 4         예제 출력 1  : 1 1 0 0 */

int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int result_1 = (a + b) %c;    
    int result_2 = ((a % c) + (b % c)) % c;
    int result_3 = (a * b) %c;
    int result_4 = ((a % c ) * (b % c)) % c;

    printf("%d\n%d\n%d\n%d", result_1 , result_2 , result_3 , result_4);
}