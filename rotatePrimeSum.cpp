#include <bits/stdc++.h>
using namespace std;
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
typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 typedef long long ll;

    int rotate(int n){
        stringstream ss;
        string s;
        int m = n%10;
        n = n/10;
        ss << n;
        if(n == 0) return m;
        ss >> s;
        int k = m*pow(10,s.length()) + n;
        return k;
    }

int main(){
    int n;
    cin >> n;
    stringstream ss;
    int k = n;
    string s;
    ss << k;
    ss >> s;
    k = pow(10,s.length());
    vi v(k+1,1);

    FOR(2,sqrt(k),i){
        if(v[i] == 1){
            for(int j = i*i;j <= k;j = j + i){
                v[j] = 0;
            }
        }
    }
    int res = 0;
    FOR(2,n,i){
        if(v[i] == 1){
            int r = i,flag = 0;
            while( i != rotate(r)){
                r = rotate(r);
                if(v[r] == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) res +=i;
        }
    }

    cout << res << endl;
}
