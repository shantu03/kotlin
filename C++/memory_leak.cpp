#include<iostream>
int main()
{
int *ptr = new int {77};
int k {23};
//memory leaked 
ptr=&k;		//now new int {77} memory going to waste becaoue no one can access this memory location (nor os nor program)

return 0;
}
