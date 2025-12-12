# ifndef ETUDIANT_H
# define ETUDIANT_H

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    unsigned int age;

public:
    Etudiant();              // Constructor
    virtual ~Etudiant();    // Destructor (Using virtual because TD asks, probably going to be a mother class for polymorphism later)
};

#endif