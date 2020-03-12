/* 
 * File:   SmallCharacter.h
 * Author: woodhann
 *
 * Created on February 25, 2019, 2:09 PM
 */

#ifndef SMALLCHARACTER_H
#define	SMALLCHARACTER_H
#include"character.h"
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class SmallCharacter: public Character{
public:
    SmallCharacter(string name, double weight, int speed, double hairlength, string
    race, string gun): Character(name, weight, speed, hairlength, race),
            Gun(gun){};
    void SetGun(string gun) {Gun = gun;}
    bool equip_weapon();
    string GetGun() const{return Gun;}
    void PrintCharacter()const;
    
    SmallCharacter& operator=(const SmallCharacter& smallCharacter)
    {
        if(this != &smallCharacter)
        {
            Name = smallCharacter.Name;
            HairLength = smallCharacter.HairLength;
            Speed = smallCharacter.Speed;
            Weight = smallCharacter.Weight;
            Race = smallCharacter.Race;
            Gun = smallCharacter.Gun;
               
        }     
    }
    
    virtual ~SmallCharacter(){};
    
private:
    string Gun;
    
};


#endif	/* SMALLCHARACTER_H */

