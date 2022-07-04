/***************

Hãy viết chương trình tính tổng các chữ số của một số nguyên bất kỳ.

Input 

Dòng đầu tiên của dữ liệu vào ghi số bộ test, mỗi bộ test ghi trên một dòng 1 số nguyên dương không quá 9 chữ số.

Output

Kết quả của mỗi bộ test cũng ghi trên một dòng.

Ví dụ

Input

1

1234

Output

10

***************/

#include <stdio.h>
#include <math.h>

int main(){
	int t,n,sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		while(n>0){
			sum=sum+n%10;
			n=n/10;
		}
		printf("%d\n",sum);
	}
}