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

char a[100],b[100];
map<string,string>mmp;

string s,ss;

main()
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
        read(m);
        mmp.clear();
        for(i=0;i<m;i++)
        {
            scanf("%s %s",&a,&b);
            s.assign(a);
            ss.assign(b);
            if(strlen(a)<=strlen(b))
            {
                mmp[s]=s;
            }
            else
                mmp[s]=ss;
        }
        for(i=0;i<n;i++)
        {
            if(i!=0)
                printf(" ");
            scanf("%s",&a);
            s.assign(a);
            printf("%s",mmp[s].c_str());
        }
        puts("");

    }
    return 0;
}

