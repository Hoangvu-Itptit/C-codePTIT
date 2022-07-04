/***************

Nhập vào số hàng và số cột của hình chữ nhật (không quá 9). Vẽ hình chữ nhật số theo nguyên tắc tương ứng theo mẫu trong các ví  dụ dưới đây.

Input

Chỉ có một số dòng ghi số hàng và số cột của hình chữ nhật (không quá 9).

Output

Ghi ra kết quả theo mẫu.

Ví dụ

Input

4 4

Output
	
1234

2341

3421

4321

Input

3 5

Output
	
12345

23451

34521

Input

6 4

Output
	
1234

2341

3421

4321

5321

6321

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int m,i,j,n;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		int a;
		if(i<=n){
			for(j=i;j<=n;j++){
				printf("%d",j);
			}
			for(j=i-1;j>0;j--){
				printf("%d",j);
			}
		}else {
			printf("%d",i);
			for(j=n-1;j>0;j--){
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
