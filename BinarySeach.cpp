//binary search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target)
{
    if(left <= right)
    {
       int mid = left + (right-left)/2;

    if(arr[mid] == target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        return binarySearch(arr,left,mid-1,target);
    }
    else
    {
        return binarySearch(arr,mid+1,right,target);
    }
  }
  return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of Array(at least 10):";
    cin>>n;

    if(n>10)
    {
        cout<<"\nArray size should be at least 10."<<endl;
        return 1;
    }

    int arr[n];
    cout<<"Enter "<<n<<" sorted Integer: "<<endl;

    for(int i= 0; i<n; i++)
    {
        cin>>arr[i];
    }

   int target;
   cout<<"Enter the element to search:"<<endl;
   cin>>target;

   int result = binarySearch(arr,0,n-1,target);

   if(result != -1)
   {
       cout<<"Element "<<target<<" is found at index:"<<result<<endl;
   }
   else
   {
       cout<<"Element "<<target<<" is not found in the array."<<endl;
   }


}
