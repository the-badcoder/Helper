#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0, j = 0;
    int a[105], b[105];
    cin >> n;

    for( int i = 0; i < n; i++ ){
        cin >> a[i];
    }

    sort( a, a + n );

    for(int i = 0 ; i < n - 1; i++ ){
        int cnt = 0;
        if( a[i] == a[i+1] ){
           cnt++;
        }
    }

    for( int i = 0; i < j; i++ ){
        cout << b[i] << endl;
    }

    return 0;
}
//1 1 2 2 2
