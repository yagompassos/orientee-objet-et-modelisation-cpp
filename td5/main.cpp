#include <iostream>
#include "EtudiantAvecBonus.hpp"

int main() {
    EtudiantAvecBonus eb("Tony","Stark", 20, M,"MAT456");
    eb.ajouterNote(10);
    eb.ajouterNote(12);
    std::cout << "Moyenne avec bonus: " << eb.calculMoyenne() << std::endl;

    return 0;
}