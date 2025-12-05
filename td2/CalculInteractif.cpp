#include <iostream>
#include <vector>

using namespace std;

int factorielle (int n);
vector<int> fib(int n); 
int syracuse(int p);
void imprime_menu();

int main (){
    int op, n, p;

    do {
        imprime_menu();
        cin >> op;

        cout << "Votre choix : " << op << endl;

        switch(op) {
            case 0:
                cout << "Ending program." << endl;
                break;
            case 1:
                n=-1;
                while (n < 0){
                    cout << "Veuillez entrer un naturel : " << endl;
                    cin >> n;
                }
                cout << factorielle (n) << endl;
                break;
            case 2: {
                n=-1;
                while (n<1){
                    cout << "Veuillez entrer un naturel : " << endl;
                    cin >> n;
                }
                vector<int> suite_fib = fib(n);
                cout << "Les " << n << " premiers nombres de Fibonacci sont : ";
                for (int i=0; i<n-1; i++)
                    cout << suite_fib[i] << " - ";
                cout << suite_fib[n-1];
                break;
            }
            case 3:
                cout << "Donner P : " << endl;
                cin >> p;
                cout << "Les termes de la suite allant a cet indice sont : " ;
                n = syracuse(p);
                cout << "Le plus petit indice pour lequel la suite de Syracuse de "<<p<<" atteint 1 est " << n << "." << endl;
                break;
            default:
                cout << "Valeur non trouvé, Veuillez choisir entre 1 a 3 ou 0 pour sortir." << endl;
        }
    } while (op != 0);
}

void imprime_menu(){
    cout << "Veuillez choisir une operation :"<< endl;
    cout << "1 - Factorielle" << endl;
    cout << "2 - Fibonacci" << endl;
    cout << "3 - Syracuse" << endl;
    cout << "0 - Sortir" << endl;
}

int factorielle (int n){
    if (n == 0) 
        return 1;
    else
        return n * factorielle (n-1);
}

vector<int> fib (int n) {
    vector<int> suite_fib(n);

    suite_fib[0] = 0;
    if (n>1) {
        suite_fib[1] = 1;
        for (int i=2; i<n; i++){
            suite_fib[i] = suite_fib[i-1] + suite_fib[i-2];
        }
    }

    return suite_fib;
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
