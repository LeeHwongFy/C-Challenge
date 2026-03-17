# include <bits/stdc++.h>

using namespace std;

int main() {
    // 1 số được gọi là số đầy đủ nếu có tất cả các số từ 0-9
    // 0<=n<=1e18, kiểm tra xem n có phải số đầy đủ không
    long long n;cin>>n;
    set<int> chuso;
    int s=0;
    while(n){
        if(chuso.find(n%10)==chuso.end()){
            chuso.insert(n%10);
            s+=n%10;
            n/10;

        }
        else{
            n/=10;
        }
    }
    if(s==45) cout<<"YES";
    else cout<< "NO";
    
    
}