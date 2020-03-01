#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;

    //int a[4][5] = { { 4,3,2,-1 },{ 3,2,1,-1 }, {1,1,-1,-2},{-1,-1,-2,-3, -10} };
    vector < vector < int > > v;

    for( int i = 0; i < v.size(); i++ ){

    }

    for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 5; j++ ){
            if( a[ i ][ j ] < 0 ){
                cout << a[i][j] << endl;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
