#include <stdio.h>
int main()
{
	int a,leap;
	printf("����һ��������");
	scanf("%d",&a);
	if(a%2!=0)
	   leap=1;
	else
	   leap=0;
	if(leap==1)
	printf("%d������\n���������\n",a);
	else 
	printf("%d��ż��\n���������\n",a);
	return 0;
		
}
