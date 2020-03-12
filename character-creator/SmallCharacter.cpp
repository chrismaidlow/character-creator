/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "SmallCharacter.h"

 void SmallCharacter::PrintCharacter()const {
        cout << left <<"Name: " << setw(20)<< Name;
        cout<< right << "Size: small" << setw(20);
        cout<< "Weight: "<< Weight << setw(20);
        cout<< "Speed: "<<  Speed << setw(20);
        cout<< "Hair Length: "<< HairLength<< setw(20);
        cout<< "Race: "<< Race<< setw(20);
        cout<< right << "IsEquipped: "<< Gun << endl;
    }
 
 bool SmallCharacter::equip_weapon(){
        bool b1 = true;
        bool b2 = false;
        if (Gun != "None"){
            return b1;
        }
        return b2;
       
    }