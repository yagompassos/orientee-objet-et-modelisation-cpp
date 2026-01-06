#include <iostream>
#include "Cours.hpp"
#include "Etudiant.hpp" 

Cours::Cours() : codeCours(0), nomCours("remplir") {}
Cours::Cours(int codeCours, std::string nomCours): codeCours(codeCours), nomCours(nomCours) {}

Cours::~Cours (){
    std::cout << "ERASED " << nomCours << std::endl;
}

void Cours::afficherCours(){
    std::cout << "Cours: " << nomCours << " Code: " << codeCours << std::endl;
}

void Cours::inscrire(Etudiant* e){
    e->ajouterCours(this);
    etudiants.push_back(e);
}

void Cours::afficherEtudiants(){
    std::cout << "Etudiants inscrits dans le cours "<< nomCours << std::endl;
    for (auto e : etudiants) {
        std::cout << e->identifier() << std::endl;
    }
}