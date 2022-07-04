/***************

Viết chương trình nhập vào chiêu cao của tam giác (không quá 100) và thực hiện in ra tam giác vuông theo mẫu trong ví dụ.

Input

Chỉ có một số dòng ghi chiều cao (không quá 100).

Output

Ghi ra kết quả theo mẫu.

Ví dụ

Input

5

Output
	
	
~~~~*

~~~**

~~***

~****

*****

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int m,i,j;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(j<m-i-1){
				printf("~");
			}else {
				printf("*");
			}
		}
		printf("\n");
	}
}