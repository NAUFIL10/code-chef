#include<iostream>
using namespace std;
void factor(int n);
int main()
{
    int n,a=0;
    cin>>n;
    cout<<"\n"<<a;
    factor(n);
}
void factor(int n)
{
  int i,a=0;
  for(i=1;i<=n;i++)
   {
      if(n%i==0){
      cout<<" "<<i;
      a++;
      }
    }
}