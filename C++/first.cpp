#include<iostream>
using namespace std;
class person
{
    int t[5];
    public:
    void data()
    {
        for (size_t i = 0; i < 5; i++)
        {
            cin>>t[i];
        }
        
    }
    void show()
    {
                for (size_t i = 0; i < 5; i++)
        {
            cout<<t[i]<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    person p;
    int k;
    
    cin>>k;
    int c=k;
    while(k--)
    {
        p.data();
        
    }
    while(c--)
    {
        p.show();
    }
    return 0;
}
