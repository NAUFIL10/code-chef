#include<iostream>
using namespace std;
int main()
{
    int i,n,k;
    bool flag=0;
    cin>>n;
     cin>>k;
    int array[n];
     for(i=0;i<=n-1;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<=n-1;i++)
    {
      if(array[i]==k)
      {
        flag=1;
      }
      else 
      {
        flag=0;
      }
    } 
    if(flag==0)
    {
      cout<<-1;
    }
    if(flag==1)
    {
      cout<<1;
    }
}