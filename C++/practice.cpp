/*#include <stdio.h>
#include<iostream>
void update(int *a,int *b) {
int k=*a;
    *a+=*b;
    *b-=k;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}


//MONK TEST NO.1 -- ARRAY and STRING
#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

while(num!=0)
{
int A,K;
cin>>A>>K;
int arr[A];
for(size_t i {0};i<A;i++)
{
cin>>arr[i];
}
int t=A-(K%A);

for(int i{t};i<A;i++)
{
cout<<arr[i]<<" ";
}
for(size_t i{0};i<t;i++)
{
cout<<arr[i]<<" ";
}

cout<<endl;

num--;
}
return 0;
}


*/

//codechef good turn

#include <iostream>
using namespace std;
struct hey
{
  
    int t,k;
    
    void input()
    {
        cin>>t>>k;
 
    }

    void check()
    {
        if((t<1&&t>6)&&(k<1&&k>6))
        {
            cout<<"Crossed Limit"<<endl;
            return;
        }


        if(t+k>6)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
};
int main() {
    int t;
    cin>> t;
struct hey arr[t];
for(int i=0 ;i<t;i++)
{
    arr[i].input();

}

for(int i=0;i<t;i++)
{
    arr[i].check();
}
    
	return 0;
}