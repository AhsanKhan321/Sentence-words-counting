#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"Enter value of n = ";
    cin>>n;
    int u[10];
    u[0]=1;u[1]=1, u[2]=1;
   u[n]=u[n+1]-u[n-1];
    cout<<"Answer of eq. u(n+1)=u(n)+u(n-1) for the given value of n is = "<<u[n]<<endl;
    return 0;

}