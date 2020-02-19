#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0, j = 0, i = 0;
    int a[105], b[105];
    cin >> n;

    for( int i = 0; i < n; i++ ){
        cin >> a[i];
        //ans ^= a[i];
    }
    //cout << ans << endl;

    sort( a, a + n );

    for( ; i < n - 1; i++ ){
        if( a[i] == a[i+1] ){
            i++;
        }
        else{
            b[j++] = a[i];
        }
    }

    if( i != n ){
        b[j++] = a[n-1];
    }

    for( int i = 0; i < j; i++ ){
        cout << b[i] << endl;
    }

    return 0;
}
