#include <stdio.h>
int main()
{
	float salary,sales;
	printf("���۶");
	scanf("%f",&sales);
	if(sales<=10000)
	{	
	salary=1000;
	}
	else if(10000<sales&&sales<=20000)
	{
	   salary=1000+(sales-10000)*0.05;
	}
	else if(20000<sales&&sales<=50000)
	{
	   salary=1500+(sales-20000)*0.06;
	}
	else if(50000<sales&&sales<=100000)
	{
	   salary=3300+(sales-50000)*0.07;
	}
	else
	{
	   salary=6800+(sales-100000)*0.08;
	}
    printf("�����ǣ�%.2f\n���������\n",salary);
    return 0;
	   
	
}
