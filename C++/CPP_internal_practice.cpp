// C++ program to illustrate the use
// of static function
#include "bits/stdc++.h"
using namespace std;

class A {

public:

	static void f()
	{
		cout << "GeeksforGeeks!";
	}
};

// Driver Code
int main()
{
	A::f();
}
