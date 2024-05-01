

//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;

#define  lli     long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
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
#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<"=";_print(x);cerr<<nl;
#else
#define debug(x)
#endif
void _print(int a){cerr<<a;}
void _print(lli a){cerr<<a;}
void _print(double a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(bool a){cerr<<a;}
void _print(string a){cerr<<a;}

template<class T>void _print(vector<T>vec){
    cerr <<"[ ";
    for(T it:vec){
        cerr<<it<<" , ";
    }
    cerr<<" ]";
}
template<class T>void _print(set<T>st){
    cerr <<"[ ";
    for(T it:st){
        cerr<<it<<" , ";
    }
    cerr<<" ]";
}
template<class T,class V>void _print(pair<T,V>pa){
    cerr <<"[ ";
    _print(pa.F);
    cerr<<sp;
    _print(pa.se);
    cerr<<" ]";
}
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

//set bit in position index
int set_bit(int n,int index){
    return (n| (1<<index));

}


// check is it set bit in position index
int check_bit(int n,int index){
    return (n & (1<<index));
}



bool primality_test(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;

        }
    }
    return true;

}


void seive(){
 for(int i=2;i*i<=N;i++){
    if(prime[i]==0){
        for(int j=2*i;j<=N;j+=i){
            prime[j]=1;
        }
    }
   }

}


//decimal to binary in string format

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}


double eDis(double x1,double y1,double x2,double y2){
    return sqrtl((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}



void prime_factor(int n){

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                prime_factor_fre[i]++;
        
            }
        }

    }
     if(n>1){
            prime_factor_fre[n]++;

        }
}



lli  binary(lli x){
     lli low=1,high=1e18,mid;
    lli ans=0;
     while(low<=high){
        lli mid=low+(high-low)/2;
        if((mid/x)<=x){
            low=mid+1;
            ans=mid;
        }
        else if((mid/x)>x){
                high=mid-1;

        }

    }
    return ans;

}

inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output_txt.txt", "w", stdout);

freopen("expected output.txt","w",stderr);

#endif // ONLINE_JUDGE
}
lli binaryToDecimal(string n1)
{
    lli n=stoi(n1);
    lli num = n;
    lli dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    lli base = 1;
 
    lli temp = num;
    while (temp) {
        lli last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
lli power(lli n,lli m){
    lli t=1;
    for(lli i=1;i<=m;i++){
        t*=n;
    }
    return t;
}

void slove(){
     vl ans(N,0);
    lli n,m;
    cin>>n>>m;
    vector<string>vec;
     
    fo(i,n){
        string str;
        cin>>str;
        int t=0;
       for(lli j=0;j<str.S;j++){
        if(str[j]=='1')t++;
       }
       if(t==1){
        lli v=1;
         for(int j=str.S-1;j>=0;j--){
            if(str[j]=='1'){
                ans[m-(j+1)]=1;
            }
           

        }
       }



    }
 //   debug(ans);

  
    
    lli cnt=0;
    bool flag=true;
   // sort(ans.B,ans.E);
    int k=1;
    while(cnt<m){
        if(ans[cnt]!=1){
            no;return;
        }
        cnt++;


    }
    yes;
        



    }
    
    

   

   
  


int main(){
    fast;
    debugMode();
    lli test;
    cin>>test;
    while(test--){
         slove();
    }
            }