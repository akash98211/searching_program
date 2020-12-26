#include <bits/stdc++.h>
  using namespace std;
//functon to calculate no of book left on self from left side  
  int book(long long int arr[],long long int n,long long int read)
  {
      int count=0;
      for (int i = 0; i < n; i++) {
          if(read>=arr[i]) count++;
          else break;
      }
      return count;
  }
  
  //function to calculate no of book left on self from right side
    int book1(long long int arr[],int n, long long int read)
  {
      int count=0;
      for (int i = n-1; i >=0 ; i--) {
          if(read>=arr[i]) count++;
          else break;
      }
      return count;
  }
  int main()
  { //taking input n and read(k)no of book read
    long long int n,read;
    cin>>n>>read;
    
    //declaring size of array and taking input of array
    long long int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    
    //if n is zero it mean no book no desk
    if (n==0) cout<<"0\n";
    
    //linear searching from leftside and store on leftsearch variable
    int leftsearch=book(arr,n,read);
    
    //linear searching from right side and store on rightsearch variable
    int rightsearch=book1(arr,n,read);
    
    //storing minimum number from two linear search
    int bookunread=0;
     bookunread=leftsearch + rightsearch;
    
    //printing reasult 
    cout<<(n-bookunread)<<endl;
    
    
    return 0;
  }