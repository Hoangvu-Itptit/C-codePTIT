/***************

Cho một số nguyên dương n không quá 9 chữ số.

Hãy thực hiện đổi vị trí của chữ số đầu tiên và chữ số cuối cùng.
Lưu ý trong trường hợp chữ số cuối cùng là 0 thì khi đổi chỗ sẽ được loại bỏ (ví dụ 9800 -> 809)

Input

Chỉ có một số nguyên dương N không quá 9 chữ số. 

Output

Ghi ra kết quả trên một dòng

Ví dụ

Input

1234

Output

4231

***************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char xau[100];
	scanf("%s",xau);
	int i;
	for(i=0;i<strlen(xau);i++){
		if(i==0){
			if(xau[strlen(xau)-1]!='0'){
				printf("%c",xau[strlen(xau)-1]);
			}
		}else if(i==strlen(xau)-1){
			printf("%c",xau[0]);
		}else {
			printf("%c",xau[i]);
		}
	}
}
