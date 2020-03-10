#include <bits/stdc++.h>

using namespace std;

int main()
{
    int notes[] = { 100, 20, 10, 5, 1 };

    double poysha[] = {.25, .10, .05, .01};

    vector < pair < double, int > > v;
    vector < pair < double, int > > v1;

    double taka = 55.50;
    int now = taka;

    double extra = taka - now;

    for( int i = 0; i < 4; i++ ){
        int no = 0;
        while( now >= notes[i] ){
            v.push_back( { notes[i], ++no });
            now -= notes[i];
        }
    }

    for( int i = 0; i < 4; i++ ){
        int no = 0;
        while( extra >= poysha[i] ){
            v1.push_back({ poysha[i], ++no } );
            extra -= poysha[i];
        }
    }

    for( int i = 0; i < v.size(); i++ ){
        cout << v[i].first << " " << v[i].second << endl;
    }

    for( int i = 0; i < v1.size(); i++ ){
        cout << v1[i].first << " " << v1[i].second << endl;
    }




}

