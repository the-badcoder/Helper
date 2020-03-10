#include <bits/stdc++.h>

using namespace std;

// Bubble Sort.

int main()
{
    int a[100] = { 2, 3, 4, 1, 5 };
    int ans = 0;

    for( int i = 0; i < 4; i++ ){
        for( int j = i+1; j < 4; j++ ){
            if( a[ i ] > a[ j ] ){
                int temp = a[ i ];
                a[ j ] = a[ i ];
                a[ i ] = temp;
                // swap( a[i], a[j] )  < Swap function.
                ans++;
            }
        }
    }
    cout << ans << endl;
}
