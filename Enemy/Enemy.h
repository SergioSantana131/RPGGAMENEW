//
// Created by sheko on 14/03/2024.
//

#ifndef RPGGAMENEW_ENEMY_H
#define RPGGAMENEW_ENEMY_H




#ifndef ENEMY_H
#define ENEMY_H

#include "../Character/Character.h"


class Enemy : public Character {
public:
    Enemy(std::string name, int health, int attack, int defense, int agility);
};

#endif // ENEMY_H


#endif //RPGGAMENEW_ENEMY_H



