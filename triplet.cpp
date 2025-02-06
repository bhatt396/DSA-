#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int primeFactor(long long limit){
    int max=0;
    for(int i=1;i<=sqrt(limi
    t);i++){
if(isPrime(i)&&isPrime(i)>max){
    max=isPrime(i);
}
    }
    return max;
}
int main()
{
long long  n;
cin>>n;
long long result=primeFactor(n);
cout<<result;


    return 0;
}
