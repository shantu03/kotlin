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
*/


#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
int A,K;
cin>>A>>K;
int arr[A];
for(size_t i {0};i<A;i++)
{
cin>>arr[i];
}
int t=A-(K%A);

for(size_t i{0};i<t-1;i++)
{
cout<<arr[t+i]<<" ";
}
for(size_t i{0};i<=A-t;i++)
{
cout<<arr[i]<<" ";
}

cout<<endl;
return 0;
}

int t;
    cin >> t;
    while (t != 0)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int index = n - (k % n);
        for (int i = index; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i < index; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        t = -1;
    }
