#include<iostream>
using namespace std;

long factional(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n*factional(n-1);

    }
}

int main()
{
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    cout<<factional(n);
}
