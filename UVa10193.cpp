#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x,int y){   //輾轉消除法
    while((x%=y)&&(y%=x));   
    return x+y;
}                           

int main(){
    int n;
    cin>>n;
    string S1,S2;
    for(int Case=1;Case<=n;Case++){
        int a=0,b=0;
        cin>>S1>>S2;
        for(int i=0;i<S1.size();i++){
            a*=2;
            a+=S1[i]-'0';
        }
        for(int i=0;i<S2.size();i++){
            b*=2;
            b+=S2[i]-'0';
        }
        cout<<"Pair #"<<Case;
        if(gcd(a,b)>1){
            cout<<": All you need is love!"<<endl;
        }
        else{
            cout<<": Love is not all you need!"<<endl;
        }
    }
    return 0;
}