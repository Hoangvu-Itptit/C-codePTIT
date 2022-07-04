/***************

Viết chương trình nhập vào hàng và cột của hình bình hành (không quá 100). Thực hiện in hình bình hành ngược và rỗng theo mẫu trong ví dụ.

Input

Chỉ có một số dòng ghi hai số a,b là số hàng và số cột (không quá 100).

Output

Ghi ra kết quả theo mẫu.

Ví dụ

Input

3 4

Output
	
	
	
****

~*..*

~~****

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
			if(i==0||i==n-1||j==0||j==m-1){
				printf("*");
			}else {
				printf(".");
			}
		}
		printf("\n");
	}
}