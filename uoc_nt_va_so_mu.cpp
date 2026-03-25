# include<bits/stdc++.h>
using namespace std;
int main(){
    // nhập n và in ra ước số của nó và số mũ tương ứng
    long long n;cin>>n;
    map<long long,long long> mp;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            mp[i]++;
            n/=i;
        }
    }
    if(n>1) mp[n]++;
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
}
