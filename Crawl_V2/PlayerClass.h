// PlayerClass.h
// DEFINE
#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
// LIBARARIES
#include <iostream>
#include <vector>
#include <random>

class Player
{
    public: // STATS
    int health = 100;
    int damage = 10;
    
    public: // STRING STATES
    std::string State = "Alive";

    // GET STATE
    std::string GetState()
    {
        return State;
    }

    // SET STATE
    void SetState(const std::string& setState)
    {
        State = setState;
    }

    // TAKE DAMAGE
    int TakeDamage(int enemyDamage)
    {
        health -= enemyDamage;
        if (health <= 0 && GetState() == "Alive")
        {
            SetState("Dead");
        }
        return health;
    }
};

#endif

/*
Player Characters:
1) Default
2) ...
*/