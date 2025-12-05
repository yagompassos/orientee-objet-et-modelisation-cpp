#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int a, b, c;
    double delta, sol1, sol2;

    cout << "Veuillez entrer les coefficients de l equation de seconde degree (a, b et c)" << endl;
    cout << "a = "; cin >> a;
    while (a==0) {
        cout << "Il faut que 'a' soit different de zero, sinon cela n'est pas une equation de seconde degre" << endl;
        cin >> a;
    }
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if (a == 0) {
        return 1;
    }

    delta = b^2 - 4*a*c;

    if (delta < 0) {
        cout << "Il n'y a pas les racines dans le domain reel" << endl;
        return 1;
    }

    sol1 = (-b + sqrt(delta)) / 2*a;
    sol2 = (-b - sqrt(delta)) / 2*a;

    cout << "Le discriminant est: Delta = " << delta << endl;
    if (sol1 != sol2) {
        cout << "L equation admet 2 solucions reelles: x1 = " << sol1 << "et x2 = " << sol2 << endl;
    } else {
        cout << "L equation a un seule solution reelle : x = " << sol1 << endl;
    }
}