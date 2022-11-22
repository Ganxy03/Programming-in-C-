#include <stdio.h>
#include <windows.h>
int run(int year);
int main()
{
	int year,month,day;
	printf("Äê£º");
	scanf("%d",&year);
	printf("ÔÂ£º");
	scanf("%d",&month);
	printf("Ìì£º");
	scanf("%d",&day);
	if(month<=0||month>12)
	{
		printf("Wrong!!!");
		return 0;
	}
	if(month==1||month==3||month==5||month==7||month==8||month==10)
	{
		if(day<=0||day>31)
		{
			printf("Wrong!!!");
			return 0;
		}
	
		if(day!=31)
		{
			day++;
		}
		else
		{
			month++;
			day=1;
		}
	}
	if(month==4||month==6||month==9||month==11)
	{
		if(day<=0||day>30)
		{
			printf("Wrong!!!");
			return 0;
		}
		if(day!=30)
		{
			day++;
		}
		else
		{
			month++;
			day=1;
		}
	}
	if(month==2)
	{
		if(run(year)==1)
		{
			if(day<=0||day>29)
			{
				printf("Wrong!!!");
				return 0;	
			}
			if(day!=29)
			{
				day++;
			}
			else
			{
				month++;
				day=1;
			}
		}
	}
	if(month==12)
	{
	if(day<=0||day>31)
			{
				printf("Wrong!!!");
				return 0;	
			}
			if(day!=31)
			{
				day++;
			}
			else
			{
				year++;
				month=1;
				day=1;
			}
	}
	printf("%d-%d-%d",year,month,day);
	system("pause");
	return 0;
}
int run(int year)
{
	int i;
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		i=1;
	}
	else
	{
		i=0;
	}
	return i;
}
