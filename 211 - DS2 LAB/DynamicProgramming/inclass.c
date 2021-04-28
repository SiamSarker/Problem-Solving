#include <stdio.h>
#define INF 99999
int arr[1000][1000];

int max(int a, int b) {
    if(a>b) return a;
    return b;
}
int LCS(char X[], int i, char Y[], int j) {
    if(i == 0 || j == 0)
        return arr[i][j];

    if(arr[i-1][j-1] == INF){
    if(X[i] == Y[j])
        arr[i-1][j-1] = LCS(X, i-1, Y, j-1) + 1;
    else {
        int a = LCS(X, i, Y, j-1);
        int b = LCS(X, i-1, Y, j);
        arr[i-1][j-1] = max(a, b);
        }
    }
    return arr[i-1][j-1];
}

int main() {
 
    char X[] = "~ABDEASJDFLASJBDFLJASIUFASIDUF"; // we are not going to use index 0
    char Y[] = "~ZBEFSIDHFAPDOIFHAOSF"; // we are not going to use index 0
    int m = sizeof(X)/sizeof(char)-2; // excluding '~' and '\0'
    int n = sizeof(Y)/sizeof(char)-2; // excluding '~' and '\0'

    for(int i = 0; i<= m;i++)
        arr[0][i] = 0;
    for(int i = 0; i<= n;i++)
        arr[i][0] = 0;

    for(int i = 1 ; i <= m; i++)
        for(int j = 1; j<n; j++)
            arr[i][j] = INF;

    printf("%d\n", LCS(X, m, Y, n));
    return 0;
}
