#include<iostream>
using namespace std;

int fact1(int n);
int fact2(int n);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    cout<<fact1(n)<<" "<<fact2(n);
    return 0;
}

//time complexity ⊖(n)
//auxiliary space bigO(1)

int fact1(int n){
    int res=1;
    for(int i=2; i<=n; i++)
        res*=i;
    return res;
}

//time complexity ⊖(n)
//auxiliary space ⊖(n)

int fact2(int n){
    if(n==0)
        return 1;
    return n*fact2(n-1);
}