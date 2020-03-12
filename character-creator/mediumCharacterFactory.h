/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mediumCharacterFactory.h
 * Author: Chris
 *
 * Created on February 25, 2019, 12:23 PM
 */

#ifndef MEDIUMCHARACTERFACTORY_H
#define MEDIUMCHARACTERFACTORY_H

#include "MediumCharacter.h"
#include "characterFactory.h"
#include <string>
using namespace std;

class MediumCharacterFactory: public CharacterFactory
{
public:  
    MediumCharacter* createCharacter(string&);
    virtual ~MediumCharacterFactory(){};

};

#endif /* MEDIUMCHARACTERFACTORY_H */

