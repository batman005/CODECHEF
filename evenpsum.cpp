#include <iostream>
using namespace std;
int main()
{
    int t;
cin>>t;
while(t>0)
{
    long int a,b,q1=0,q2=0,e1=0,e2=0,m=0;
cin>>a>>b;
if(a%2==0)
{
  q1=a/2;
  e1=a/2;
}
else
{
  q1=(a/2)+1;
  e1=a/2;
}
if(b%2==0)
{
  q2=b/2;
  e2=b/2;
}
else
{
 q2=(b/2)+1;
 e2=b/2;
}
m=q1*q2+e1*e2;
cout<<m<<"\n";
t--;
}
 return 0;
}