#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 10000000
#define haha(x) x.begin(),x.end()
#define rs resize
#define remove_zero(str) str.erase(0, str.find_first_not_of('0'));
#define br break
const long long kot = LLONG_MAX;
#define pb push_back
#define pi 3.14159265358979323846
#define pp pop_back
#define pf pop_front
using kk = long double;
#define endl "\n"
#define rese(x,y) memset(x,y,sizeof(x))
#define f first
#define ul unsigned long
#define pii pair<ll,ll>
#define cc continue
#define ee end
#define ii insert
#define fr front
#define mod 1000000007
#define ss size
#define b begin
#define up upper_bound
#define pc pop_back()
#define mp make_pair
//#define r reverse
#define bb back
#define CHARS_TOTAL 256
#define INT_BITS 32
const ll alpha=1e18;
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;
ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int largest(ll arr[], ll n)
{
    return *max_element(arr, arr+n);
}
// Function to return LCM of two numbers
 ll lcm(ll a, ll b)
 {
    return (a*b)/gcd(a, b);
 }

void sieve(bool primes[], int x)
{
    primes[1] = false;
    for (int i=2; i*i <= x; i++)
    {
        if (primes[i] == true)
        {
            for (int j=2; j*i <= x; j++)
                primes[i*j] = false;
        }
    }
}


// Function to generate mersenne primes less
// than or equal to n


ll power(ll x, unsigned ll y, ll p)
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
class gfg
{
 public: int sumDigits(int no)
 {
   return no == 0 ? 0 : no + sumDigits(no/10) ;
 }
};


bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}


bool comp(int a, int b)
{
    return (a < b);
}
vector<ll>ve;
void divisors(ll n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
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

int gcdofarray(ll v[], ll n)
{
    ll result = v[0];
    for (ll i = 1; i < n; i++)
        result = gcd(v[i], result);
    return result;
}

int sumofdigits(ll n){
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
ll finduncommonsubsequence(string str,string s){
    if(!str.compare(s)){
        return 0;
    }
    return max(str.length(),s.length());
}
void reversec(string str)
{
   for (ll i=str.length()-1; i>=0; i--)
      cout << str[i];
}

string removeDuplicatesFromString(string str)
{

    // keeps track of visited characters
    ll counter = 0;

    ll i = 0;
    ll size = str.size();

    // gets character value
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
void solve(){
    fio;
    ll T=1;
    cin>>T;
    while(T--){
         ll n;
         cin>>n;
         ll arr[n][n];
         memset(arr,0,sizeof(arr));
         ll i,j;
         /*for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }*/
        /* for(i=0;i<n-1;i++){
            cout<<v[i]<<" ";
         }*/
        // cout<<endl;
         string str="Hooray";
         string s="Boo";
         if(n==1){
           cout<<str<<endl;
           cout<<"1"<<endl;
         }
         else if(n&1){
            cout<<s<<endl;
         }
         else{
            vector<ll>v(n-1);
            for(i=0;i<n-1;i++){
               v[i]=i+1;
            }
            cout<<str<<endl;
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                     arr[i][i]=2*n-1;
                }
            }
            /*for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }*/
            //cout<<endl;
            //ll x=1;

            for(i=1;i<n;i++){
               arr[0][i]=v[i-1];
            }
            ll z=1,temp;
            for(i=1;i<n-1;i++){
               temp=z;
               arr[i][n-1]=v[temp];
               if(temp==n-2){
                  temp=0;
               }
               else{
                  temp++;
               }
               for(j=i+1;j<n-1;j++){
                  arr[i][j]=v[temp];
                  if(temp==n-2){
                     temp=0;
                  }
                  else{
                     temp++;
                  }
               }
               if(z==n-3){
                 z=0;
               }
               else if(z==n-2){
                 z=1;
               }
               else{
                 z+=2;
               }
            }
            /*z=0;
            ll pos=0;
            for(i=1;i<n-1;i++){
              for(j=arr[i][i];j<n-2;j++){
                 if(arr[i][n-1]==v[z]){
                   z=pos;
                 }
                 else{
                   z++;
                 }
                 arr[i][j]=v[(pos)%(n-1)];
                 pos++;
              }
            }*/
            for(i=0;i<n;i++){
               for(j=0;j<i+1;j++){
                  if(i==j){
                    arr[i][j]=2*n-1;
                  }
                  else{
                    arr[i][j]=arr[j][i]+n-1;
                  }
               }
            }

            //cout<<endl;
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        cout<<endl;
    }
}


int main()
{
    fio;
    solve();
}
