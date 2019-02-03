/*
 * File:   SimpleHammer.h
 * Author: Marlan<mm05f@my.fsu.edu>
 *
 * Created on February 3, 2019, 3:20 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */
