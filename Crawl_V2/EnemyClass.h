// EnemyClass.h
// DEFINE
#ifndef ENEMYCLASS_H
#define ENEMYCLASS_H
// LIBARARIES
#include <iostream>
#include <vector>
#include <random>

class Enemy
{
    public: // STATS
    int health = 20;
    int damage = 5;

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
    int TakeDamage(int playerDamage)
    {
        health -= playerDamage;
        if (health <= 0 && GetState() == "Alive")
        {
            State = "Dead";
        }
        return health;
    }
};

class Slime : public Enemy
{
    // ...
};

#endif

/*
Enemy List:
1) Slime
2) ...
*/