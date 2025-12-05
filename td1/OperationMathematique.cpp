#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a, b;
    float pi = 3.14159265;

    cout << "Saisir un premiere nombre reel : " << endl;
    cin >> a;
    
    cout << "Saisir un deuxieme nombre reel : " << endl;
    cin >> b;

    cout << "La somme est : " << a+b << endl;
    cout << "La difference est : " << a-b << endl;
    cout << "Le produit est : " << a*b << endl;

    if (b == 0) {
        cout << "Division par zero impossible." << endl;
    } else {
        cout << "La division est : " << a/b << endl;
    }

    if (a < 0) {
        cout << "Racine de chiffre negatif impossible." << endl;
    } else {
        cout << "La racine carre de " << a << "est egale a " << sqrt(a) << endl;
    }
    if (b < 0) {
        cout << "Racine de chiffre negatif impossible." << endl;
    } else {
        cout << "La racine carre de " << b << "est egale a " << sqrt(b) << endl;
    }    
    
    cout << "La circonference du circle de rayon" << a << "est " << 2*pi*a << endl;
    cout << "La circonference du circle de rayon" << b << "est " << 2*pi*b << endl;
}