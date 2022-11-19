#include <bits/stdc++.h>
using namespace std;

int main()
{
    string texto;

    while (getline(cin, texto))
    {
        set <char> auxiliar;
        set <char>::iterator it;
        
        if(!texto.size())
        {
            puts("");
            continue;
        }
        auxiliar.insert('~');
        for (int i = 0;i < (int)texto.size();i++)
            if(texto[i] != ' ')
                auxiliar.insert(texto[i]);

        it = auxiliar.begin();
        int caracter_anterior = (int)*it;
        string final_aux =  "", final = "";
        
        final_aux = *it; final_aux += ":";
        
        for (it++;it != auxiliar.end();it++)
        {
            string conversao = "";
            int aux = (int)*it;
            if(caracter_anterior != aux - 1 || *it == '~')
            {
                conversao = caracter_anterior;
                final_aux += conversao;
                final += final_aux;
                if(*it != '~')
                    final += ", ";
 
                final_aux = *it; final_aux += ":";
            }

            caracter_anterior = *it;
        }
        cout << final << endl;
    }
}