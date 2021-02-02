#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k,cnt=0,x,sum,i,j;
    
    cin>>n>>m>>k;
    while(n--)
    {
        vector<int>a;
        for(j=0;j<=k;j++){
        cin>>x; 
        a.push_back(x);
        }
     
       sum=accumulate(a.begin(),a.end(),0);
       sum=sum-a[k];
    
     if(sum>=m && a[k]<=10){
         cnt=cnt+1;
     }
     
    }
    cout<<cnt<<endl;
	return 0;
}