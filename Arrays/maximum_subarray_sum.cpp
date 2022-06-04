#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxi=INT_MIN,current=0;
    for(int i=0;i<n;i++){
        current+=arr[i];
        if(current>maxi)
            maxi=current;
        if(current<0)
            current=0;
    }
    return maxi;
}
