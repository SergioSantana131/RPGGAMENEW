//
// Created by sheko on 14/03/2024.
//

#ifndef RPGGAMENEW_CHARACTER_H
#define RPGGAMENEW_CHARACTER_H
#include<string>

using namespace std;

class Character {
protected:
    string name;
    int health;
    int attack;
    int defense;
    int speed;

public:
    Character(string, int, int, int, int);
    void setName(string);
    string getName();
    void setHealth(int);
    int getHealth();
    void setAttack(int);
    int getAttack();
    void setDefense(int);
    int getDefense();
    void setSpeed(int);
    int getSpeed();
    string toString();
};






#endif //RPGGAMENEW_CHARACTER_H
