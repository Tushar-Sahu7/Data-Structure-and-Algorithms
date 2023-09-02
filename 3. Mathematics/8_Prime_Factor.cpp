#include<iostream>
using namespace std;

bool isPrime2(int n);
void primeFactor(int n);
void primeFactor1(int n);
void primeFactor2(int n);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    primeFactor(n);
    cout<<endl;
    primeFactor1(n);
    cout<<endl;
    primeFactor2(n);
    return 0;
}

bool isPrime2(int n){
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5; i*i<=n; i+=6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;
}

//Naive Solution
//Time complexity bigO(n*log n)
void primeFactor(int n){
    for(int i=2; i<n; i++){
        if(isPrime2(i)){
            int x = i;
            while(n%x==0){
                cout<<i<<" ";
                x*=i;
            }
        }
    }
}
//Efficient Solution
//Time complexity bigO(sqrt(n))
void primeFactor1(int n){
    if(n<=1)
        return ;
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
}

//Further Optimization
//Time complexity bigO(sqrt(n))
void primeFactor2(int n){
    if(n<=1)
        return ;
    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n/=3;
    }
    for(int i=5; i*i<=n; i+=6){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        while(n%(i+2)==0){
            cout<<i<<" ";
            n/=(i+2);
        }
    }
    if(n>3)
        cout<<n<<endl;
}