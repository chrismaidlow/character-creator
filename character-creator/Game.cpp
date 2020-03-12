/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Game.h"

void Game::createSisters()
{
        ifstream file(filename);
        string line;
        string size;
        
        while(getline(file, line))
        {
            //figure out proper factory size
            size = getSize(line);
            if (size == "small")
            {
               SmallCharacter* smallChar;
               SmallCharacterFactory factory;
               smallChar = factory.createCharacter(line);
               //(*smallChar).PrintCharacter();
               characterVector.push_back(smallChar);
               //append sister pointer to vector
            }
            else if (size == "med")
            {
               MediumCharacter* medChar;
               MediumCharacterFactory factory;
               medChar = factory.createCharacter(line);
               characterVector.push_back(medChar);
            }
            else
            {
               BigCharacter* bigChar;
               BigCharacterFactory factory;
               bigChar = factory.createCharacter(line);
               characterVector.push_back(bigChar);
                //append sister pointer to vector
            }
        }
    
}

void Game::printSisters()
{
        
        for(vector<Character*>::size_type i = 0; i != characterVector.size(); i++) 
        {
            (*(characterVector[i])).PrintCharacter();
        }
        
}

void Game::sort(string key)
{
       bool sorted = false;
        int n = this->characterVector.size();       
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(smaller(i-1, i, key)){
                    swap(i-1,i);
                    sorted = false;
                    }
                }
                n--;
            }
}  

bool Game::smaller(int i, int j, string key)
    {
        if (key == "race")
        {
            if(((*(this->characterVector[i])).GetRace()) > (*(this->characterVector[j])).GetRace()){return true;}
            
            else{return false;}
        }
        else if (key == "hair")
        {   
            if(((*(this->characterVector[i])).GetHairLength()) > (*(this->characterVector[j])).GetHairLength()){return true;}
            
            else{return false;}  
        }
        else if (key == "speed")
        {
            if(((*(this->characterVector[i])).GetSpeed()) > (*(this->characterVector[j])).GetSpeed()){return true;}
            
            else{return false;}
        }
        else
        {
            if(((*(this->characterVector[i])).GetName()) > (*(this->characterVector[j])).GetName()){return true;}
            
            else{return false;}
        }    
    }
  
void Game::swap(int i, int j)
{
        Character temp = *(this->characterVector[i]);
        *(this->characterVector[i])=*(this->characterVector[j]);
        *(this->characterVector[j])=temp;
}

string Game::getCharacters()
{
         cout << "***********PRINTING SISTERS**************" << endl;
         
         sort("name");
         printSisters();
         
         cout << "*********** ************** **************" << endl;
         cout << endl;
        
}
string Game::getCharactersByRace()
{

         cout << "***********PRINTING SISTERS: Order by Race**************" << endl;
         
         sort("race");
         printSisters();
         
         cout << "*********** ************** **************" << endl;
         cout << endl;
        
}

string Game::getCharactersByHair()
{
        cout << "***********PRINTING SISTERS: Order by Hair**************" << endl;
        sort("hair");
        printSisters();
        cout << "*********** ************** **************" << endl;
        cout << endl;
        
}
   
string Game::getCharactersBySpeed()
{
        cout << "***********PRINTING SISTERS: Order by Speed**************" << endl;
        sort("speed");
        printSisters();
        cout << "*********** ************** **************" << endl;
        cout << endl;
}
       
string Game::getSize(const string& text_line)
{

        string size;
        vector<string> parsed;
        istringstream iss(text_line);
        copy(istream_iterator<string>(iss), 
                istream_iterator<string>(),back_inserter(parsed));
        
        if (parsed.size() != 0)
        {
            size = parsed[1];
        }
        parsed.clear();
        return size;
}    