//找兩數之間有幾個平方數
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,sq;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }
        int count=0;
        for(int i=a;i<=b;i++){
            sq=sqrt(i);  //計算i的平方根
            if(sq*sq==i){  //如果平方根的平方等於i，則i是平方數
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
