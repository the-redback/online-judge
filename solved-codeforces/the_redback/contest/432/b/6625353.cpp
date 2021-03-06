/**
 *    @author     : Maruf Tuhin
 *    @School     : CUET CSE 11
 *    @Topcoder   : the_redback
 *    @CodeForces : the_redback
 *    @UVA        : the_redback
 *    @link       : http://www.fb.com/maruf.2hin
 */
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
using namespace std;

#define ppb pop_back
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define inf 1e9
#define eps 1e-9
#define NN 100010
int hom[NN],awa[NN];
struct D
{
    int x,y;
    D(int X,int Y)
    {
        x=X,y=Y;
    }
    D()
    {

    }
};
D a[NN];
D ans[NN];

main()
{
    ios_base::sync_with_stdio(false);
    int t,tc;
    //cin>>tc;
    int i,j,k,l,m,n;
    while(cin>>n)
    {
        int total=0;
        for(i=0;i<n;i++)
        {
            cin>>j>>k;
            hom[j]++;
            awa[k]++;
            a[i]=D(j,k);
        }
        for(i=0;i<n;i++)
        {
            int x,y;
            x=y=0;
            x=n-1;
            x+=hom[a[i].y];
            y=n-hom[a[i].y]-1;
            ans[i]=D(x,y);
        }
        for(i=0;i<n;i++)
        {
            printf("%d %d\n",ans[i].x,ans[i].y);
        }
    }
    return 0;
}
