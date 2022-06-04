#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{ vector<vector<int>>ans(n);
  for(int i=0;i<n;i++){
      ans[i]=vector<int>(i+1,1);
      for(int j=1;j<i;j++){
          ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
      }
  }
 return ans;
}
