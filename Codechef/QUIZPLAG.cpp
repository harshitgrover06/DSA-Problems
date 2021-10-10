#include<bits/stdc++.h>
using namespace std;

const ll inf = 1e9 + 7;

ll mult(ll a, ll b, ll p) {return ((a % p) * (b % p)) % p;}
ll add(ll a, ll b, ll p) {return (a % p + b % p) % p;}
ll fpow(ll n, ll k, ll p) {
	ll r = 1;
	for (; k; k >>= 1) {
		if (k & 1) r = r * n % p;
		n = n * n % p;
	}
	return r;
}
ll gcd(ll a, ll b) {if (a == 0) return b; return gcd(b % a, a);}
ll max(ll a, ll b) {if (a > b) return a; else return b;}
ll min(ll a, ll b) {if (a < b) return a; else return b;}
void solve(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr[k];
		loop(i,0,k-1){
			cin>>arr[i];
		}
		int max = 0;
		loop(i,0,k-1){
			if(max<= arr[i]){
				max = arr[i];
			}
		}
		int freq[max+1]={0};
		loop(i,0,k-1){
			freq[arr[i]]++;//Counting frequency
		}
		int ans[k]={0};
		int j=0;
		loop(i,0,max){
			if(freq[i]>1 and !(i>=n+1 and i<= n+m)){
				ans[j] = i;
				j++;
			}
		}
		cout<<j<<" ";
		loop(i,0,j-1){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";

	}


}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    fast;
    solve();


}
