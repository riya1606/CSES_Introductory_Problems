#include<iostream>
using namespace std;

// A lot of us will solve this problem using sorting and searching but there is a very neat mathematics trick that can be used here to solve this problem. We will using sum of numbers.
int main(){
    long long int n, sum=0;
    cin>>n;
    long long int z=n-1;
    while(z>0){
        long long int x;
        cin>>x;
        sum+=x;
        z--;
    }
    long long int overall_sum=(n*(n+1))/2;
    cout<<overall_sum-sum<<endl;
}