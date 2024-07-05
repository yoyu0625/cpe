#include <iostream>
#include <iomanip>
using namespace std;

void cal(long long x){
    if(x/10000000!=0){
        cal(x/10000000);
        cout<<" kuti";
        x=x%10000000;
    }
    if(x/100000!=0){
        cal(x/100000);
        cout<<" lakh";
        x=x%100000;
    }
    if(x/1000!=0){
        cal(x/1000);
        cout<<" hajar";
        x=x%1000;
    }
    if(x/100!=0){
        cal(x/100);
        cout<<" shata";
        x=x%100;
    }
    if(x!=0){
        cout<<" "<<x;
    }
}

int main(){
    long long num,count=1;
    while(cin>>num){
        cout<<setw(4)<<count<<".";
        cal(num);
        if(num==0){
            cout<<" 0";
        }
        count=count+1;
        cout<<endl;
    }
}