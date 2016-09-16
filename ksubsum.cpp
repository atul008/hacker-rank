 #include <bits/stdc++.h>
 #include <cstdio>
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

 bool comp(int l,int r){
    return (!l<r);
 }

class classcomp {
    public:
  bool operator() (const int& lhs, const int& rhs) const
  {return !(lhs<rhs);}
};

 int main(){
     int t;
     scanf("%d",&t);
     while(t--){
        int n,k1,k2,k3;
        scanf("%d%d%d%d",&n,&k1,&k2,&k3);
        int arr[n],sumarray[n];
        FOR(0,n-1,i) scanf("%d",&arr[i]);

        int topKsum[k3],currKsum[k3];
        SET(topKsum,INT_MIN);
        sumarray[0] = arr[0];
        FOR(1,n-1,i){
            SET(currKsum,INT_MIN);
            int s = arr[i] + sumarray[i-1];
            FOR(0,min(k3,i-1),j){

            }

        }

        printf("%d %d %d\n",ans[0],ans[1],ans[2]);
     }

 return 0;
 }

