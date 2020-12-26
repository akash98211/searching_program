#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

//functon to calculate no of book left on self from left side  
  int find_differnce( lli  arr[], lli n,lli diff)
   {
    int count = 0;
    sort(arr, arr+n);  // Sort array elements
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == diff)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > diff)
              l++;
         else // arr[r] - arr[l] < sum
              r++;
    }   
    return count;
}
  
  
 
  int main()
  {
    //taking input n and diff(k)fiffernce we have to find
   lli n,diff;
    cin>>n>>diff;
    
    //declaring size of array and taking input of array
    lli arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    
    //function to print differnce pair 
    cout<<find_differnce(arr,n,diff)<<endl;
    
    return 0;
  }