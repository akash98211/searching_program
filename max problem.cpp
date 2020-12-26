#include <bits/stdc++.h>
using namespace std;

int BS(int low,int high,int k )
{   int ans,sum,mid;
    while(high>=low)
    {
       mid=low+(high-low)/2;
       sum=(mid*(mid+1))/2;
       sum=sum*5;
       if(sum<=k)
       {  ans=mid;
          low=mid+1;
       }
      
       else
       high=mid-1;
    } 
   return ans;
}
  
  int main()
  {
      int n,k;
      cin>>n>>k;
      cout<<BS(1,n,240-k);
      cout<<endl;
    
    return 0;
  }
