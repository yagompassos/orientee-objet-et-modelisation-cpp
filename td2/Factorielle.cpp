#include <iostream>

using namespace std;

int factorielle (int n);

int main (){
    int n, res;

    n=-1;
    while (n < 0){
        cout << "Veuillez entrer un entier naturel : " << endl;
        cin >> n;
    }

    res = factorielle (n);
    cout << res << endl;
}

int factorielle (int n){
    if (n == 0) 
        return 1;
    else
        return n * factorielle (n-1);
}