#include<stdio.h>
double calc_pow(double x,int n)
{
	if (n==0)
		return 1;
	else if(n==1)
		return x;
	else{
		return calc_pow(x,n-1)*x;
	}
}
int main(int argc, char const *argv[])
{
	printf("%.0f\n",calc_pow(2,10));
	char c;
	printf("输入任意字符结束...");
	scanf("%c",c);
	return 0;
}
