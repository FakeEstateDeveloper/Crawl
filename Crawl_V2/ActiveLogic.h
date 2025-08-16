// ActiveLogic.h
#ifndef ACTIVELOGIC_H
#define ACTIVELOGIC_H
// HEADERS
#include "PlayerClass.h"
#include "EnemyClass.h"
// LIBARARIES
#include <iostream>
#include <vector>
#include <random>

// INIT ENEMY
std::vector<std::string> enemies =
{
    "Slime slime"    
    // MORE ENEMIES...
};
// INIT HERE (enemies[i], then ...) (convert string to code maybe?)

// BATTLE LOGIC - TESTING
void BattleLogic()
{
    Player player;
    Slime slime;
    std::cout << "You took " << player.TakeDamage(slime.damage) << " damage";
}

#endif