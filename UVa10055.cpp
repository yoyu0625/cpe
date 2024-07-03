//計算與敵人差距
#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        b=abs(a-b);
        cout<<b<<endl;
    }
    return 0;
}
