#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;


int main(){
   int n,m,x,t,d;
   cin >> n >> m >> x >> t >> d;
   ll height = t - d*(x);
   if(m==0){
    cout << height << endl;
    return 0;
   }
   for(int i=1;i<=x;i++){
    height += d;
    if(i == m){
        cout << height << endl;
        return 0;
    }
   }

   cout << height << endl;
   
}
