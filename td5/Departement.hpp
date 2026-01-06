#ifndef DEPARTEMENT_H
#define DEPARTEMENT_H

#include <string>
#include <iostream>
#include <vector>
#include "Etudiant.hpp"

class Departement{
private:
    std::string nomDept; 
    std::vector<Etudiant*> etudiants;
public:
    Departement(std::string nomDept);
    virtual ~Departement();

    void afficheDepartement();
    void ajouterEtudiant(Etudiant* e);
    int supprimerEtudiant(Etudiant* e);
    void afficherInfos();
};

#endif