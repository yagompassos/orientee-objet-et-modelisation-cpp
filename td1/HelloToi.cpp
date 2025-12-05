#include <iostream>
#include <string>


using namespace std;

int main() {

    string prenom, nom;
    int age;
    float taille, poids;

    cout << "Quel est votre prenom ?" << endl;
    cin >> prenom;
    cout << "Quel est votre nom ?" << endl;
    cin >> nom;
    cout << "Quel age avez vous?" << endl;
    cin >> age;
    cout << "Quel est votre Taille ? (en mètres)" << endl;
    cin >> taille;
    cout << "Quel est votre poids ? (en kilos)" << endl;
    cin >> poids;

    cout << endl << "__________________________________" << endl;
    cout << "Quel est votre prenom ? " << prenom << endl;
    cout << "Quel est votre nom ? " << nom << endl;
    cout << "Quel age avez vous ? " << age << endl;
    cout << "Quel est votre Taille (en mètres)? " << taille << endl;
    cout << "Quel est votre poids (en kilos)? " << poids << endl;
    cout << "__________________________________" << endl;
}