#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;



int main(){
    cout << setprecision(11) << fixed;
   double x,y;
   cin >> x>> y; 
   double d;    cin >> d;
   d = d*pi/180.0;
   cout << x*cos(d) - y*sin(d) << " " << x*sin(d) + y*cos(d) << endl;
   return 0;
   
}
