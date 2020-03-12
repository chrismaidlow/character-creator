/* 
 * File:   MediumCharacter.h
 * Author: woodhann
 *
 * Created on February 25, 2019, 2:31 PM
 */

#ifndef MEDIUMCHARACTER_H
#define	MEDIUMCHARACTER_H
#include"Character.h"
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class MediumCharacter: public Character{
public:
    MediumCharacter(string name, double weight, int speed, double hairlength,
            string race, string weapon): Character(name, weight,speed, hairlength,race),
            MeleeWeapon(weapon){};
            
    void SetMeleeWeapon(string weapon){MeleeWeapon = weapon;}
    void PrintCharacter() const; 

    MediumCharacter& operator=(const MediumCharacter& medCharacter)
    {
        if(this != &medCharacter)
        {
            Name = medCharacter.Name;
            HairLength = medCharacter.HairLength;
            Speed = medCharacter.Speed;
            Weight = medCharacter.Weight;
            Race = medCharacter.Race;
            MeleeWeapon = medCharacter.MeleeWeapon;
               
        }     
    }
    
    virtual ~MediumCharacter(){};
    
private:
    string MeleeWeapon;
};

#endif	/* MEDIUMCHARACTER_H */

