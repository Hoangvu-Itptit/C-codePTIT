/***************

Viết chương trình nhập vào số hàng và cột của hình bình hành (không quá 100). Thực hiện in ra hình bình hành ngược theo mẫu trong ví dụ.

Input

Chỉ có một số dòng ghi hai số a,b là số hàng và số cột (không quá 100).

Output

Ghi ra kết quả theo mẫu.

Ví dụ

Input

3 5

Output
	
*****

~*****

~~*****

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int m,i,j,n;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf("~");
		}
		for(j=0;j<m;j++){
			printf("*");
		}
		printf("\n");
	}
}