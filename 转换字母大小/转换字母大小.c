#include <stdio.h>
int main()
{
	int c1,c2;
	printf("����һ���ַ���");
	c1=getchar();
	if(c1>='a'&&c1<='z')
	   c2=c1-32;
	else if(c1>='A'&&c1<='Z')
	   c2=c1+32;
	printf("ת������ĸΪ��%c",c2);
	return 0;
	
}
