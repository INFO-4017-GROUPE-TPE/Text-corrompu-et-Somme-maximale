#ifndef DEF_TABLEAU
#define DEF_TABLEAU

#include <string>
#include <vector>

class Tableau
{
    public:

    Tableau();
    Tableau(int n);
    void initialise();
    void print();
    void somme_max();
    std::vector<int> get_values();
    int get_size();
    
    private:

    int size;
    std::vector<int> values;    
};

#endif


