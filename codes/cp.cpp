#include <bits/stdc++.h>

using namespace std;

int main()
{
    int matrix[6][6];

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> matrix[i][j];
        }
    }
    int maxi = INT_MIN;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {

            int ans = matrix[i][j] + matrix[i][j+1] + matrix[i][j+2]
                + matrix[i+1][j+1]
                + matrix[i+2][j] + matrix[i+2][j+1] + matrix[i+2][j+2];

            if(ans > maxi) {
                    maxi = ans;
            }
        }
    }
    cout << maxi << endl;

    return 0;
}
