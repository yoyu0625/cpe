#include <iostream>
#include <algorithm>
using namespace std;

int N,M;
bool cmp(int x,int y){
    if((x%M)!=(y%M)){
    	return (x%M)<(y%M);
    	}
    else if((x%2)*(y%2)){
    	return x>y;}
    else if((x%2==0)&&(y%2==0)){
     return x<y;}
    else{
        return x%2;
    }
}

int main(){
    while(cin>>N>>M){
        if(N==0&&M==0){
            cout<<"0 0"<<endl;
            break;
        }
        cout<<N<<" "<<M<<endl;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        sort(a,a+N,cmp);
        for(int i=0;i<N;i++){
            cout<<a[i]<<endl;
        }
    }
}
