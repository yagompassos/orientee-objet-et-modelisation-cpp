#include <iostream>
#include "EtudiantAvecBonus.hpp"

EtudiantAvecBonus::EtudiantAvecBonus(std::string nom, std::string prenom, int age, Genre genre, std::string matricule) : Etudiant(nom, prenom, age, genre, matricule), bonus(5) {}

float EtudiantAvecBonus::calculMoyenne(){
    double sum=bonus;
    std::vector<float> notes = Etudiant::getNotes();
    for (float note : notes)
        sum += note; 
    return sum/notes.size();
}