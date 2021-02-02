#include <iostream>
using namespace std;
int main()
{
int d1,v1,d2,v2,p,i,s=0,t;
cin>>d1>>v1>>d2>>v2>>p;
t=p;
i=0;
while(p>0)
{
    p=t;
    if(i>=d1)
    s+=v1;
    if(i>=d2)
    s+=v2;
   p=p-s;
 
   ++i;            
}
cout<<i-1<<"\n";
return 0;
}