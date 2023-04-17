#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
bool green {true};
bool red {false};
bool yellow {false};

if(!green)
{
cout<<"green light is ON"<<endl;
}
if(red)
{cout<<"red light is ON -- STOP"<<endl;
}

if(!yellow)
{cout<<"yellow is blinking get ready"<<endl;
for(int i=5;i>0;i--)
{
sleep(1);
cout<<i<<endl;
}
cout<<"GO"<<endl;
}
return 0;
}
