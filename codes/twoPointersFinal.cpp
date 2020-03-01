//Two Pointers.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[ 100 ] = { 5, 3, 1, 9, 8, 2 };
    int target = 11;
    int sum = 0;
    int loopCount = 0;

    int l = 0, r = 5;

    sort( a, a + 6 );

     while( l < r ){
        sum = a[ l ] + a[ r ];

        loopCount++;
        if( sum < target ){
            l++;
        }
        else if( sum > target ){
            r--;
        }
        else if( sum == target ){
            cout << l << " " << r << endl;
            cout << loopCount << endl;
            return 0;
        }
    }


}
