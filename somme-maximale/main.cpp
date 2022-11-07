#include <iostream>
#include "Tableau.hpp"
#include "Tableau.cpp"

using namespace std;

int main()
{
	int n; 
	cout << "\n\n\tQuelle est la taille du tableau d'entiers relatifs à traiter: ";
	cin >> n;

	Tableau tab_int(n); // on crée un tableau d'entiers de taille n  
	tab_int.initialise(); // on va entrer les n valeurs du tableau à traiter 
	tab_int.print(); // on affiche les valeurs de notre tableau
	tab_int.somme_max(); // on appelle la méthode somme_max pour connaître la somme maximale qu'on peut obtenir en additionnant des entrées consécutives du tableau
	
	return 0;

}