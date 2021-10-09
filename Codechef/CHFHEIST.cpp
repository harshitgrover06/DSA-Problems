#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod (ll)(1e9+7)
#define for0(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<n;i++)
#define loop(i,a,b) for(ll i=a;i<=b;i++)
#define vll vector<ll>
#define pb(i) push_back(i)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
#define maxheap priority_queue<ll>
#define minheap priority_queue<ll,vector<ll>,greater<ll>>

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
	ll t;
	cin>>t;
	while(t--){
		ll D,d,p,q;
		cin>>D>>d>>p>>q;
		ll sum=0;
		ll div = D/d;
		ll rem = D%d;
		if(div%2==0){
			sum = d*((div/2)*(2*p+(div-1)*q));// AP sum formula  d*(p,p+q,p+2q,p+3q........)
		}
		else{
			//Modified AP formula for odd term sum
			sum = (div*(p+((div-1)/2)*q))*d;// division 2 inside and divided with internal terms because div is odd now and would generate double value
		}
		sum += (rem)*(p+div*q);//Adding last term in sum
		cout<<sum<<"\n";

	


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