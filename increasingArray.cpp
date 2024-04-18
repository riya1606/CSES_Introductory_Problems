#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int> v;
    long long int count=0;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        v.push_back(x);
        }
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                long long int diff=v[i]-v[i+1];
                v[i+1]+=diff;
                count+=diff;
            }
        }
        cout<<count<<endl;
   }
 
