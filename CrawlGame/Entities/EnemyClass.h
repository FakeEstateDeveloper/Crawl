// EnemyClass.h
#ifndef ENEMYCLASS_H
#define ENEMYCLASS_H

/*
Enemy List:
1) Slime
2) ...
*/

class Enemy
{
    public:
    int health = 20;
    int damage = 5;

    public:
    bool lifeState = true;
};

class Slime : public Enemy
{
    // CLASS CODE HERE...
}

#endif