//3n+1
#include <iostream>
using namespace std;

int cnt;
void f(int n){
    cnt++;
    if(n==1) return;
    if(n%2!=0) f(3*n+1);
    else f(n/2);
}


int main(){
    int a,b;
    while(cin>>a>>b){
        int ans=0;
        for(int i=min(a,b);i<=max(a,b);i++){
            cnt=0;
            f(i);
            ans=max(ans,cnt);
        }
    cout<<a<<" "<<b<<" "<<ans<<endl;
    }

}
