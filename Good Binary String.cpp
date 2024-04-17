

//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define  lli     long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define  nl      "\n"
#define  ce      cout<<"\n"
#define  pb      push_back
#define vi       vector<int>
#define vl       vector<lli>
#define  yes     cout<<"YES"<<"\n"
#define  no      cout<<"NO"<<"\n"
#define S        size()
#define L        length()
#define B        begin()
#define E        end()
#define F        first
#define se       second
#define lcm(a,b) a*b/__gcd(a,b)
#define for_t(i,j,n) for(int i=0,int j=n-1;i<j;i++,j--)
#define g_arr(a,n) sort(arr,arr+n,greater<int>())
#define dsort sort(vec.begin(), vec.end(), greater<int>())
#define PI 3.1415926535897932384626433832795
#define isort sort(vec.B,vec.E)
#define fpre for(int i=1;i<n;i++){pre[i]=pre[i-1]+vec[i];}
#define sp " "
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define fo(i,n) for (int i = 0; i < n; ++i)
#define fo_index(i,k,n) for ( int i = k; i <= n; ++i)
#define rev_fo_index(i,k,n) for (int i = k; i >= n; --i)
const int N=1e6+10;
const int M=1e9+7;

int arr[N]={0};
int prime[N];
map<int,int>prime_factor_fre;
// 2D vector with size...............
// vector<vector<int>> vec( row_size , vector<int> (col_size));

lli mini=1e18;
template<typename T, typename U>
static inline void amin(T &x, U y){if (y < x)x = y;}

lli maxi=-1e18;
template<typename T, typename U>
static inline void amax(T &x, U y) {if (x < y) x = y; }

lli mod(lli x){
    return ((x%M+M)%M);
}

lli add(lli a, lli b){
    return mod(mod(a)+mod(b));
}
lli mul(lli a,lli b){
    return mod(mod(a)*mod(b));
}
//--------------ordered set Functionality-----------------
/*
//-------------Ordered set declared with name o_set--------
    ordered_set o_set;

//-------------Finding the second smallest element--------

    cout << *(o_set.find_by_order(1))<< endl;


//------------Finding the number of elements strictly less than k=4--------------

    cout << o_set.order_of_key(4)<< endl;
*/

/*bool primality_test(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;

        }
    }
    return true;

}*/


/*void seive(){
 for(int i=2;i*i<=N;i++){
    if(prime[i]==0){
        for(int j=2*i;j<=N;j+=i){
            prime[j]=1;
        }
    }
   }

}*/

/*
//decimal to binary in string format

string decimalToBinary(int n)
{
    string s = bitset<64> (n).to_string();
    const auto loc1 = s.find('1');
    if(loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}
*/

/*
void prime_factor(int n){

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                prime_factor_fre[i]++;
                sum+=i;
            }
        }

    }
     if(n>1){
            prime_factor_fre[n]++;

        }
}
*/
/*

void binary(int x){
     lli low=1,high=1e18,mid;
    lli ans=0;
     while(low<=high){
        lli mid=low+(high-low)/2;
        if(mid<=x/mid){
            low=mid+1;
            ans=mid;
        }
        else if(mid>x/mid){
                high=mid-1;

        }

    }

}
*/


void slove(){
    lli n;
    cin>>n;
    string str;
    cin>>str;
    vi vec;
    char x;
    for(int i=0;i<n-1;i+=2){
            if(str[i]==str[i+1])continue;
           if(vec.S!=0)  x=str[vec.back()-1];

            vec.pb(i+1);
            char xx=str[vec.back()-1];
            if(xx==x){
                vec.pop_back();
                vec.pb(i+2);
            }

    }
    cout<<vec.S<<nl;
    for(auto it:vec)cout<<it<<sp;
    ce;

}


int main(){
    fast;
  lli test;
   cin>>test;
   while(test--)
            {
                slove();
            }

}


