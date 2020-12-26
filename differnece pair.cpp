#include <bits/stdc++.h>
using namespace std;
int pairs(int k, vector<int> arr) {
    map<int,int> mp;
    int n = arr.size();
    int i;
    for(i=0;i<n;i++)
        mp[arr[i]-k]++;
    int ans = 0;
    for(i=0;i<n;i++)
        ans = ans + mp[arr[i]];
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin>>arr[i];
      cout<<pairs(k,arr);
}


/*
1. A[i] - A[j] = k which means A[i] - k = A[j]
2. For each i = 1 to N store a[i]-k in a map and check if A[j] exists.


6 1
3 4 1 5 7 8
o/p
3
7 2
1 1 9 5 8 10 8
o/p
2*/