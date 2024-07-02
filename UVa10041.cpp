#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;
    int d[500]={0}; //儲存最後結果的陣列
    for(int i=0;i<test;i++){
        int r;
        cin>>r;  //r=數據長度
        int s[30000];   //儲存每組數據的陣列 
        for(int j=0;j<r;j++){  //第一個數字存在s[0]直到讀取到r個數字
            cin>>s[j];  
        }
        sort(s,s+r);
        int mid;
        mid=s[(int)r/2];
        for(int j=0;j<r;j++){
            d[i]+=abs(s[j]-mid);   //d[i]總距離和
        }
    }
    for(int i=0;i<test;i++){
        cout<<d[i]<<endl;
    }
    return 0;
}
