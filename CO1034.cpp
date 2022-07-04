/***************

Nhập vào 2 số tự nhiên  m và n, sao cho  m<n và cả hai số đều không quá 9 chữ số. Hãy liệt kê các số chính phương trong đoạn [m,n].

Input

Dữ liệu vào chỉ bao gồm hai số m và n ghi trên một dòng.

Output

Dòng đầu tiên của kết quả ghi số lượng số chính phương tìm được. Tiếp theo, mỗi số chính phương được ghi trên một dòng.

Ví dụ

Input

9 50

Output

5

9

16

25

36

49

***************/

#include <stdio.h>
#include <math.h>

int main(){
	int m,n,i;
	scanf("%d%d",&m,&n);
	int a=sqrt(m);
	int b=sqrt(n);
	if(a*a!=m){
		a++;
	}
	printf("%d\n",b-a+1);
	for(i=a;i<=b;i++){
		printf("%d\n",i*i);
	}
}