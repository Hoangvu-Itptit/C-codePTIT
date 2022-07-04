/***************

Nhập vào kích thước chiều rộng, chiều cao và in ra hình chữ nhật các dấu * nhưng rỗng bên trong. Các dấu * được in sát cạnh nhau.

Dữ liệu vào chỉ có 2 số nguyên dương là chiều rộng và chiều cao (không quá 40).

Ví dụ:

Input

5 4

4444444

Output

*****

*   *

*   *

*****

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==0||i==n-1||j==0||j==m-1){
				printf("*");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
