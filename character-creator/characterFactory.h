/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   characterFactory.h
 * Author: Chris
 *
 * Created on February 25, 2019, 12:23 PM
 */

#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H

#include "character.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;

class CharacterFactory
{
public:
    
    virtual Character* createCharacter(string& text_line)= 0;
    
    virtual ~CharacterFactory(){};


};    

#endif /* CHARACTERFACTORY_H */

