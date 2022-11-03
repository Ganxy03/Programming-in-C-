#include <stdio.h>
int main()
{
	int a,leap;
	printf("输入一个整数：");
	scanf("%d",&a);
	if(a%2!=0)
	   leap=1;
	else
	   leap=0;
	if(leap==1)
	printf("%d是奇数\n运算结束！\n",a);
	else 
	printf("%d是偶数\n运算结束！\n",a);
	return 0;
		
}
