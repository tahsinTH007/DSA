//with for loop
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the N'th number:";
    cin>>n;

    int prev=0; int current=1;

   cout << "The " << 0 << "-th Fibonacci number is: " << prev <<endl;
   cout << "The " << 1 << "-th Fibonacci number is: " << current<<endl;

   for(int i = 2; i<=n; i++)
   {
       int next = prev+current;
       cout << "The " << i << "-th Fibonacci number is: " << next<<endl;
       prev = current;
       current = next;
   }

}
