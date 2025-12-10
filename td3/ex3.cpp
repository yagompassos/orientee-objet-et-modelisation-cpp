#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define DEFAULT_INC_SIZE 2

typedef struct note {
    char nom[9];     
    char prenom[9];
    float valeur;
} note;

typedef struct listeNotes {
    note * tableau;
    int nbmax;
    int nb;
    int inc;
} listeNotes;

void imprimerMenu();
void initialiser(listeNotes& liste, int inc);
void ajouterNote(listeNotes& liste, note n);
void agrandirTableau(listeNotes& liste);
void afficherTableau(listeNotes liste);
int isDuplicate(listeNotes liste, char * nom, char * prenom);
void supprimerNote(listeNotes &note, int index);
float moyenneNotes(listeNotes liste);

int main(){
    int op=0, index;
    float moy;

    listeNotes liste;
    initialiser(liste, DEFAULT_INC_SIZE);

    while (op!=5){
        imprimerMenu();
        cout << "Choisissez un option du menu:"<<endl;
        cin >> op;
        switch (op) {
            case 1 :
                note n;
                cout << "Quel est le nom du eleve? (max 9 char)" << endl;
                cin >> n.nom;
                cout << "Quel est son prenom? (max 9 char)" << endl;
                cin >> n.prenom;
                if (isDuplicate(liste, n.nom, n.prenom)) {
                    cout << "Cet eleve est deja enregistre avec une note." << endl;
                    break;
                }
                cout << "Quel est la note?" << endl;
                cin >> n.valeur;
                ajouterNote(liste, n);
                break;
            case 2:
                cout << endl;
                afficherTableau(liste);
                cout << endl;
                break;
            case 3:
                cout << "Quel est le nom du eleve a effacer? (max 9 char)" << endl;
                cin >> n.nom;
                cout << "Quel est son prenom? (max 9 char)" << endl;
                cin >> n.prenom;

                index = isDuplicate(liste, n.nom, n.prenom);
                if (!index) {
                    cout << "Cet eleve n est pas encore enregistre." << endl;
                    break;
                }
                supprimerNote(liste, index-1);
                break;
            case 4:
                moy = moyenneNotes(liste);
                cout << "La moyenne de notes est: " << moy << endl;
                break;
            case 5:
                break;
            default:
                cout << "Option invalide. Veuillez reesayer." << endl;
                break;
        }
    }
}

void imprimerMenu(){ 
    cout << endl << "Choisissez un option du menu:"<< endl;
    cout << "1. Ajouter une note." << endl;
    cout << "2. Afficher une liste de notes." << endl;
    cout << "3. Supprimer une note en tapant son nom et son pr´enom." << endl;
    cout << "4. Afficher la moyenne des notes." << endl;
    cout << "5. Quitter." << endl;
}

void initialiser(listeNotes& liste, int inc) {
    liste.tableau = new note[inc];
    liste.nbmax = inc;
    liste.nb = 0;
    liste.inc = inc;
    // cout << "Tableau de taille " << inc << "initialisé" << endl; // debug
}

void ajouterNote(listeNotes& liste, note n){
    int index = liste.nb;
    if (liste.nb == liste.nbmax) {
        agrandirTableau(liste);
    }
    liste.tableau[index] = n;
    liste.nb++;
    // cout << "note ajoute. nb=" << liste.nb<< " nbmax=" << liste.nbmax << endl; // debug

}

void agrandirTableau(listeNotes& liste) {
    int size = liste.nbmax;
    int inc = liste.inc;
    note * nouveauTableau = new note[size+inc];
    for (int i = 0; i<size; i++)
        nouveauTableau[i] = liste.tableau[i];
    free(liste.tableau);
    liste.tableau = nouveauTableau;
    liste.nbmax = size+inc;
    // cout << "Nouveau tableau a taille: " << sizeof(nouveauTableau)<< " et size+inc = "<< size+inc << endl; // debug
}

void afficherTableau(listeNotes liste){
    int size = liste.nb;
    note * tab = liste.tableau;

    cout << "Liste de Notes:" << endl;
    for (int i=0; i<size; i++) {
        cout << "Eleve: " << tab[i].prenom << " " << tab[i].nom << " - ";
        cout << "Note: " << tab[i].valeur << endl;
    }
}

int isDuplicate(listeNotes liste, char * nom, char * prenom){
    for (int i=1; i<=liste.nb; i++){
        if (string(nom) == string(liste.tableau[i-1].nom) && string(prenom) == string(liste.tableau[i-1].prenom)) {
            return i;
        } 
    }
    return 0;
}

void supprimerNote(listeNotes &note, int index){
    for (int i=index; i<note.nb-1; i++){
        note.tableau[i] = note.tableau[i+1];
    }
    note.nb--;
}

float moyenneNotes(listeNotes liste){
    double sum=0;
    float res;
    for (int i=0; i<liste.nb; i++){
        sum += double(liste.tableau[i].valeur);
    }
    
    res = float(sum/liste.nb);
    return res;
}