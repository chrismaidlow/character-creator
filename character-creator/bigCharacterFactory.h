/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bigCharacterFactory.h
 * Author: Chris
 *
 * Created on February 25, 2019, 12:23 PM
 */

#ifndef BIGCHARACTERFACTORY_H
#define BIGCHARACTERFACTORY_H

#include "BigCharacter.h"
#include "characterFactory.h"
#include <string>
using namespace std;

class BigCharacterFactory: public CharacterFactory
{
public:  
    BigCharacter* createCharacter(string&);
    
    virtual ~BigCharacterFactory(){};
};



#endif /* BIGCHARACTERFACTORY_H */

