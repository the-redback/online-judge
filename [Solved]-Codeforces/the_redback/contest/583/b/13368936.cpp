/**
 *    @author     : Maruf Tuhin
 *    @College    : CUET CSE 11
 *    @Topcoder   : the_redback
 *    @CodeForces : the_redback
 *    @UVA        : the_redback
 *    @link       : http://www.fb.com/maruf.2hin
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long          ll;
typedef unsigned long long llu;

#define ft        first
#define sd        second
#define mp        make_pair
#define pb(x)     push_back(x)
#define all(x)    x.begin(),x.end()
#define allr(x)   x.rbegin(),x.rend()
#define mem(a,b)  memset(a,b,sizeof(a))
#define inf       1e9
#define eps       1e-9
#define mod       1000000007
#define NN        100010

#define read(a)   scanf("%lld",&a)

ll a[NN];
ll flag[NN];

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(0);
    #ifdef redback
        freopen("C:\\Users\\Maruf\\Desktop\\in.txt","r",stdin);
    #endif

    ll t=1,tc;
    //read(tc);
    ll i,j,k,l,m,n;
    while(~read(n))
    {
        for(i=0;i<n;i++)
            read(a[i]);
        ll ans=0;
        ll sum=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(sum>=a[j])
                {
                    sum++;
                    a[j]=inf;
                }
            }
            if(sum==n)
                break;
            ans++;
            for(j=n-1;j>=0;j--)
            {
                if(sum>=a[j])
                {
                    sum++;
                    a[j]=inf;
                }
            }
            if(sum==n)
                break;
            ans++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
