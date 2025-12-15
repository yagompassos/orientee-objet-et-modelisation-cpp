# ifndef ETUDIANT_H
# define ETUDIANT_H

#include <string>

enum Genre {
    MASCULIN,
    FEMININ
};

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    unsigned int age;
    Genre genre;

public:
    Etudiant();              // Constructor
    Etudiant(std::string prenom, std::string nom); // Constructor overcharge to accept parameters
    Etudiant(std::string prenom, std::string nom, unsigned int age); 
    Etudiant(std::string prenom, std::string nom, unsigned int age, Genre genre);
    Etudiant(const Etudiant & etu);

    virtual ~Etudiant();    // Destructor (Using virtual because TD asks, probably going to be a mother class for polymorphism later)
    std::string getNom();
    std::string getPrenom();
    unsigned int getAge(); 
    Genre getGenre();
    void setNom(std::string nouvelNom);
    void setPrenom(std::string nouvelPrenom);
    void setAge(unsigned int nouvelAge);
    void setGenre(Genre nouveauGenre);
    void afficherInfos();
};

#endif