#include <vector>
#include "Personne.hpp"

// inherits from Personne
class Etudiant : public Personne{
private:
    std::string matricule;
    std::vector<float> notes;

public: 
    Etudiant (std::string nom, std::string prenom, int age, Genre genre, std::string matricule);
    // NOT DESTRUCTOR METHOD NEEDED BECAUSE "VIRTUAL" DESTRUCTOR METHOD IN SUPERCLASS ALREADY DOES THE JOB
    // getters
    std::vector<float> getNotes();
    // methods
    void ajouterNote(float note);
    float calculMoyenne();
    std::string identifier();
};