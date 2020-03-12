/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "smallCharacterFactory.h"

    SmallCharacter* SmallCharacterFactory::createCharacter(string& text_line)
    
    {
        string name;
        string size;
        double weight;
        int speed;
        double hairlen;
        string race;
        string skill;
        
        vector<string> parsed;
        istringstream iss(text_line);
        copy(istream_iterator<string>(iss), 
                istream_iterator<string>(),back_inserter(parsed));
        
        if (parsed.size() != 0)
        {
            name = parsed[0];
            //size = parsed[1];
            weight = stod(parsed[2]);
            speed = stoi(parsed[3]);
            hairlen = stod(parsed[4]);
            race = parsed[5];
            skill = (parsed[6]);
        }
        parsed.clear();
        return new SmallCharacter(name, weight, speed, hairlen, race, skill);
    }