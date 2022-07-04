/***************

Viết chương trình nhập vào một số nguyên dương N không quá 9 chữ số.

In ra chữ số đầu tiên và cuối cùng của N.

Input

Chỉ có một số nguyên dương N không quá 9 chữ số. 

Output

Ghi ra kết quả trên một dòng

Ví dụ

Input

1234

Output

1 4

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char xau[100];
	scanf("%s",xau);
	printf("%c %c",xau[0],xau[strlen(xau)-1]);
}

