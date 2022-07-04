/***************

Cho hai số nguyên dương a,b không quá 106.

Thực hiện tính tổng các số tự nhiên nằm trong đoạn [a, b] và in ra màn hình.

(Lưu ý có thể nhập a lớn hơn b)

Input

Chỉ có một dòng ghi hai số nguyên dương a,b (không quá 6 chữ số)

Output

Ghi ra kết quả trên một dòng

Ví dụ

Input

1 10

Output

55

***************/

#include <stdio.h>
#include <math.h>

int main(){
	int a,b,i,m,n;
	long long s=0;
	scanf("%d%d",&m,&n);
	if(m>n){
		a=n;
		b=m;
	}else{
		a=m;
		b=n;
	}
	for(i=a;i<=b;i++){
		s=s+i;
	}
	printf("%lli",s);
}