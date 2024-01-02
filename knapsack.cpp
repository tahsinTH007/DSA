#include<bits/stdc++.h>
using namespace std;

int main(){
   float item, maximum;
   cout<<"How many Item do you want:"<<endl;
   cin>>item;

   float profit[item];
   float weight[item];

   cout<<"Enter Profit and Weight"<<endl;
   for(int i=0; i<item; i++){
    cin>>profit[i]>>weight[i];
   }

   cout<<"Enter Capacity:"<<endl;
   float capacity;
   cin>>capacity;

   float row = item+1;
   float culumn = capacity+1;

   float V[row][culumn];

   for(int i = 0; i<row; i++){
    for(int j = 0; j<culumn; j++){
        if(i==0 || j==0){
            V[i][j]=0;
        }
        else if(weight[i-1]>j){
            V[i][j] = V[i-1][j];
        }
        else{
            V[i][j] = max(profit[i-1]+V[i-1][j-weight[i-1]],V[i-1][j]);
        }
    }
   }
  cout<<V[item][capacity]<<endl;
}

