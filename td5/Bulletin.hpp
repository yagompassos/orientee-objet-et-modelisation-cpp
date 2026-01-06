#ifndef BULLETIN_H
#define BULLETIN_H

#include <string>
#include <iostream>

class Bulletin{
private: 
    std::string dateCreation;
public:
    Bulletin();
    virtual ~Bulletin();
    void afficherBulletin();
};

#endif