#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cout<<"Enter the number and its power"<<endl;
    cin>>x>>n;
    cout<<power(x, n);
    return 0;
}

int power(int x, int n){
    int res=1;
    while(n>0){
        if(n%2!=0)
      //if(n&1)
            res*=x;
        x*=x;
        n/=2;
      //n=n>>1;
    }
    return res;
}