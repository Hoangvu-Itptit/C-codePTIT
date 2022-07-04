/***************

Nhập một số nguyên dương N không quá 9 chữ số. Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn.

Input

Dòng đầu của dữ liệu vào ghi số bộ test, mỗi bộ test ghi trên một dòng một số nguyên cần kiểm tra.

Output

Kết quả in ra trên một dòng lần lượt là số chữ số lẻ và số chữ số chẵn, cách nhau một khoảng trống.

Ví dụ

Input

2

1234

4444444

Output

2 2

0 7

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char xau[100];
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",xau);
		int i,chan=0;
		for(i=0;i<strlen(xau);i++){
			if(xau[i]%2==0){
				chan++;
			}
		}
		printf("%d %d\n",strlen(xau)-chan,chan);
	}
}
