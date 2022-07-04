/***************

Viết chương trình nhập 3 số thực a,b,c và in ra nghiệm của phương trình bậc hai a*x2 + b*x + c = 0.

Input

Chỉ có một dòng ghi ba số a,b,c, giá trị tuyệt đối không quá 1000. Không có trường hợp a = b = c = 0.  

Output

Kết quả ghi ra trên một dòng, nếu không có nghiệm in ra NO.

Ví dụ

Input

1 2 1

Output

-1.00

***************/

#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float denta=b*b-4*a*c;
	if(denta<0){
		printf("NO");
	}else if(denta==0){
		printf("%.2f",-b/(2*a));
	}else {
		printf("%.2f %.2f",(-b+sqrt(denta))/(2*a),(-b-sqrt(denta))/(2*a));
	}
}