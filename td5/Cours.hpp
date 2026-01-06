#ifndef COURS_H
#define COURS_H

#include <string>
#include <vector>

class Etudiant;

class Cours {
private:
    int codeCours;
    std::string nomCours;
    std::vector<Etudiant*> etudiants;
public:
    Cours();
    Cours(int codeCours, std::string nomCours);
    virtual ~Cours();

    void afficherCours();
    void inscrire(Etudiant* e);
    void afficherEtudiants();
};

#endif