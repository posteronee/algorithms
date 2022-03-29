#include <iostream>
using namespace std;

int main() {
    freopen ("input.txt" , "r", stdin);
    freopen ("output.txt" , "w", stdout);
    int n, i, j, m;
    cin >> n >> m;
    int matrix[m][2];
    for (i = 0 ; i < m ; i++){
        for (j = 0; j < 2; j++ ){
            cin >> matrix[i][j];

        }
    }
    int Matrix[n][n];
    for (i = 0; i < n; i++ ){
        for (j = 0; j < n; j++){
            Matrix[i][j] = 0;
        }
    }
    for (i = 0; i < m ; i++){
        Matrix[matrix[i][0]-1][matrix[i][1]-1] = 1;
    }

    for( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++) {
            cout << Matrix[i][j] << " ";

        }
        cout << endl;



    }
        return 0;
}

