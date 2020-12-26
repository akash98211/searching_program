#include <bits/stdc++.h>
  using namespace std;

int binary_search(int arr[],int low,int high,int key){
    int mid=low+(high-low)/2;
    while(high>low)
    {
     if(arr[mid]==key) return mid;
    
     else if(key>arr[mid]) return binary_search(arr,mid+1,high,key);
     
     else
     return binary_search(arr,low,mid-1,key);
    }
    return -1;
    
    
    
    if(arr[mid]==key) return mid;
    }
    
    
int pivot(int arr[],int low,int high)
{   
    if(low>high) return -1;
    int mid=low+(high-low)/2;
    
    if(arr[mid]>arr[mid+1]) return mid+1;
    
    else if(arr[mid-1]>arr[mid]) return mid;
    
    else if(arr[mid]>arr[0]) return pivot(arr,mid+1,high);
    
    else if(arr[mid]<arr[0]) return pivot(arr,low,mid-1);
    
   
}
  int main()
  {int t ;cin>>t;
  while(t--)
  {
      int n;cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++) {
          /* code */cin>>arr[i];
      } 
      int key;cin>>key;
      int pi=pivot(arr,0,n-1);
      if(pi==-1) return binary_search(arr,0,n-1,key);
      
      if(arr[pi]==key) cout<<pi<<endl;
      
      else if(arr[pi]!=key)
      {
      binary_search(arr,0,pi-1,key);
      binary_search(arr,pi,n-1,key);
          
      }
  }
    
    
    return 0;
  }