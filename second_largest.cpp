#include<iostream>
#include <algorithm>
using  namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int array[3]={a,b,c};
    sort(array,array+3);
    cout<<array[1];

}