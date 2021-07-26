#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

#define MAX 10000000
bitset<MAX> isPrime;
std::vector<int> primes;

void gen_primes(){
    isPrime.set();
    isPrime[0] = isPrime[1] = false;
    for(ll i = 2; i*i <= MAX ; i++){
        if(isPrime[i]){
            for(ll j = i; i*j <= MAX ; j++){
                isPrime[i*j] = false;
            }
        }
    }

   primes.pb(2);

    for(int i = 3 ; i <= MAX ; i += 2){
        if(isPrime[i])
        {
            primes.pb(i);
        }
    }
}

int main() {
 //  init_code();
   gen_primes();
   rep(i, 0, 100){
     cout << primes[i] << " ";
   }
   return 0;
}