#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int k;
    cout<<"enter no. of character in name"<<endl;
    cin>>k;
    
    cout<<"enter name "<<endl;
    char p[k];
    for(int i=0;i<k;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<k;i++)
    {
        cout<<hex<<int(p[i])<<"-";
    }
}