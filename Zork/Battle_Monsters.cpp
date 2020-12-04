#include "Battle_Monsters.h"
#include "game.h"
#include <iostream>
using namespace std;
void Battle_Monsters::MonstersBatt()
{
    game Player1;
    PlayerHP = Player1.HP;
    ATK = Player1.ATK;
    PlayerExp = Player1.Playersexperience;
    loot = Player1.loot;
    coins = Player1.coins;
    cout << endl<< "Monster HP: " << MonstersHP << endl;
    cout << endl << endl;
    do {
        MonstersAtk = rand() % 100;
        MonstersHP = MonstersHP - ATK;
        cout << "You attacked the Monster! It has " << MonstersHP << " left!" << endl;
        //        cout << "You have " << (LvlUpMax - experience) << " Experience Points to go, to Lvl up " << endl;

        coins += loot;
        cout << "You gained " << loot << " coins. You now have " << coins << " coins" << endl;
    } while (MonstersHP > 0 && PlayerHP > 0);
    if (MonstersHP <= 0)
    {
        Exp();
        Level();
        MonstersDeath();
    }
    else if (PlayerHP <= 0)
    {
        MonstersVictory();
    }
   

}
void Battle_Monsters::MonstersVictory()
{
    cout << R"( 
           ________                          ________                     
          /  _____ /_____    _____   ____    \_____  \___  __ ___________  ._. 
         /   \  ___ \__  \ /      \_/ __ \    /   |   \  \/ // __ \_  __ \ | |
         \    \_\  \/ __  \|  Y Y  \  ___/   /    |    \   /\  ___/|  | \/ | |
          \______  (____  /|__|_|  /\___  >  \_______  /\_/  \___  >__|     \|
                 \ /    \/       \/     \/           \/          \/         __
                                                                            \/       )";
}
void Battle_Monsters::MonstersDeath()
{
    cout << R"(
            _____.___.                       __      __ .__  ______               
            \__  |   | ____  __ __          /  \    /  \|__|/      \           
            /    |   |/  _  \|  |  \        \   \/\/   /|  |        \       
            \____    (  <_>  )  |  /         \        / |  |    |    \     
            / ______ |\____ /|___ /           \__/\  /  |__|____|    /      
            \ /                                    \/            \  /        
                                                                  \/         )" << '\n';

}
double Battle_Monsters::Exp()
{
    PlayerExp += 1;

    return PlayerExp;
}

double Battle_Monsters::Level()
{

    if (PlayerExp >= j)
    {
        Lvl += 1;
        PlayerExp = 0;
        LvlUpMax += 10;
        j++;
    }


    return Lvl;
}
             

