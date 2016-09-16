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

 void calSum(vector<int64_t>& sum,int64_t& max){
    for(int64_t i = 1;i<=max;i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum[i] = sum[i-1] + i ;
        }else{
            sum[i] = sum[i-1];
        }
    }
 }

 int64_t calsum2(int64_t s,int64_t n,int64_t max){
   int64_t res = s;
    /*for(int64_t i = max+1;i<n;i++){
        if(i % 3 == 0 || i % 5 == 0)
            res = res + i;
    }*/
    int64_t i = max+1;
    while(i%3 !=0) i++;
    while(i<n){
        res += i;
        i += 3;
    }

    i = max + 1;
    while(i%5 != 0) i++;
    while(i<n){
        res += i;
        i += 5;
    }
    i = max + 1;
    while(i%15 != 0) i++;
    while(i<n){
        res -= i;
        i+=15;
    }

    return res;
 }


 int main(){
 int64_t n,max = 1000000;
 vector<int64_t> sum(max+1);

 sum[0] = 0;
 calSum(sum,max);
 //tr(sum,it) cout << *it << endl;
 int t;
 cin >> t;
 while(t--){
    cin >> n;
   // cout << "max : " << max << endl;
    if(n <= max )
        cout << sum[n-1] << endl;
    else{
        cout << calsum2(sum[max],n,max) << endl;
    }
 }
 return 0;
 }
