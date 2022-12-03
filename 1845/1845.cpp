#include <bits/stdc++.h>
using namespace std;

int main()
{
    char texto;
    bool gamb = true;
    int vet[200];

    for (int i = 0;i < 200;i++)
        vet[i] = 0;

    vet[66] = 70; vet[74] = 70; vet[80] = 70; vet[83] = 70; vet[86] = 70; vet[88] = 70; vet[90] = 70; vet[70] = 70;
    vet[98] = 102; vet[106] = 102; vet[112] = 102; vet[115] = 102; vet[118] = 102; vet[120] = 102; vet[122] = 102; vet[102] = 102;
    
    while(scanf("%c",&texto) != EOF)
    {
        int aux = (int)texto;
        if(vet[aux])
        {
            if(gamb)
            {
                printf("%c", vet[aux]);
                gamb = false; 
            }
        }
        else
        {
            gamb = true;
            printf("%c", texto);
        }
    }
}