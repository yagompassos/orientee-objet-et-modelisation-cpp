#include <iostream>
#include <vector>

using namespace std;

int syracuse(int p);

int main (){
    int p, n;

    cout << "Donner P : " << endl;
    cin >> p;
    cout << "Les termes de la suite allant a cet indice sont : " ;

    n = syracuse(p);

    cout << "Le plus petit indice pour lequel la suite de Syracuse de "<<p<<" atteint 1 est " << n << "." << endl;
}

int syracuse(int p){
    int i, last, u;

    last = p;
    i=1;
    while (u!=1){
        if (last%2==0)
            u = last/2;
        else 
            u = 3*last+1;
        
        last = u;
        i++;
        if (u!=1)
            cout << u << " - ";
        else
            cout << u << endl;
    }
    return --i;
}
