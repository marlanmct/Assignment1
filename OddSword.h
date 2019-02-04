/*
 * File:   OddSword.h
 * Author: Marlan <mm05f@my.fsu.edu>
 *
 * Created on February 3, 2019, 10:30 PM
 */

#include <string>
#include "Weapon.h"

#ifndef ODDSWORD_H
#define ODDSWORD_H

/**
 * Defines the behavior of an odd sword (hitpoint = 69, ignores all
 * armor points if armor value is odd, else ignores 50% of it)
 */
class OddSword : public Weapon {
public:

    OddSword() : Weapon("Odd Sword", 69.0) { //Calls Weapon(name, hitpoints) constructor with values Odd Sword and 69.0
    }

    virtual ~OddSword() {};

    virtual double hit(double armor);

};

#endif /* ODDSWORD_H */
