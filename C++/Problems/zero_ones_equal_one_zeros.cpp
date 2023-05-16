//https://www.codechef.com/problems/ZOOZ

//Our program is good but not the best answer checkout below for best answers
//what we solve is optimal solution ,but space and time complexity is more
#include<iostream>
using namespace std;
int main()
{
int cases;
cin>>cases;
while(cases)
{
int n;
cin>>n;
if(n<3)
{
cout<<"invalid input"<<endl;
break;
}
int arr[n];
	if(n%2)
	{
	arr[0]=0;
	arr[1]=1;
	arr[2]=0;
	}
	else
	{
	arr[0]=1;
	arr[1]=0;
	arr[2]=0;
	}

for(int i =2;i<n-1;i++)
{
	if(arr[i]==0)
	{
	arr[i+1]=1;
	}
	else
	{
	arr[i+1]=0;
	}
}
for(int i=0;i<n;i++)
{
cout<<arr[i];
}
cases--;
cout<<endl;
}
return 0;
}


//best solution
#include<iostream>
using namespace std;
int main()
{
int cases;
cin>>cases;
while(cases)
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
if(i==0||i==n-1)
{
cout<<"0";
}
else
cout<<"1";
}
cout<<endl;
cases --;

}
return 0;
}
