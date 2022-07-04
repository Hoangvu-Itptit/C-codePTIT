/***************

Viết chương trình phân tích một số nguyên thành các thừa số nguyên tố.  

Input

Dòng đầu ghi số bộ test, mỗi bộ test ghi trên một dòng số nguyên dương cần phân tích (không quá 9 chữ số) .

Output

Kết quả của mỗi bộ test ghi trên một dòng, mỗi thừa số cách nhau một khoảng trống.

Ví dụ

Input

2

10

20

Output

2 5

2 2 5

***************/

#include <stdio.h>

int main(){
	int t,n,i,a;
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		a=n;
		for(i=2;i<=a/2;i++){
			while (n%i==0){
				printf("%d ",i);
				n=n/i;
			}
		}
		printf("\n");
	}
}