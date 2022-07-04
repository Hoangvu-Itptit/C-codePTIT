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

2123

3212

4321

Input

4 6

Output
	
123456

212345

321234

432123

Input

6 4

Output
	
1234

2123

3212

4321

5432

6543

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int m,i,j,n,kt;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		int a=i;
		kt=1;
		for(j=1;j<=n;j++){
			if(a==1) kt=0;
			printf("%d",a);
			if(kt==0){
				a++;
			}else {
				a--;
			}
			
		}
		printf("\n");
	}
}
