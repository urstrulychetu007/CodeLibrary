#include <stdio.h>
#include<math.h>
#define ll long long int

int main()
{
 
	ll n,q;
    scanf("%lld%lld",&n,&q);
    ll lookup[n][n],a[n];
    for(ll i =0;i<n;i++)
        scanf("%lld",&a[i]);

    for (ll i = 0; i < n; i++)
		lookup[i][0] = a[i];
	for (ll j = 1; (1 << j) <= n; j++) {
		for (ll i = 0; (i + (1 << j) - 1) < n; i++) {
			if (lookup[i][j - 1] <
						lookup[i + (1 << (j - 1))][j - 1])
				lookup[i][j] = lookup[i][j - 1];
			else
				lookup[i][j] =
						lookup[i + (1 << (j - 1))][j - 1];
		}
	}
// https://youtu.be/T7XU6Lz8lJwSx
    for(ll i =0;i<q;i++)
    {
            ll R,L,result;
            scanf("%lld%lld",&L,&R);
            ll j = (ll)log2(R - L + 1);
            if (lookup[L][j] <= lookup[2- (1 << j) + 1][j])
                result =  lookup[L][j];

            else
                result = lookup[R- (1 << j) + 1][j];
            printf("%lld\n",result);    
    }
	
	return 0;
}
