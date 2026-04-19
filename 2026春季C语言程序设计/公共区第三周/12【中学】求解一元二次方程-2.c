#include<stdio.h>
int main(){
	float a,b,c,a2,x1,x2; double d;
	scanf("%f %f %f",&a,&b,&c);
	if(a==0&&b==0) {printf("Input error!\n");
	}
	else if(a==0&&b!=0){
		if(c==0) {
		printf("x=0.000000\n");
		}	else
	printf("x=%f\n",-c/b);
}
else{
	d=b*b-4*a*c;
	a2=2*a;
	x1=-b/a2;
	if(d>=0) {
	x2=sqrt(d)/a2;
	if(d==0){
		if(c==0){
			printf("x1=x2=0.000000\n");
		}else
	printf("x1=x2=%f\n",x1);
	}else {
	printf("x1=%f\nx2=%f\n",x1+x2,x1-x2);}
}else{x2=sqrt(-d)/a2;
	if(b==0){
	printf("x1=%fi\nx2=-%fi\n",x2,x2);
}	else
	printf("x1=%f+%fi\nx2=%f-%fi\n",x1,x2,x1,x2);
	}
}}
