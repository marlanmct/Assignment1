/*
 * File:   OddSword.cpp
 * Author: Marlan <mm05f@my.fsu.edu>
 *
 * Created on February 3, 2019, 10:30 PM
 */

#include "OddSword.h"

double OddSword::hit(double armor) {
    double damage = 0;

    if(armor % 2 == 0)
      damage = hitpoints - armor;
    else
      damage = hitPoints;
    if (damage < 0) {
        return 0;
    }
    return damage;
}
