#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10, i = 0;
    int a[105];

    while( n > 0 ){
        a[ i++ ] = n % 2;
        n = n / 2;
    }

    for( int j = i - 1; j >= 0; j-- ){
        cout << a[j];
    }
    cout << endl;


    return 0;
}
