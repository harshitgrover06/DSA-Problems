#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n,w,wr;
        cin>>n>>w>>wr;
        map<ll int,ll int> mp;
        ll int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(wr>=w){
            cout<<"YES"<<endl;
        }
        else{
            
            w -=wr;
            for(ll int i=0;i<n;i++){
                if(mp[arr[i]]>=2){
                    ll int cnt = mp[arr[i]];
                    if(cnt%2==0){
                        w -=cnt*arr[i];
                    }
                    else{
                        w -=(cnt-1)*arr[i];
                    }
                    mp[arr[i]]=0;
                }
                    if(w<=0){
                        break;
                    }
                
            }
            if(w<=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        
    }
}
 int main(){
    cin.sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
 }