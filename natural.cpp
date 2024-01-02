#include<iostream>
using namespace std;

int sumOfNaturalNumber(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n+sumOfNaturalNumber(n-1);
    }
}

int main()
{
    int n = 4;

    cout<<sumOfNaturalNumber(n);
}
