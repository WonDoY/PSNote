// 1 : 1  / 1 
// 2 : 11 2 / 2
// 3 : 111 12 21 3 / 4
// 4 : 1111 112 121 211 22 (3)1 1(3) / 7
// 5 : (4)1 1(4) - 겹치는 11111 제외 / 13 
// 6 : (4)(2) (2)(4) - 겹치는 111111 제외*4 / 24
//    13*2 2*13

// 1 : 1 - 1
// 2 : 11 2 - 2
// 3 : 111 12 21 3 - 4
// 4 : 1(3)
//	   2(2)
//	   3(1)

// 5 : 1(4)
//	   2(3)
//	   3(2)
// 새로이 추가되는 수가 1,2,3 이 추가될 수 있음. 
#include<cstdio>
#define M 13
int a[M] = {0,1,2,4,0};
int main(){
	int tc, n;
	scanf("%d", &tc);
	for(int i = 4 ; i < M ; i++) a[i] = a[i-1] + a[i-2] + a[i-3];
	while(tc--){
		scanf("%d", &n);
		printf("%d\n",a[n]);
	}
	return 0;
}