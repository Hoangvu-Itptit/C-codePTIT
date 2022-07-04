/***************

Viết chương trình nhập vào N (không quá 100) là độ dài cạnh hình bình hành. Thực hiện in ra hình bình hành tương ứng theo mẫu trong ví dụ.


Input

Chỉ có một số nguyên dương N không quá 100.

Output

Ghi ra kết quả theo mẫu.

Ví dụ

Input

5

Output
	
~~~~*****

~~~*****

~~*****

~*****

*****

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			printf("~");
		}
		for (j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
}