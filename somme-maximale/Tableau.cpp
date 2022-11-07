#include "Tableau.hpp"
using namespace std;

Tableau::Tableau() : size(1)
{
    values.resize(1);
}

Tableau::Tableau(int n) : size(n)
{
    values.resize(n);
}

int Tableau::get_size()
{
    return size;
}

void Tableau::initialise()
{
    cout << "\n\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "\tEntrez la valeur d'indice " << i << " du tableau : ";
        cin >> values.at(i);
    }
}

void Tableau::print()
{
    cout << "\n\n\tAffichage des valeurs du tableau : [";

    for (int i = 0; i < values.size(); ++i)
    {
        if (i == values.size() - 1)
        {
            cout << values.at(i) << "]";
        }
        else
        {
            cout << values.at(i) << ", ";
        }
        
    }
    cout << "\n"; 

}

void Tableau::somme_max()
{
    int n = values.size();
    vector<int> S(n, 0);
    vector<int> ind(n, 0);
    vector<int> indices(2, 0);

    S.at(0) = values.at(0);
    ind.at(0) = 0;
    int max = values.at(0);

    for (int i = 1; i < n; ++i)
    {
        if (values.at(i) > values.at(i) + S.at(i-1))
        {
            S.at(i) = values.at(i);
            ind.at(i) = i;
        }
        else
        {
            S.at(i) = values.at(i) + S.at(i-1);
            ind.at(i) = ind.at(i-1);
        }

        if (S.at(i) >= max)
        {
            max = S.at(i);
            indices.at(0) = ind.at(i);
            indices.at(1) = i;
        }
    }

    
    cout << "\n\tLa somme maximale qu'on peut obtenir en additionnant des entrées consécutives du tableau est de " << max;
    cout << "\n\n\tIndice de début de la suite : " << indices.at(0);
    cout << "\n\tIndice de fin de la suite : " << indices.at(1);
    cout << "\n\n\tLa suite d'entrées consécutives du tableau dont la somme est maximale est : [";

    for (int i = indices.at(0); i <= indices.at(1); ++i)
    {
        if (i == indices.at(1))
        {
            cout << values.at(i) << "]";
        }
        else
        {
            cout << values.at(i) << ", ";
        }
        
    }
    cout << "\n\n"; 
}

