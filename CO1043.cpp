/***************

Số Strong là số thỏa mãn có tổng giai thừa các chữ số của nó bằng chính nó. Ví dụ: 145 = 1! + 4! + 5!


Viết chương trình nhập vào số n không quá 6 chữ số và kiểm tra xem n có phải số Strong hay không. Nếu đúng in ra 1 sai in ra 0.

Input

Chỉ có một dòng ghi số N (không quá 6 chữ số)

Output

Ghi ra 1 hoặc 0

Ví dụ

Input

145

Output

1

***************/

#include <stdio.h>
#include <math.h>
int giaithua(int a){
	int i,s=1;
	for(i=1;i<=a;i++){
		s=s*i;
	}
	return s;
}

int main(){
	int n,s=0,a;
	scanf("%d",&n);
	int k=n;
	while(n>0){
		a=n%10;
		s=s+giaithua(a);
		n=n/10;
	}
	if(s==k){
		printf("1");
	}else {
		printf("0");
	}
}
