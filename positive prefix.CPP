#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
int n,k,a[1000],pd=0,s=0,r=0,p=0,i;
cin>>n>>k;
for(i=1;i<=n;i++)
{
(i%2==0?a[i]=i:a[i]=i*(-1));}
for(i=1;i<=n;i++)
{
 pd+=a[i];
if(pd>0)
s++;
}
if(k==n/2)
{
 for(i=1;i<=n;i++)
  {
  cout<<a[i]<<" "
  ;}
               
}
else if(k<n/2)
{
 r=s-k; 
for(i=n;i>=1;i--)
{
if(a[i]>0)
{a[i]*=-1;
    p++;}
   if(p==r)
   break;
              }
for(i=1;i<=n;i++)
{cout<<a[i]<<" ";}
}
else if(k>n/2)
{    r=k-s;
 for(i=n;i>=1;i--)
 {
    if(a[i]<0)
 {
    a[i]*=-1;
      p++;
     
 }
  if(p==r)
  break;
}
 for(i=1;i<=n;i++)
 {
  cout<<a[i]<<" ";}
}
cout<<"\n";
t--;
}return 0;
}