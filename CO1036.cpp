/***************

Cho một số nguyên dương N.

Thực hiện tìm tích của các chữ số và in ra màn hình.

Input

Chỉ có một dòng ghi số nguyên dương N (không quá 9 chữ số)

Output

Ghi ra kết quả trên một dòng

Ví dụ

Input

1234

Output

24

***************/

#include <stdio.h>
#include <math.h>

int main(){
	int n,i,s=1;
	scanf("%d",&n);
	while (n>0){
		s=s*(n%10);
		n=n/10;
	}
	printf("%d",s);
}
