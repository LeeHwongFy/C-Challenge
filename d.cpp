#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second) return a.second>b.second;
    else return a.first<b.first;

}
// sap xep mang theo quy tac: so nao xuat hien nhieu nhat thi in ra truoc
int main(){
    map<int,int> mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    vector<pair<int,int>> vec;
    for(auto it : mp){
        vec.push_back(it);
    }
    sort(vec.begin(),vec.end(),cmp);
    for(auto it: vec){
        for(int i=0;i<it.second;i++){
            cout<<it.first<<endl;
        }
    }
    

}