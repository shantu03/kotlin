
/*
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void check(char *withcommos,int value)
{
	char temp[15];
	sprintf(temp,"%d",value);

	int t,c,len;
	len=strlen(temp);
	t=c=0;

	while(temp[t]!='\0')
	{
		if(len%3)
		{
			*(withcommos+c)=*(temp+t);
		}
		else
		{	if(t!=0)
			{
			*(withcommos+c)=',';
			c++;
			}
			*(withcommos+c)=*(temp+t);
		}
		c++;
		t++;
		len--;


	}
	*(withcommos+c)='\0';
}

int main()
{
	int values[10] = {
		123, 1899, 48266, 123456, 9876543,
		10100100, 5, 500000, 99000111, 83
	};
	char withcomma[20];

	for(int i=0;i<10;i++)
{
check(withcomma,values[i]);
printf("%10d\t\t%15s\n",values[i],withcomma);
//printf("%u\n",&withcomma[1]);
}

	return(0);
}
*/

#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void check(char *withcommos,int value)
{
	char temp[15];
	sprintf(temp,"%d",value);

	int t,c,len;
	len=strlen(temp);
	t=c=0;

	while(temp[t]!='\0')
	{
		if(len%3)
		{
			*(withcommos+c)=*(temp+t);
		}
		else
		{	if((t!=0))
			{
			*(withcommos+c)=',';
			c++;
			}
			*(withcommos+c)=*(temp+t);
		}
		c++;
		t++;
		len--;


	}
	*(withcommos+c)='\0';
}

int main()
{
	int values[10] = {
		123, 1899, 48266, 123456, 9876543,
		10100100, 5, 500000, 99000111, 83
	};
	char withcomma[20];

	for(int i=0;i<10;i++)
{
check(withcomma,values[i]);
printf("%10d\t\t%15s\n",values[i],withcomma);
//printf("%u\n",&withcomma[1]);
}

	return(0);
}
