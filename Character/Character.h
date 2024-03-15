//
// Created by sheko on 14/03/2024.
//

#ifndef RPGGAMENEW_CHARACTER_H
#define RPGGAMENEW_CHARACTER_H
#include<string>


#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
private:
    std::string name;
    int health;
    int attack;
    int defense;
    int agility;

public:
    Character(std::string name, int health, int attack, int defense, int agility);

    std::string getName() const;
    int getHealth() const;
    int getAttack() const;
    int getDefense() const;
    int getAgility() const;

    void setHealth(int health);
};

#endif // CHARACTER_H






#endif //RPGGAMENEW_CHARACTER_H
