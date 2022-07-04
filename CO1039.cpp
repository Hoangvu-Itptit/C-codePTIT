/***************

Cho số nguyên dương N không quá 9 chữ số.

Hãy đếm xem N có bao nhiêu chữ số.

Input

Chỉ có một số nguyên dương N không quá 9 chữ số. 

Output

Ghi ra kết quả trên một dòng

Ví dụ

Input

1234

Output

4

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	int a=log10(n)+1;
	printf("%d",a);
}