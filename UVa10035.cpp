#include <iostream>
using namespace std;

int main(){
    int a,b,ans,carry;
    while(cin>>a>>b){
        if(a==0&&b==0){
            break;
        }
        ans=0;
        carry=0;
        while(a>=1||b>=1){
            if(a%10+b%10+carry>=10){
                ans=ans+1;
                carry=1;
            }
            else{
                carry=0;
            }
            a=a/10;
            b=b/10;
        }
        if(ans==0){
            cout<<"No carry operation."<<endl;
        }
        else if(ans==1){
            cout<<ans<<" carry operation."<<endl;
        }
        else{
            cout<<ans<<" carry operations."<<endl;
        }
    }

    return 0;
}