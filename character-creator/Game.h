/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   game.h
 * Author: Chris
 *
 * Created on February 25, 2019, 12:22 PM
 */

#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include "smallCharacterFactory.h"
#include "bigCharacterFactory.h"
#include "mediumCharacterFactory.h"
#include "characterFactory.h"
using namespace std;

class Game{
    
protected:
    
    vector <Character*> characterVector;
    string filename;
    
    void createSisters();
    
    void printSisters();

    void sort(string);

    bool smaller(int, int, string);

    void swap(int, int );
    
    string getSize(const string&);

    
public:
    
    Game(const string& file)
    {
        filename = file;
        createSisters();
    }
    
    string getCharacters();

    string getCharactersByRace();

    string getCharactersByHair();

    string getCharactersBySpeed();

};

#endif /* GAME_H */

