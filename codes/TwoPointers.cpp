//Two Pointers.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[ 100 ] = { 5, 3, 1, 9, 8, 2 };
    int target = 11;
    int sum = 0;
    int loopCount = 0;

    for( int i = 0; i < 5; i++ ){

        for( int j = i; j < 5; j++ ){
            loopCount++;
            if( i == j ){
                continue;
            }
            sum = a[ i ] + a[ j ];


            if( sum == target ){
                cout << "Target Found\n";
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    //cout << "LoopCount " << loopCount << endl;
    cout << "Target Not Found\n";
}
