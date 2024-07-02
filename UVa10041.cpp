#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;
    int d[500]={0};
    for(int i=0;i<test;i++){
        int r;
        cin>>r;  #長度
        int s[30000];
        for(int j=0;j<r;j++){
            cin>>s[j];
        }
        sort(s,s+r);
        int mid;
        mid=s[(int)r/2];
        for(int j=0;j<r;j++){
            d[i]+=abs(s[j]-mid);
        }
    }
    for(int i=0;i<test;i++){
        cout<<d[i]<<endl;
    }
    return 0;
}