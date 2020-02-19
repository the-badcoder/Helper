#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    for( int i = 0; i < test; i++ ){
        int n, maxi = 0;
        cin >> n;
        int a[n];
        for( int j = 0; j < n; j++ ){
            cin >> a[j];
            if( a[j] >= maxi ){
                maxi = a[j];
            }
        }
        cout << maxi << endl;
    }

    return 0;
}
/*

4

3
1 2 3

4
1 2 3 4

5
1 2 3 4 5

6
1 2 3 4 5 6

*/
