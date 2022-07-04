/***************

Số hoàn hảo là số có tổng các ước số (nhỏ hơn chính nó) bằng nó. Ví dụ: 6 = 1 + 2 + 3.

Nhập vào số N và kiểm tra xem n có phải là số hoàn hảo hay không. Nếu đúng in ra 1, sai in ra 0.

Input

Chỉ có một dòng ghi số N (không quá 6 chữ số)

Output

Ghi ra 1 hoặc 0

Ví dụ

Input

6

Output

1

***************/

#include <stdio.h>
#include <math.h>

int main(){
	int n,i,s=0;
	scanf("%d",&n);
	int a=sqrt(n);
	for(i=1;i<=a;i++){
		if(i*i==n){
			s=s+i;
		}else if(n%i==0){
			s=s+i+n/i;
		}
	}
	if(s==2*n){
		printf("1");
	}else {
		printf("0");
	}
}