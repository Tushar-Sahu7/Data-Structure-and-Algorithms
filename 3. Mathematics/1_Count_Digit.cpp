#include<iostream>
using namespace std;

int countDigit(int x);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    cout<<countDigit(n);
    return 0;
}

//Time complexity ⊖(n)
    int countDigit(int x){
    int res=0;
    while(x>0){
        x/=10;
        res++;
    }
    return res;
}