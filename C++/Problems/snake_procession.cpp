#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
	// your code goes herennnnnnna
	int cases;
	cin>>cases;
while(cases)
{
int n,count=0;
cin>>n;
char *ptr=(char *)malloc(n);
for(int i=0;i<n;i++)
{
cin>>*(ptr+i);
if(*(ptr+i)=='H')
{
count++;
}
else if(*(ptr+i)=='T')
{
count--;
}
if(count<0||count>1)
{
count=100;
}
}
if(count>90)
{
cout<<"Invalid"<<endl;
}
else if(count==0)
{
cout<<"Valid"<<endl;
}
else
cout<<"Invalid"<<endl;
free(ptr);
cases--;

}
	return 0;
}

