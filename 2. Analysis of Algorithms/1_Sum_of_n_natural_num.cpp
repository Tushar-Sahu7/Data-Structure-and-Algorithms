#include<iostream>
// using namespace std;

int fun1(int n);
int fun2(int n);
int fun3(int n);

int main()
{
    std::cout<<fun1(5)<<std::endl<<fun2(5)<<std::endl<<fun3(5)<<std::endl;
    return 0;
}

int fun1(int n){
    return n*(n+1)/2;
}

int fun2(int n){
    int sum = 0;
    for (int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int fun3(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum++;
        }
    }
    return sum;
}