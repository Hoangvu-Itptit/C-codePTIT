/***************

Viết chương trình kiểm tra một số nguyên dương có phải số nguyên tố hay không.

Input

Dòng đầu của dữ liệu vào ghi số bộ test. Mỗi dòng tiếp theo có một nguyên dương không quá 9 chữ số.

Output

Kết quả in ra YES nếu đó là số nguyên tố, in ra NO nếu ngược lại.

Ví dụ:

Input

3

123456

997

111111111

Output

NO

YES

NO

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int t,n,i;
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		if(n<2){
			printf("NO");
		}else if(n!=2&&n%2==0){
			printf("NO");
		}else if(n!=3&&n%3==0){
			printf("NO");
		}else {
			int a=sqrt(n),kt=0;
			for(i=5;i<=a;i+=6){
				if(n%i==0||n%(i+2)==0){
					printf("NO");
					kt=1;
					break;
				}
			}
			if(kt==0){
				printf("YES");
			}
		}
		printf("\n");
	}
}

