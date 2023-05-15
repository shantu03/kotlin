//  https://www.codechef.com/problems/EZSPEAK
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int k;
        cin>>k;
        char arr[k];
        for(int i =0;i<k;i++)
        {
            cin>>arr[i];
        }
        int count=0,p=0;
        for(int i =0;i<k;i++)
        {
            if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
            {
                count=0;
            }
            else
            {
                count++;
            }
            if(count>=4)
            {
                p=555;
            
            }
        }
        if(p==555)
        {
            cout<<"NO"<<endl;
            
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        n--;
    }
}







//first try
/*#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int T;
	while(T)
	{
	    int n;
	    cin>>n;
	    char *ptr =(char*)calloc(n,sizeof(char));
	    for(size_t i {0};i<n;i++)
	    {
	        cin>>*(ptr+i);
	    }
	    int count=0;
        int p=0;
	    for(size_t i {0};i<n;i++)
	    {
	        if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
	        {
	            count--;
	        }
            else
            {
                count++;
            }
            if(count>=4)
            {
                p=1;
                break;
            }
	    }
	    if(p==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
	    T--;
	}
	return 0;
}
*/