#include "Bulletin.hpp"

Bulletin::Bulletin() : dateCreation("05/01/2026") {};
Bulletin::~Bulletin(){
    std::cout << "ERASED Bulletin" << std::endl;
}