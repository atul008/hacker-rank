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
 #define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
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
 int64_t n,res,t3,t5,t15;
 int t;
 cin >> t;
 while(t--){
    cin >> n;
    n--;
    res = 0 ;
    t3 = n/3;
    t5 = n/5;
    t15 = n/15;
    int64_t i = n;
    while(i%3 != 0) i--;
    res += t3*(3 + i)/2;
    i = n;
    while(i%5 != 0) i--;
    res += t5*(5 + i)/2;
    i = n;
    while(i%15 != 0) i--;
    res -= t15*(15 + i)/2;
    cout << res << endl;

 }
 return 0;
 }
