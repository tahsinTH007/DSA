#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(char str[] , int start, int last)
{
    if(start < last+1)
    {
        start++;
        last--;
        checkPalindrome(str, start, last);

    if(start == last)
    {
        return 1;
    }
    else if(str[start] != str[last])
    {
        return 0;
    }
  }
    return 1;
}

int main()
{
    char str[50];

    cout<<"Enter your word:"<<endl;
    cin>> str;
    int result;
    int length = strlen(str);

    if(length == 0)
    {
        result = 1;
    }
    else
    {
        result = checkPalindrome(str,0,length-1);
    }

    if(result == 1)
    {
        cout<<str<<" is Palindrome."<<endl;
    }
    else
    {
        cout<<str<<" is not Palindrome."<<endl;
    }
}
