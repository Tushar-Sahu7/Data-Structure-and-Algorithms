#include<iostream>
using namespace std;

int lcm(int a, int b);
int gcd2(int a, int b);
int lcm2(int a, int b);

int main()
{
    int a, b;
    cout<<"Enter any interger"<<endl;
    cin>>a>>b;
    cout<<lcm(a, b)<<" "<<lcm2(a, b)<<endl;
    return 0;
}

//Time complexity bigO(a*b - max(a,b))
int lcm(int a, int b){
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0)
            return res;
        res++;
    }
    return res;
}
//Efficient Algorithm
//Time complexity bigO(log(min(a, b))
int gcd2(int a, int b){
    if(b==0)
        return a;
    else
        return gcd2(b, a%b);
}

int lcm2(int a, int b){
    return (a*b)/gcd2(b, a%b);
}