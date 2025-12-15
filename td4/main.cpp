#include <iostream>
#include "Etudiant.hpp"
#include <string>

int main (){
    Etudiant ET1("Stark", "Tony", 20, FEMININ); // this calls the constructor Etudiant()
    Etudiant ET2("Georges","MacFly", 47);
    Etudiant ET3(ET2);          // constructeur par copie

    
    ET2.setAge(47-(1985-1955));
    std::cout << "En 1985: " << ET2.getNom() << " " << ET2.getPrenom() << " "
    << ET2.getAge() << std::endl;
    std::cout << "En 1955: " << ET2.getNom() << " " << ET3.getPrenom() << " "
    << ET3.getAge() << std::endl;
    
    ET1.afficherInfos();

    Etudiant *etu = new Etudiant("Stephane","Curry", 37);
    etu->setNom("Max");
    etu->afficherInfos();

    Etudiant **tableau = new Etudiant*[3];
    tableau[0] = new Etudiant("henrique", "freitas");
    tableau[1] = new Etudiant ("marcela", "gusman", 78, FEMININ);
    tableau[2] = new Etudiant ("khalid", "khashmiri", 27, FEMININ);

    for (int i=0; i<3; i++) {
        tableau[i]->afficherInfos();
        delete tableau[i];
    }

    delete etu;

    ET1.setGenre(MASCULIN);
    if (ET1.getGenre() == MASCULIN)
        std::cout << "nouveau genre est MASCULIN: " << ET1.getGenre() << std::endl;
        
    return 0; // At the end, the destructor "~Etudiant()" it's called automatically.
}