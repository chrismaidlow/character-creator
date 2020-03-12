
#ifndef BIGCHARACTER_H
#define BIGCHARACTER_H

/* 
 * File:   BigCharacter.h
 * Author: woodhann
 *
 * Created on February 25, 2019, 3:07 PM
 */

#include"Character.h"
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class BigCharacter: public Character{
public:
    BigCharacter(string name, double weight, int speed, double hairlength,
            string race, string skills): Character(name,weight,speed,hairlength,race),
                    SpecialSkills(skills){};
    void SetSpecialSkills(string skills){SpecialSkills = skills;}
    string GetSpecialSkills() const{return SpecialSkills;}
    void PrintCharacter()const;
    
    BigCharacter& operator=(const BigCharacter& bigCharacter)
    {
        if(this != &bigCharacter)
        {
            Name = bigCharacter.Name;
            HairLength = bigCharacter.HairLength;
            Speed = bigCharacter.Speed;
            Weight = bigCharacter.Weight;
            Race = bigCharacter.Race;
            SpecialSkills = bigCharacter.SpecialSkills;
               
        }     
    }
     
    virtual ~BigCharacter(){};
    
private:
    string SpecialSkills;
};

#endif	/* BIGCHARACTER_H */

