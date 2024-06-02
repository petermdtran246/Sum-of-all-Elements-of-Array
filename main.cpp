#include <iostream>
using namespace std;

void Sum()
{
    int A[]={2,4,11,8,10,15,13}, n=7;
    int sum=0;
    for(auto x: A)
    {
        int i = 0;
        sum += x;
    }
    cout << sum;
}
int main()
{
    Sum();
    return 0;
}