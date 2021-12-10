#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("traseucalmax.in");
ofstream fout("traseucalmax.out");

int n, m, a[11][11], cnt, b[11][11], result;

const int dx[] = {-2 , -2 , -1 , 1 , 2 ,  2 ,  1 , -1};
const int dy[] = {-1 ,  1 ,  2 , 2 , 1 , -1 , -2 , -2};

inline bool inside(int i, int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

static void array_copy()
{
    int i, j;

    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            b[i][j] = a[i][j];

    cnt++;
}

static void backtrack(int i, int j, int step)
{
    int d, ni, nj;

    for(d = 0; d < 8; d++) {
        ni = i + dx[d];
        nj = j + dy[d];
        if(inside(ni, nj) && a[ni][nj] == 0) {
            a[ni][nj] = step;
            if(ni == n && nj == m && step > result) {
                result = step;
                array_copy();
            } else
                backtrack(ni, nj, step + 1);

            a[ni][nj] = 0;
        }
    }
}

int main(void)
{
    int i, j;

    fin >> n >> m;

    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            fin >> a[i][j], a[i][j] = -a[i][j];

    a[1][1] = 1;
    backtrack(1, 1, 2);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++)
            if(b[i][j] == -1)
                fout << 0 << " ";
            else
                fout << b[i][j] << " ";
        fout << '\n';
    }

    if(cnt == 0)
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= m; j++)
                fout << 0 << " ";
            fout << endl;
        }

    return 0;
}
