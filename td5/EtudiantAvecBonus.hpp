#ifndef ETUDIANTAVECBONUS_H
#define ETUDIANTAVECBONUS_H
#include "Etudiant.hpp"

class EtudiantAvecBonus : public Etudiant {
private:
    float bonus;
public:
    EtudiantAvecBonus (std::string nom, std::string prenom, int age, Genre genre, std::string matricule);
    float calculMoyenne();
};

#endif