/***************

Viết chương trình tính ước số chung lớn nhất của 2 số nguyên dương (không quá 6 chữ số).

Input

Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng hai số nguyên dương. 

Output

Mỗi bộ test ghi ra kết quả tính được trên một dòng. 

Ví dụ

Input

2

24 14

75 125

Output

2

25

***************/

#include <stdio.h>

int main(){
	int t,m,n,a,b,i;
	scanf("%d",&t);
	while (t--){
		scanf("%d%d",&m,&n);
		if(m>n){
			a=m;
			b=n;
		}else{
			a=n;
			b=m;
		}
		for(i=b;i>0;i--){
			if(a%i==0&&b%i==0){
				printf("%d\n",i);
				break;
			}
		}
	}
}