#include<iostream>
#include<algorithm>
using namespace std;

// We are using the concept of CMP function which is passed inside the inbuilt sort function. This cmp defines the manner in which array will be sorted.

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

bool cmpIncrease(int a, int b){
    if(a<b) return true;
    return false;
}

bool cmpDecrease(int a, int b){
    if(a>b) return true;
    return false;
}

int main(){
    int a[] = {1,3,2,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    int half = n/2;

    print(a,n);
    sort(a,a+half);
    sort(a+half, a+n, cmpDecrease);

    print(a,n);

    return 0;
}
