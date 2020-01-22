#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include<stdlib.h>
using namespace std;
void automated(int att, int drop, int lev);



string name;

int playerHP = 200;
int playerEXP = 0;
int playerLevel[100];
int playerReflect = 0;
int Exp = 1;
bool automat = false;
int coins = 0;
int dragonHP = 3000;

string droplings[6]{ "tunicLv1", "pantsLv1",
"NecklaceLv1",
"BraceletLv1",
"BootsLv1",
"HelmLv1",
};
string LevelOne[6]{ "tunicLv1", "pantsLv1","NecklaceLv1","BraceletLv1","BootsLv1","HelmLv1",};
string LevelTwo[6]{ "tunicLv2", "pantsLv2","NecklaceLv2","BraceletLv2","BootsLv2","HelmLv2",};
string LevelThree[6]{ "tunicLv3", "pantsLv3","NecklaceLv3","BraceletLv3","BootsLv3","HelmLv3",};
string inventory[60];
int a = 0;
string choice;
//srand(time(NULL));

void automated(int att, int drop, int lev)
{
    for (int l = 0; l < 10; l++)
    {
        cout << l << "..." << endl;
        dragonHP = dragonHP - att;

        int loot = 10;
        cout << "You attacked the dragon! It has " << dragonHP << " left!" << endl;
        cout << playerEXP << endl << Exp << endl;
        playerEXP += Exp;
        cout << "You gained " << Exp << " Experience Point. You now have " << playerEXP << " Points" << endl;
        cout << "You have " << (1000 - playerEXP) << " Experience Points to go to level up " << endl;
        cout << "You gained " << loot << " coins. You now have " << coins << " coins" << endl;
        coins += loot;

        if (drop > 90)
        {
            cout << endl << "The dragon has dropped some Adventurer items!" << endl;
            //  for (int i = 0; i < 1; i++)
             // { 
            int i = rand() % 6;
            if (lev == playerLevel[1])
            {
                for (int h = 0; h < 1; h++)
                {
                    int lvl2 = rand() % 6 + 1;
                    cout << endl << "You have recieved : " << LevelTwo[lvl2] << endl;
                    inventory[a] += LevelThree[lvl2];

                }
            }
            else if (lev == playerLevel[2])
            {
                for (int k = 0; k < 1; k++)
                {
                    int lvl3 = rand() % 6 + 1;
                    cout << endl << "You have recieved : " << LevelThree[lvl3] << endl;
                    inventory[a] += LevelThree[lvl3];

                }
            }
            else
            {
                cout << endl << "You have recieved : " << droplings[i] << endl;
                inventory[a] += droplings[i];

            }

            a++;
            /*             for (int b = 0; b < 10; b++)
                         {

                             cout << inventory[b] << endl;

                         }*/
                         // }
        }
    }
}


