#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main(){
    int n;   //讀取的行數
    cin>>n;
    map<string,int>mp;  
    string s;
    getline(cin,s);    //清除 cin 緩衝區中的換行符
    while(n--){
        getline(cin,s);  //讀取每行輸入
        stringstream ss(s);  //轉為字串流
        ss>>s;               //提取第一個單詞
        mp[s]++;            //計數第一個單詞
    }
    for(auto i:mp){   //遍歷 map 並輸出每個單詞及其計數
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}

