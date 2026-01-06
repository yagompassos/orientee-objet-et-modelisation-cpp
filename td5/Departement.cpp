#include "Departement.hpp"

Departement::Departement(std::string nomDept) : nomDept(nomDept) {};
Departement::~Departement() {
    std::cout << "ERASED " << nomDept << std::endl;
}

void Departement::afficheDepartement(){
    std::cout << "Departement: " << nomDept << std::endl;
}

void Departement::ajouterEtudiant(Etudiant* e){
    etudiants.push_back(e);
}

int Departement::supprimerEtudiant(Etudiant* e){
    for (auto it = etudiants.begin(); it != etudiants.end(); ++it){
        if (*it == e) // content in i == e
            etudiants.erase(it); 
            return 0;
    }
    return 1;
}

void Departement::afficherInfos(){
    std::cout << "Departement: " << nomDept << std::endl;
    short i=1;
    for (auto e : etudiants){
        std::cout << i << " etudiant matricule: " << e->identifier() << " avec Moyenne: " << e->calculMoyenne() << std::endl;
        i++;
    }
}