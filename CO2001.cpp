/***************

Viết chương trình nhập vào n là cạnh của hình vuông và in ra hình vuông các ký tự *.

Giá trị n không quá 100. 

Input

Chỉ có một số nguyên dương N không quá 100.

Output

Ghi ra kết quả theo mẫu.

Ví dụ

Input

4

Output

	
****

****

****

****

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
}

