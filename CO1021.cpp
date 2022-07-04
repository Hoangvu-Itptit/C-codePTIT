/***************

Viết chương trình nhập vào một số n không quá 109, thực hiện tìm tổng các chữ số của n và in ra màn hình.

Input:

Chỉ có một dòng ghi số n.

Output:

Ghi ra kết quả tính toán

Ví dụ: 

Input

1234

Output

10

***************/

#include <stdio.h>
#include <math.h>

int main(){
	int n,sum=0;
	scanf("%d",&n);
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	printf("%d",sum);
}