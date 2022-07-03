/***************
Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị bình phương của N.

Input

Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một số tự nhiên không quá 9 chữ số.

Output

Với mỗi bộ test, ghi ra kết quả trên một dòng.

Ví dụ

Input

2

1

23

Output

1

529

***************/
#include <stdio.h>

#include <stdio.h>

int main(){
	int t;
	long long n;
	long long s;
	scanf("%d",&t);
	while(t--){
		scanf("%lli",&n);
		s=n*n;
		printf("%lli\n",s);
	}
}

