#include <iostream>
#include "Etudiant.hpp"

Etudiant::Etudiant() : nom("Maxime"), prenom("charles"), age(50) { // Direct affection, we instantiate each attribute with the default values
    std::cout << "L etudiant "<< prenom << " " << nom << " est inscrit et il a deja " << age << " ans." << std::endl;
}

Etudiant::~Etudiant() { // No need to put "virtual" in here, hpp already knows it's virtual and here is just the implementation (compilor already knows its virtual bcs of hpp)
    // The "~" creates by itself the destructor, no need do use "delete" or "delete[]". 
    std::cout << "RIP " << prenom << " " << nom << std::endl;
}
