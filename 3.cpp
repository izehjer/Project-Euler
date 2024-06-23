/*
        Author ::  phoenix91
*/
#include <bits/stdc++.h>
using namespace std;



template <typename A, typename B> ostream& operator<< (ostream &cout, pair<A, B> const &p) { return cout << "(" << p.first << ", " << p.second << ")"; }
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin >> p.first; return cin >> p.second;}
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";}
template <typename A> ostream& operator<< (ostream &cout, set<A> const &v) {cout << "["; for(auto &x: v) cout << x <<", "; return cout << "]";}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}
template <typename A, typename B> A amax (A &a, B b){ if (b > a) a = b ; return a; }
template <typename A, typename B> A amin (A &a, B b){ if (b < a) a = b ; return a; }


mt19937 rng (chrono::high_resolution_clock::now().time_since_epoch().count());
#define ll            long long
#define pb            push_back
#define rep(i,a,n )   for( ll i=a;i<n;i++)
#define all(v)        v.begin() , v.end()
#define gcd(a,b)      __gcd(a,b)
#define lb            lower_bound
#define ub            upper_bund
#define ss             second
#define ff             first
#define mp 			  make_pair
#define pii            pair < int  , int >
typedef vector < int > vi ; 
typedef vector < long long > vll ; 
typedef pair < ll , ll >  pll ;  
// #define PI            3.1415926535
// some primes :: 998244353 , 1000000007 , 1000000009

const ll inf = 1e9 ;   




int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);      
    
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

     long long n ; cin >> n ; 

     long long ans = 1 ; 

     for( long long i = 2 ; i * i <= n ; i ++ ){
     	while( n % i == 0 ){
     		n/=i ; 
     		ans = max( ans , i ) ; 
     	}
     }

     ans = max( ans , n ) ; 

     cout << ans << '\n' ; 

     //string s ; cin >> s ; 

    
return 0;
} 
     
   
