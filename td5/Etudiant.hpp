#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <vector>
#include "Personne.hpp"
#include "Bulletin.hpp"

class Cours;

// inherits from Personne
class Etudiant : public Personne{
private:
    std::string matricule;
    std::vector<float> notes;
    std::vector<Cours*> courses;
    Bulletin bulletin;
public: 
    Etudiant(const Etudiant & etu);
    Etudiant (std::string nom, std::string prenom, int age, Genre genre, std::string matricule);
    // NOT DESTRUCTOR METHOD NEEDED BECAUSE "VIRTUAL" DESTRUCTOR METHOD IN SUPERCLASS ALREADY DOES THE JOB
    // getters
    std::vector<float> getNotes();
    // methods
    void ajouterNote(float note);
    float calculMoyenne();
    std::string identifier();
    void ajouterCours(Cours* c);
    void afficherCoursSuivis();
};

#endif