int main()
{
   
 //   srand(time(NULL));
    double g = 1;
    for (int f = 0; f < 99; f++)
    {
        playerLevel[f] = g;
        g++;
    }
    int level;
    cout << "Hello wanderer, what is your name?" << endl;
    cin >> name;
    cout << "Your options are :" << endl;
    cout << "i" << "-> inventory" << endl;
    cout << "Welcome " << name << ". Kill the dragon." << endl;
 /*   cout << "Welcome " << name << ". Kill the dragon." << endl;
    cout << "Welcome " << name << ". Kill the dragon." << endl;
    cout << "Welcome " << name << ". Kill the dragon." << endl;
    cout << "Welcome " << name << ". Kill the dragon." << endl;*/
//    cout << "The dragons HP is "<< dragonHP << "." << endl;
 //   cout << "Your HP is: " << playerHP<< "." << endl;
    do {
        
        int Agility = 100;
        int Defense = 1;
//        int Attack = 100;
        int TO_BE_DONE = 100;

        int Attack = rand() % 10 + 1;
        int Heal = rand() % 10 + 1;
        int dragonAttack = rand() % 20 + 1;
        int drops = rand() % 100 + 1;
        cout << "The dragons HP is " << dragonHP << "." << endl;
        cout << "Your HP is: " << playerHP << "." << endl;
        if (playerEXP < 1000)
        {
            level = playerLevel[0];
            cout << "Your Level is: " << level << "." << endl;
            
        }
        else if (2000 > playerEXP >= 1000)
        {
            level = playerLevel[1];

            cout << "Your Level is: " << level << "." << endl;
        }
        else if (3000 > playerEXP >= 2000)
        {
            level = playerLevel[2];

            cout << "Your Level is: " << level << "." << endl;
        }
        else if (4000 > playerEXP >= 3000)
        {
            level = playerLevel[3];

            cout << "Your Level is: " << level << "." << endl;
        }
        cout << "Would you like to do ( Attack - Or to Heal )" << endl;
        cin >> choice;

        if (choice == "Attack" && automat == false || choice== "attack" && automat == false) {
            dragonHP = dragonHP - Attack;
            int loot = 10;
            cout << "You attacked the dragon! It has " << dragonHP << " left!" << endl;
           cout<< playerEXP <<endl << Exp<<endl;
            playerEXP += Exp;
            cout << "You gained " << Exp << " Experience Point. You now have " << playerEXP << " Points" << endl;
            cout << "You have " << (1000 - playerEXP)<< " Experience Points to go to level up " << endl;
            cout << "You gained " << loot << " coins. You now have " << coins << " coins" << endl;
            coins += loot;
            if (drops > 90)
            {
                cout << endl << "The dragon has dropped some Adventurer items!" << endl;
                //  for (int i = 0; i < 1; i++)
                 // { 
                int i = rand() % 6;
                if (level == playerLevel[1])
                {
                    for (int h = 0; h < 1; h++)
                    {
                        int lvl2 = rand() % 6 + 1;
                        cout << endl << "You have recieved : " << LevelTwo[lvl2] << endl;
                        inventory[a] += LevelThree[lvl2];

                    }
                }
                else if (level== playerLevel[2])
                {
                    for (int k = 0; k < 1; k++)
                    {
                        int lvl3 = rand() % 6 + 1;
                        cout << endl << "You have recieved : " << LevelThree[lvl3] << endl;
                        inventory[a] += LevelThree[lvl3];

                    }
                }
                else
                {
                    cout << endl << "You have recieved : " << droplings[i] << endl;
                    inventory[a] += droplings[i];

                }
              
                a++;
   /*             for (int b = 0; b < 10; b++)
                {

                    cout << inventory[b] << endl;

                }*/
                // }
            }

        }
        else if (choice == "Attack" && automat == true || choice== "attack" && automat == true) {
            for (int l = 0; l < 10; l++)
            {
                cout << l<<"..." << endl;
                dragonHP = dragonHP - Attack;

                int loot = 10;
                cout << "You attacked the dragon! It has " << dragonHP << " left!" << endl;
                cout << playerEXP << endl << Exp << endl;
                playerEXP += Exp;
                cout << "You gained " << Exp << " Experience Point. You now have " << playerEXP << " Points" << endl;
                cout << "You have " << (1000 - playerEXP) << " Experience Points to go to level up " << endl;
                cout << "You gained " << loot << " coins. You now have " << coins << " coins" << endl;
                coins += loot;
            
                if (drops > 90)
                {
                    cout << endl << "The dragon has dropped some Adventurer items!" << endl;
                    //  for (int i = 0; i < 1; i++)
                     // { 
                    int i = rand() % 6;
                    if (level == playerLevel[1])
                    {
                        for (int h = 0; h < 1; h++)
                        {
                            int lvl2 = rand() % 6 + 1;
                            cout << endl << "You have recieved : " << LevelTwo[lvl2] << endl;
                            inventory[a] += LevelThree[lvl2];

                        }
                    }
                    else if (level == playerLevel[2])
                    {
                        for (int k = 0; k < 1; k++)
                        {
                            int lvl3 = rand() % 6 + 1;
                            cout << endl << "You have recieved : " << LevelThree[lvl3] << endl;
                            inventory[a] += LevelThree[lvl3];

                        }
                    }
                    else
                    {
                        cout << endl << "You have recieved : " << droplings[i] << endl;
                        inventory[a] += droplings[i];

                    }

                    a++;
                    /*             for (int b = 0; b < 10; b++)
                                 {

                                     cout << inventory[b] << endl;

                                 }*/
                                 // }
                }
            }

        }
        else if (choice == "Heal" || choice == "heal") {
            playerHP = playerHP + Heal;
            for (int d = 0; d < 60; d++)
            {
                int e = rand() % 100 + 1;
                
                    if (inventory[d] == "pantsLv1")
                    {
                        if (e > 50)
                        {
                            int HitPoint = rand() % 200 + 1;
                            playerHP += HitPoint;
                            cout << endl << "You reviced extra Hit Points of " << HitPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "BraceletLv1")
                    {
                        if (e > 50)
                        {
                            int HitPoint = rand() % 200 + 1;
                            playerHP += HitPoint;
                            cout << endl << "You reviced extra Hit Points of " << HitPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "NecklaceLv1")
                    {
                        if (e > 50)
                        {
                            int Reflect = dragonAttack * 0.1;// = rand() % 200 + 1;
                            playerReflect += Reflect;
                            cout << endl << "Congradulations! You have reflected a portion of the dragons attack. You have reflected " << Reflect << " points of damage due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "tunicLv1")
                    {
                        if (e > 50)
                        {
                            int DFPoint = rand() % 200 + 1;
                            Defense += DFPoint;
                            cout << endl << "You reviced extra Defense Points of " << DFPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "BootsLv1")
                    {
                        if (e > 50)
                        {
                            int AgilPoint = rand() % 200 + 1;
                            Agility += AgilPoint;
                            cout << endl << "You reviced extra Hit Points of " << AgilPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "HelmLv1")
                    {
                        if (e > 50)
                        {
                            int HitPoint = rand() % 200 + 1;
                            playerHP += HitPoint;
                            cout << endl << "You reviced extra Hit Points of " << HitPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                
            }      
            for (int d = 0; d < 60; d++)
            {
                int e = rand() % 100 + 1;
                
                    if (inventory[d] == "pantsLv2")
                    {
                        if (e > 50)
                        {
                            int HitPoint = (rand() % 200 + 1)*2;
                            playerHP += HitPoint;
                            cout << endl << "You reviced extra Hit Points of " << HitPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "BraceletLv2")
                    {
                        if (e > 50)
                        {
                            int HitPoint = rand() % 200 + 1;
                            playerHP += HitPoint;
                            cout << endl << "You reviced extra Hit Points of " << HitPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "NecklaceLv2")
                    {
                        if (e > 50)
                        {
                            int Reflect = dragonAttack * 0.2;// = rand() % 200 + 1;
                            playerReflect += Reflect;
                            cout << endl << "Congradulations! You have reflected a portion of the dragons attack. You have reflected " << Reflect << " points of damage due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "tunicLv2")
                    {
                        if (e > 50)
                        {
                            int DFPoint = rand() % 200 + 1;
                            Defense += DFPoint;
                            cout << endl << "You reviced extra Defense Points of " << DFPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "BootsLv2")
                    {
                        if (e > 50)
                        {
                            int AgilPoint = rand() % 200 + 1;
                            Agility += AgilPoint;
                            cout << endl << "You reviced extra Hit Points of " << AgilPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                    if (inventory[d] == "HelmLv2")
                    {
                        if (e > 50)
                        {
                            int HitPoint = rand() % 200 + 1;
                            playerHP += HitPoint;
                            cout << endl << "You reviced extra Hit Points of " << HitPoint << " due to " << inventory[d] << "'s special effect!" << endl;
                        }
                    }
                
            }
           cout << "You healed yourself for " << Heal << " ! Your current HP is " << playerHP << endl;
        }

        else if (choice =="i" || choice == "I")
        {
            for (int b = 0; b < 10; b++)
            {

                cout << inventory[b] << endl;

            }

        }
       
        else
        {
            //playerHP = playerHP + Heal;
            //cout << "You healed yourself for " << Heal << " ! Your current HP is" << playerHP << endl;
            cout << "Try again " << endl;

        }
        dragonAttack -= playerReflect;
        dragonHP -= playerReflect;
        playerHP = playerHP - dragonAttack + Defense + (Agility*0.1);
        cout << "                             /         \ " << endl <<
            "                        ((         ))" << endl <<
            "                  == =   \\  _ v _//  ===" << endl <<
            "                       ====   ) _ ^_  (      ====" << endl <<
            "                       ===   /  O  O   \ == =" << endl <<
            "                        =   |  /_ _\   | =" << endl <<
            "                       =    \ / _ _ \  / =" << endl <<
            "                             \ _  _  /" << endl <<
            "                             (o _ o)" << endl <<
            "                               VwV" << endl;



        cout << "The dragon attacked you for " << dragonAttack << " damage! You have " << playerHP << " left!" << endl;
        cout << "However due to your defense you have reduced the damage by " << Defense << endl;
        cout << "However due to your Agility you have reduced the damage by " << (Agility * 0.1) << endl;
        cout << "Would you like to spend 10 coins to attack 10 times ?" << endl;
        string answer;
        cin >> answer;
        if (answer == "y" || answer == "yes" || answer == "Y" || answer == "Yes" || answer == "YES")
        {
            if (coins >= 10)
            {
                coins -= 10;
           //     automat = true;
                automated(Attack, drops, level);
            }
            else
            {
                cout << "insufficent coins" << endl;
            }
        }
        system("pause");

        system("cls");

    } while (dragonHP > 0 && playerHP > 0);

    if (dragonHP == 0)
    {
        cout << "You win" << endl;
    }
    if (playerHP == 0)
    {
        cout << "Game over" << endl;
    }

    return 0;
}