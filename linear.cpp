#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool linear_search(int a[],int n,int key){
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
if(a[i]==key) flag=true;

    }
    return flag;

}
int main() {
    int a[]={1,2,34,5,6,7,8,9};
int n=sizeof(a)/sizeof(a[1]);
bool result=linear_search(a,n,23);
if(result==true)
cout<<"it is found";

    return 0;
}