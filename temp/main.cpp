#include <iostream>
#include <bits/stdc++.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
typedef long long LL;
 
const LL N = 2e9;
 

 
int main()
{
	vector<LL> a;
    a.push_back(0);
    a.push_back(1);
    a.push_back(3);
    for(LL i = 3, k = 0; k <= N; i++) {
        k = *(a.end() - 1) + (lower_bound(a.begin(), a.end(), i) - a.begin());
        printf("%lld\n",a.begin());
        a.push_back(k);
    }
 
 	LL x = 10, y = 35, z =546;
 	
 	//printf("%lld\n", lower_bound(a.begin(), a.end(), y));
    LL n;
    while(~scanf("%lld", &n) && n) {
        printf("%lld\n", (lower_bound(a.begin(), a.end(), n) - a.begin()));
    }
 
    return 0;
}

