/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "MediumCharacter.h"

void MediumCharacter::PrintCharacter() const{
        cout<< left << "Name: "<< setw(20) << Name ;
        cout<< right << "Size: med" << setw(20);
        cout<<"Weight: "<< Weight<< setw(20);
        cout<<"Speed: "<<Speed<< setw(20);
        cout<< "Hair Length: " << HairLength<< setw(20);
        cout<<"Race: " << Race<< setw(20);
        cout<< right << "Weapon: "<<MeleeWeapon<< endl;
    }