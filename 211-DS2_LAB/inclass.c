#include <stdio.h>
#define INF 99999

int max(int a, int b) {
    if(a>b) return a;
    return b;
}

int LCS(char X[], int i, char Y[], int j, int dp[i][j]) {
    if(i == 0 || j == 0)
        return 0;

    if(dp[i-1][j-1] != INF) return dp[i - 1][j - 1];

    if(X[i] == Y[j])
        return LCS(X, i-1, Y, j-1, dp) + 1;
    else {
        int a = LCS(X, i, Y, j-1, dp);
        int b = LCS(X, i-1, Y, j, dp);
        return max(a, b);
    }
}

int main() {
    char X[] = "~ABDE"; // we are not going to use index 0
    char Y[] = "~ZBE"; // we are not going to use index 0
    int m = sizeof(X)/sizeof(char)-2; // excluding '~' and '\0'
    int n = sizeof(Y)/sizeof(char)-2; // excluding '~' and '\0'

    int arr[m][n];

    for(int i = 0 ; i <m; i++)
        for(int j = 0; j<n; j++)
            arr[i][j] = INF;

    printf("%d\n", LCS(X, m, Y, n, arr));
    return 0;
}
