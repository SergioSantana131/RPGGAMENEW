//
// Created by sheko on 14/03/2024.
//

#include "Character.h"

#include "Character.h"

Character::Character(std::string name, int health, int attack, int defense, int agility)
        : name(name), health(health), attack(attack), defense(defense), agility(agility) {}

std::string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

int Character::getAttack() const {
    return attack;
}

int Character::getDefense() const {
    return defense;
}

int Character::getAgility() const {
    return agility;
}

void Character::setHealth(int health) {
    this->health = health;
}
