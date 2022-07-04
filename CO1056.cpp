/***************

Một số nguyên dương được gọi là số không giảm nếu các chữ số từ trái qua phải tạo thành dãy không giảm. Ví dụ số số 123 là số không giảm, số 121 không phải.

Viết chương trình kiểm tra một số có phải số không giảm hay không.

Input

Dòng đầu ghi số bộ test, mỗi bộ test ghi một số nguyên dương không quá 18 chữ số 

Output

Với mỗi bộ test, nếu đúng ghi ra YES, nếu sai ghi ra NO.  

Ví dụ

Input

2

1234567890676543

11223334445555689

Output

NO

YES

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char xau[100];
	int i,t;
	scanf("%d",&t);
	while (t--){
		int kt=0;
		scanf("%s",xau);
		for(i=0;i<strlen(xau)-1;i++){
			if(xau[i]>xau[i+1]){
				printf("NO");
				kt=1;
				break;
			}
		}
		if(kt==0) printf("YES");
		printf("\n");
	}
}