//GCD

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x,int y){
    while((x%=y)&&(y%=x));
    return x+y;
}


int main(){
    int N,G;
    while(cin>>N&&N){
        int G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                G+=gcd(i,j);
            }
        }
        cout<<G<<endl;
    }
    return 0;
}