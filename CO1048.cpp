/***************

Cho số nguyên dương N không quá 9 chữ số.

Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn. Nếu không tồn tại số lẻ hoặc số chẵn thì in ra kết quả là 0 cho loại số tương ứng

Input

Chỉ có một dòng ghi số N

Output

Ghi số chữ số lẻ rồi đến số chữ số chẵn

Ví dụ

Input

12345678

Output

4 4

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char xau[100];
	scanf("%s",xau);
	int i,chan=0;
	for(i=0;i<strlen(xau);i++){
		if(xau[i]%2==0){
			chan++;
		}
	}
	printf("%d %d",strlen(xau)-chan,chan);
}