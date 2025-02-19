#include <stdio.h>

/* 문제 : 꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다! */

/* 입력 : 첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 1012)이 공백을 사이에 두고 주어진다. */

/* 출력 : A+B+C의 값을 출력한다.*/

/* 예제 입력 1 :77 77 7777         예제 출력 1  : 7931 */

int main(){
    // 10^12은 int 범위인 21억을 넘어감으로 long long타입으로 바꿔서 받아야함
    long long A, B, C; 
    scanf("%lld %lld %lld", &A, &B, &C);

    printf("%lld", A + B +C);    
}