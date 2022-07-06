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
	
4321

3212

2123

1234

Input

4 6

Output
	
654321

543212

432123

321234

Input

6 4

Output
	
6543

5432

4321

3212

2123

1234

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int m,i,j,n,kt;
	scanf("%d%d",&m,&n);
	int a,b;
	if(m>n){
		a=m;
	}else {
		a=n;
	}
	for(i=m,b=a;i>0;i--,b--){
		kt=1;
		a=b;
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
