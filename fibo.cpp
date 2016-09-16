 #include <map>
 #include <set>
 #include <vector>
 #include <list>
 #include <cmath>
 #include <cstring>
 #include <string>
 #include <sstream>
 #include <iostream>
 #include <algorithm>
 #define  x first
 #define  y second

 #define sz(a) int((a).size())
 #define all(c) (c).begin(),(c).end()
 #define tr(c,i) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
 #define present(c,x) ((c).find(x) != (c).end())
 #define cpresent(c,x) (find(all(c),x) != (c).end())
 #define FOR(a,b,i) for(int i=a; i<=b; i++)
 #define RFOR(a,b,i) for(int i=b; i>=a; i--)
 #define SET(c,x) memset(c,x,sizeof(c))
 #define pb push_back
 #define mp make_pair

 using namespace std;
 typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 typedef long long ll;


 int main(){
   int64_t limit = 1e15;
   vector<int64_t> fibo(0);
   fibo.pb(0);
   fibo.pb(1);
   int size = 2;
   while(fibo.back() < limit){
    fibo.pb(fibo[size-1] + fibo[size-2]);
    size++;
   }
   int t;
   int64_t n;

   cin >> t;
   while(t--){
       cin >> n;
       int64_t res = 0;
       tr(fibo,it){
            if(*it > n) break;
            if((*it)%2 == 0 ){
                //cout << " s : " << s << endl;
                res += *it;
            }
       }
       cout<< res << endl;
    }
 return 0;
 }
