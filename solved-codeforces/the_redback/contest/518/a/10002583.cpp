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

char s[1000],ss[1000], ans[1000];

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(0);
    #ifdef redback
        freopen("C:\\Users\\Maruf\\Desktop\\in.txt","r",stdin);
    #endif

    ll t=1,tc;
    //read(tc);
    ll i,j,k,l,m,n;
    while(~scanf("%s",&s))
    {
        scanf("%s",&ss);
        strcpy(ans,s);
        ll flag=-1;
        l=strlen(s);
        for(i=l-1;i>=0;i--)
        {
            if(s[i]<'z')
            {
                s[i]++;
                flag=0;
                break;
            }
            else
                s[i]='a';
        }
        if(flag==0 && strcmp(s,ss)<0)
            cout<<s<<"\n";
        else
            cout<<"No such string\n";


    }
    return 0;
}
