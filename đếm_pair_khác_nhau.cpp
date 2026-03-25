# include <bits/stdc++.h>

using namespace std;

int main() {
    // đếm xem có bao nhiêu pair khác nhau, {3,4} và {4,3} được tính là 1 
    int n;cin>>n;
    set<pair<int,int>> sec;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        if(! sec.count({x,y}) && ! sec.count({y,x})){
            sec.insert({x,y});

        }
    }
    cout<<sec.size()<<endl;
    for(auto it: sec){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}
