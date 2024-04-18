#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> even_vector;
    vector<int> odd_vector;
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0){
                even_vector.push_back(i);
            }
            else{
                odd_vector.push_back(i);
            }
        }
        int even_length=even_vector.size();
        int odd_length=odd_vector.size();
        for(int i=0;i<even_length;i++){
            cout<<even_vector[i]<<" ";
        }
        for(int i=0;i<odd_length;i++){
            cout<<odd_vector[i]<<" ";
        }
    }
}