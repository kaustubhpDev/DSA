#include <iostream>
#include <limits.h>

using namespace std;

int countDigits (int x)
{
    int result= 0;
    while( x>0 )
    {
        x=x/10;
        result++;
    }
    return result;
}
int main()
{
    int number = 1234;
    cout<<countDigits(number);
}