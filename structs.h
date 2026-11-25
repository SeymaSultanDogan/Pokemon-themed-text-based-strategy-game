#ifndef STRUCTS_H
#define STRUCTS_H



struct TypeEffect{
    char atkName[50];
    char defName[50];
    double multiplier;
};


struct Type{
    char name[50];
    struct TypeEffect effects[19];
};


enum MoveCategory{
    PHYSICAL,
    SPECIAL
};


struct Move{
    char name[50];
    struct Type type;
    enum MoveCategory category;
    int power;
    int range;
};


struct Position{
    int x;
    int y;
};


struct Pokemon{
    char name[50];
    struct Type types[2];
    int maxHP;
    int currentHP;
    int attack;
    int defense;
    int spAtk;
    int spDef;
    int speed;
    struct Move moves[4];
};


struct Player{
    char name[50];
    struct Pokemon Pokemons[6];
    int currentIndex;
    struct Position position;
};


struct RoundLog{
    int roundNumber;
    char summary[200];  
};

#endif

