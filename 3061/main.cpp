#include <bits/stdc++.h>
using namespace std;

int matriz[1010][1010];
int eixo_x[] = {0,1,0,-1};
int eixo_y[] = {1,0,-1,0};

void flood_interativo(int x, int y, int N, int M)
{
    queue <pair<int, int> > fila;
    fila.push({x, y});
    while (!fila.empty())
    {
        pair <int, int> aux;
        aux = fila.front(); fila.pop();

        matriz[aux.first][aux.second] = 0;
        for (int i = 0;i < 4;i++)
        {
            int x_ = eixo_x[i] + aux.first;
            int y_ = eixo_y[i] + aux.second;
            if (x_ >= 0 && y_ >= 0 && x_ < N && y_ < M && matriz[x_][y_] != 0)
            {
                matriz[x_][y_] = 0;
                fila.push({x_, y_});
            }
        }
    }
}

int main()
{
    int N, M;
    scanf("%d %d",&N,&M);

    for(int i = 0;i < N;i++)
    {
        for (int j = 0;j < M;j++)
        {
            cin >> matriz[i][j];
        }
    }

    int cont = 0;
    for(int i = 0;i < N;i++)
    {
        for(int j = 0;j < M;j++)
        {
            if (matriz[i][j] == 1)
            {
                cont++;
                flood_interativo(i, j, N, M);
            }
        }
    }
    printf("%d\n", cont);
}