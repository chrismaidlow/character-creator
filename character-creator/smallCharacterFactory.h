/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   smallCharacterFactory.h
 * Author: Chris
 *
 * Created on February 25, 2019, 12:23 PM
 */

#ifndef SMALLCHARACTERFACTORY_H
#define SMALLCHARACTERFACTORY_H

#include "SmallCharacter.h"
#include "characterFactory.h"
#include <string>
using namespace std;

class SmallCharacterFactory: public CharacterFactory {
public:  
    
    SmallCharacter* createCharacter(string&);
    virtual ~SmallCharacterFactory(){};
};



#endif /* SMALLCHARACTERFACTORY_H */

