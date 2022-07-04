/***************

Viết chương trình nhập vào n (không quá 100) là cạnh của hình vuông và thực hiện in ra hình vuông rỗng các ký tự * theo mẫu trong ví dụ.

Input

Chỉ có một số nguyên dương N không quá 100.

Output

Ghi ra kết quả theo mẫu.

Ví dụ

Input

4

Output
	
	
****

*..*

*..*

****

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int m,i,j;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(i==0||i==m-1||j==0||j==m-1){
				printf("*");
			}else {
				printf(".");
			}
		}
		printf("\n");
	}
}