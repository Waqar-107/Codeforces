/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 70000
#define inf 1e6

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

ll ans;
int a[N];

void Merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *x = new int[n1];
    int *y = new int[n2];

    k = l;
    for(i = 0; i < n1; i++)
        x[i] = a[k++];

    k = m + 1;
    for(i = 0; i < n2; i++)
        y[i] = a[k++];

    i = 0, j = 0, k = l;
    while(i < n1 && j < n2)
    {
        if(x[i] <= y[j])
            a[k] = x[i++];

        else
            a[k] = y[j++], ans += (n1 - i);

        k++;
    }

    for(int w = i; w < n1; w++)
        a[k++] = x[w];

     for(int w = j; w < n2; w++)
        a[k++] = y[w];

    delete[] x;
    delete[] y;
}

void mergeSort(int l, int r)
{
    if(l < r)
    {
        int mid = (l + r) / 2;

        mergeSort(l, mid);
        mergeSort(mid + 1, r);

        Merge(l, mid, r);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    ans = 0;

    sf(n);
    for(i = 0; i < n; i++)
        sf(a[i]);

    mergeSort(0, n - 1);
    pfl(ans);

    return 0;
}
