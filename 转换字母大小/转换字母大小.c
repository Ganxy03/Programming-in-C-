#include <stdio.h>
int main()
{
	int c1,c2;
	printf("输入一个字符：");
	c1=getchar();
	if(c1>='a'&&c1<='z')
	   c2=c1-32;
	else if(c1>='A'&&c1<='Z')
	   c2=c1+32;
	printf("转换的字母为：%c",c2);
	return 0;
	
}
