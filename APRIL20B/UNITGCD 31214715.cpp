#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 10000000
#define all(x) x.begin(),x.end()
#define rs resize
#define remove_zero(str) str.erase(0, str.find_first_not_of('0'));
#define br break
const long long kot = LLONG_MAX;
#define pb push_back
#define pi 3.14159265358979323846
#define pp pop_back
#define pf pop_front
using ld = long double;
#define endl "\n"
#define rese(x,y) memset(x,y,sizeof(x))
#define f first
#define ss second
#define forn(i, n) for (ll i = 0; i < ll(n); i++)
#define np next_permutation
const int MAXIT = 100; 
#define ul unsigned long
#define pii pair<ll,ll>
#define cc continue
#define ee end
#define ii insert
#define fr front
#define mod 1000000007
#define b begin
#define up upper_bound
#define pc pop_back()
//#define r reverse
#define bb back
#define CHARS_TOTAL 256
#define INT_BITS 32 
#define SIZE 26
//#pragma GCC optimize "trapv"
//#define _GLIBCXX_DEBUG
//typedef std::pair<std::string,std::string>pair;
const ll alpha=1e18;
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std; 
ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}
ll largest(ll arr[], ll n)
{
    return *max_element(arr, arr+n);
}
// Function to return LCM of two numbers
 ll lcm(ll a, ll b)
 {
    return (a*b)/gcd(a, b);
 } 
bool isPerfectSquare(long double x)
{
  long double sr = sqrt(x);
  return ((sr - floor(sr)) == 0);
}
bool comp(ll a, ll b)
{
    return (a < b);
}
vector<ll>ve;
void divisors(ll n)
{
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                ve.pb(i);
 
            else // Otherwise print both
            ve.pb(i);
            ve.pb(n/i);
        }
    }
}
bool isPrime(ll n) {
 
    if (n == 1) {
        return false;
    }
 
    ll i = 2;
 
    while (i*i <= n) {
 
        if (n % i == 0) {
             return false;
        }
        i += 1;
    }
    return true;
}
ll gcdofarray(vector<ll>&v, ll n)
{
    ll result = v[0];
    for (ll i = 1; i < n; i++)
        result = gcd(v[i], result);
    return result;
}
 
ll sumofdigits(ll n){
        ll sum=0;
        while(n>0){
            sum+=n;
            n/=10;
        }
        return sum;
}
bool powertwo(ll x){
  return x&& (!(x&(x-1)));
}
string removeDuplicatesFromString(string str)
{
    ll counter = 0;
 
    ll i = 0;
    ll size = str.size();
    ll x;
 
    // keeps track of length of resultant string
    ll length = 0;
 
    while (i < size) {
        x = str[i] - 97;
 
        // check if Xth bit of counter is unset
        if ((counter & (1 << x)) == 0) {
 
            str[length] = 'a' + x;
 
            // mark current character as visited
            counter = counter | (1 << x);
 
            length++;
        }
        i++;
    }
 
    return str.substr(0, length);
}
ll commDiv(ll a,ll b)
{
    // find gcd of a,b
    ll n = gcd(a, b);
 
    // Count divisors of n.
    ll result = 0;
    for (ll i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i==0)
        {
            // check if divisors are equal
            if (n/i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
 
ll nPr(ll n, ll r)
{
    return fact(n) / fact(n - r);
}
ll kash(ll a,ll b){
    return (a*b)/gcd(a,b);
}
ll maxi(ll a,ll b){
   return (a>b)?a:b;
}
ll mini(ll a,ll b){
   return (a<b)?a:b;
}
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
ll power(ll x,ll y,ll p)
{
    ll res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
ll powe(ll x, unsigned ll y, ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
bool sortByVal(const pair<ll, ll> &a, const pair<ll, ll> &b) { 
    return (a.second < b.second); 
} 

//vector<ll>arr[1001];
//ll vis[1001];
//pair<ll,ll>p[1001];
/*void dfs(ll node){
	if(vis[node])return;
	vis[node]=1;
	for(ll i=0;i<n;i++){
		if (p[i].first == p[node].first || p[node].second == p[i].second){
			dfs(i);
		}
	}
}*/
ll check(ll arr[],ll n,ll v){
	ll dp[v+1];
	dp[0]=0;
	ll i,j;
	for(i=1;i<=v;i++){
		dp[i]=INT_MAX;
	}
	for(i=1;i<=v;i++){
		for(j=0;j<n;j++){
			if(arr[i]<=i){
				ll y=dp[i-arr[j]];
				if(y!=INT_MAX && y+1<arr[i]){
					dp[i]=y+1;
				}
			}
		}
	}
	return dp[v];
}
ll maxSubArraySum(ll a[], ll size) 
{ 
    ll max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (ll i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 

bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u'){
		return true;
	}
	return false;	
}
ll power(ll x, unsigned ll y, ll p)  
{  
    ll res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p  
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
//Taken from https://www.geeksforgeeks.org/compute-ncr-p-set-3-using-fermat-little-theorem/ 
ll modInverse(ll n, ll p) 
{ 
    return powe(n, p-2, p); 
} 
ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we 
    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
}
ll parent[100001];
ll find(ll a){
    while(parent[a]>0){
		a=parent[a];
	}	
	return a;
}
void Union(ll a,ll b){
     parent[a]+=parent[b];
     parent[b]=a;	
}
bool ispalind(string str){
     string s=str;
     reverse(str.begin(),str.end());
     if(s==str)return true;
     return false;	
}
string intToBinaryString(ll n)
{

      char bArray[ (sizeof(ll) * 8) + 1 ];

      //index = 32 to fetch each 32 slots
      unsigned index  = sizeof(ll) * 8;

      char temp =0;
      bArray[ index ] = '\0';

      do{         
            temp = (n & 1); 
            temp = temp + '0';
            bArray[ --index ] = temp;

      }while (n >>= 1);
      return string( bArray + index );
}
void leftrotate(string &s, ll d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 
  
// In-place rotates s towards right by d 
string rightrotate(string &s, ll d) 
{ 
   leftrotate(s, s.length()-d); 
   return s;
} 
void addZeros(string& str, ll n) 
{ 
    for (ll i = 0; i < n; i++) { 
        str = "0" + str; 
    } 
} 
// Taken from https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
ll solve1(ll n){
	ll c=0;  
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";
        c++;
        n = n/2;  
    }  
    for(ll i = 3; i <= sqrt(n); i = i + 2)  
    {    
        while (n % i == 0)  
        {  
            //cout << i << " ";  
            c++;
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)
		c++;
        //cout << n << " "; 
     
    return c; 
}  
void solve(){
    //input
    ll tt=1;
    cin>>tt;
    for(ll d=0;d<tt;d++){
	    ll n;
	    cin>>n;
	    if(n==1){
			cout<<1<<endl<<1<<" "<<1<<endl;
		}
		else{
			cout<<n/2<<endl;
			ll i;
			if(n%2==0){
				for(i=1;i<=n;i+=2){
					cout<<2<<" "<<i<<" "<<i+1<<endl;
				}	
			}
			else{
				ll z=n-3;
				for(i=1;i<=z;i+=2){
					cout<<2<<" "<<i<<" "<<i+1<<endl;
				}
				cout<<3<<" "<<n-2<<" "<<n-1<<" "<<n<<endl;
			}
			cout<<endl;
		}
	}
}
int32_t main()
{
    fio;
    solve();
}
