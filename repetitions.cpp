#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
    cin>>str;
    int s=0, e=0;
    int str_length=str.length();
    int max=0;
    while(s<str_length && e<str_length){
        int sum;
        while(e<str_length){
            if(s==e){
                sum=1;
                e=e+1;
                if(sum>max){
                    max=sum;
                }
            }
            else if(str[s]==str[e]){
                e++;
                sum++;
                if(sum>max){
                    max=sum;
                }
            }
            else{
                s=e;
            }
        }
    }
    cout<<max<<endl;

}