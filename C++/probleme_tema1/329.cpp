#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bila.in");
ofstream fout("bila.out");

int n, m, v[21][21], dp[22][22], result;

const int dx[] = {0,  0, 1, -1};
const int dy[] = {1, -1, 0,  0};

static void backtrack(int i, int j, int step)
{
    int d, ni, nj;

    if(i == 1 || i == n || j == 1 || j == m)
        result = max(result , step - 1);
    else
        for(d = 0; d < 4; d++) {
            ni = i + dx[d];
            nj = j + dy[d];
            if(!dp[ni][nj] && v[ni][nj] < v[i][j]) {
                dp[i][j] = step;
                backtrack(ni, nj, step + 1);
                dp[ni][nj] = 0;
            }
        }
}

int main(void)
{
    int i, j, x, y;

    fin >> n >> m;

    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            fin >> v[i][j];

    for(i = 0; i <= n + 1; i++)
        dp[i][0] = dp[i][m + 1] = -1;
    for(i = 0; i <= m + 1; i++)
        dp[0][i] = dp[n + 1][i] = -1;

    fin >> x >> y;

    dp[x][y] = 1;

    backtrack(x, y, 2);

    fout << result;

    return 0;
}
