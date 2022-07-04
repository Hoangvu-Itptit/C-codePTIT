/***************

Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không quá 9 chữ số) có chữ số bắt đầu và kết thúc bằng nhau hay không.

Input

Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương tương ứng cần kiểm tra. 

Output

Mỗi bộ test viết ra YES hoặc NO, tương ứng với bộ dữ liệu vào

Ví dụ

Input

2

12451

1000012

Output

YES

NO

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char xau[100];
	int t;
	scanf("%d",&t);
	while (t--){
		scanf("%s",xau);
		if(xau[0]==xau[strlen(xau)-1]){
			printf("YES");
		}else {
			printf("NO");
		}
		printf("\n");
	}
}