/* 
 * File:   Character.h
 * Author: woodhann
 *
 * Created on February 25, 2019, 2:04 PM
 */


#ifndef CHARACTER_H
#define	CHARACTER_H
#include <vector>
#include <iostream>
using namespace std;

class Character {
public:
    
    ///constructor
    Character(string name, double weight, int speed,double hairlength, string race):
    Name(name),Weight(weight), Speed(speed), HairLength(hairlength), Race(race){}
    
    ///getters
    string GetName() const{ return Name;}
    double GetWeight() const{return Weight;}
    int GetSpeed() const{return Speed;}
    double GetHairLength() const{return HairLength;}
    string GetRace() const{return Race;}
    
    ///setters
    void SetName(string name) {Name = name;}
    void SetWeight(double weight) {Weight = weight;}
    void SetSpeed(int speed) {Speed = speed;}
    void SetHairLenght(double length) {HairLength = length;}
    void SetRace(string race) {Race = race;}
   
    virtual void PrintCharacter() const {};
    
    Character& operator=(const Character& character)
    {
        if(this != &character)
        {
            Name = character.Name;
            HairLength = character.HairLength;
            Speed = character.Speed;
            Weight = character.Weight;
            Race = character.Race;
        }     
    }
    ///destructor
    virtual ~Character(){};
    
protected:
    string Name;
    double Weight;
    int Speed;
    double HairLength;
    string Race;
};
#endif	/* CHARACTER_H */