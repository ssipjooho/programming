#include <stdio.h>

int main() {

int a;
  
  scanf("%d", &a); //(1st) 입력 받기
  printf("===%d단===\n", a);
  for(int i = 1; i <= 9; i++)// (2nd) for문 설계 = 구구단 출력
    {
     printf("%d*%d = %d\n", a, i, a*i);//서식지정자를 활용하여 출력 
    }
  return 0;
}
