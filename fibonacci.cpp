//recurtion
#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
     else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int n;
    cout<<"Enter the N'th number:";
    cin>>n;
    for(int i = 0; i <= n; i++){
      cout << "The " << i << "-th Fibonacci number is: " << fibonacci(i)<<endl;
    }
}
