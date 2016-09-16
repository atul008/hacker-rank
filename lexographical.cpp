 #include <bits/stdc++.h>
 #define  F first
 #define  S second

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
 void next_greater(string& s){
    int len = s.length();
    int k = len -1,f=0;

    while(k > 0){
        for(int i = k-1;i>=0;i--){
            if(s[i] < s[k]){
                swap(s[i],s[k]);
                k = i+1;
                f = 1;
                break;
            }
        }
        if(f == 1) break;
        k--;
    }
    cout << s << endl;
    if (f == 0){
        cout << "no answer" << endl;
    }else{
        partial_sort(s.begin()+k,s.end(),s.end());
        cout << s << endl;
    }
 }

 int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        next_greater(s);
    }
 return 0;
 }
