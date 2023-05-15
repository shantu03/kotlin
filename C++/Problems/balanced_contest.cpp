//https://www.codechef.com/problems/PERFCONT
#include <iostream>
using namespace std;
struct cases 
{
    int n,p,count=1;
    
    int *arr=(int *)calloc(p,sizeof(int));
    void setdata()
    {
        cin>>n>>p;
        for(size_t i{0};i<p;i++)
        {
            cin>>*(arr+i);
        }
    }
    void showdata()
    {
        for(size_t i{0};i<p;i++)
        {
            cout<<*(arr+i);
        }
    }
};
int main() {
	// your code goes here
	int cases;
	cin>>cases;
	while(cases)
	{
        struct cases k;
        k.setdata();
        k.showdata();
	    cases--;
	    
	}
	return 0;
}
