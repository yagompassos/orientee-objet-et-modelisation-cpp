#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct note {
    string nom;   
    string prenom;
    float valeur;
} note;

typedef struct listeNotes {
    vector<note> tableau;
    int nbmax;
    int nb;
    int inc;
} listeNotes;

int main(){

}