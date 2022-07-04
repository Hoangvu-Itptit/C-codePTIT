/***************

Viết chương trình nhập vào ba số nguyên có trị tuyệt đối không quá 6 chữ số. Tìm giá trị nhỏ nhất trong ba số đó.

Input

Chỉ có một dòng ghi ba số a,b,c cách nhau một khoảng trống. Cả ba số không quá 6 chữ số. 

Output

Ghi ra số nhỏ nhất.

Ví dụ

Input

10 20 30

Output

10

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		a=b;
	}
	if(a>c){
		a=c;
	}
	printf("%d",a);
}