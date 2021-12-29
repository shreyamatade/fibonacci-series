#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //0,1,1,2,3,5,8
   int n;
   cin>>n;

   int first=0;
   int second=1;
   int third;

   for(int i=0;i<n;i++)
   {
       if(i==0)
       {
           cout<<first<<" "<<second<<" ";
       }
       else
       {
           third=first+second;
           first=second;
           second=third;
           cout<<third<<" ";
       }
   }
}
