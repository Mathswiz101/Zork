#include "game.h"
#include "Battle_Monsters.h"
#include<Windows.h>
#include<MMSystem.h>
double game::Level()
{

    if (Playersexperience >= j)
    {
        Lvl += 1;
        Playersexperience = 0;
        LvlUpMax += 10;
        j++;
    }

    return Lvl;
}

void game::Player_Data(int exp, int lvl)
{
    cout << "Your level is: " << Level() << "." << endl;
    cout << "Your HP is: " << HP << "." << endl;
    cout << "Coins: " << coins << "." << endl;
    cout << "EXP needed to level up: " << (LvlUpMax - Playersexperience) << endl;
    cout << endl;
}

double game::EXP()
{ 
    
        Playersexperience += 10;
        Level();

    return Playersexperience;
}

void game::Battle()
{
    cout << endl << endl;
    if (dragHP > 0 && HP > 0)
    {
        ATK = rand() % 100;
        dragHP = dragHP - ATK;
        cout << "You attacked the dragon! It has " << dragHP << " left!" << endl;
//        cout << "You have " << (LvlUpMax - Playersexperience) << " Experience Points to go to Lvl up " << endl;

        EXP();
        coins += loot;
        cout << "You gained " << loot << " coins. You now have " << coins << " coins" << endl;
        drops = rand() % 100 + 1;// 0;
        if (drops >90)
        {
            cout << endl << "The dragon has dropped some Adventurer items!" << endl;
            //      random = rand() % 6;
            for (int i = 0; i < MAX; i++)
            {
                if (Lvl == playerLevel[i])
                {
                    random = rand() % 6;
                    if (Lvl == 1)
                    {
                        string a = LevelOne[random];
                        inventory.push_back(a);
                        playEq(LevelOne[random]);
                    }
                    else if (Lvl == 2)
                    {
                        string a = LevelOne[random];

                        LevelTwo[random];
                        inventory.push_back(a);
                        playEq(LevelTwo[random]);

                    }
                    else if (Lvl == 3)
                    {
                        string a = LevelOne[random];
                        LevelThree[random];
                        inventory.push_back(a);
                        playEq(LevelThree[random]);

                    }
                }

            }
        }
    }
            /*   int e = 0;
               string w;
        /*       for (int eq = 0; eq < MAX; eq++)
               {
                   if (inventory[eq] != "")
                   {
                       cout << "Would you like to equip " << inventory[eq] << " to your player? (yes/no) " << endl;
                       string answ;
                       cin >> answ;
                       if (answ == "yes" || answ == "Yes")
                       {

                           playEQ[e] = inventory[eq];
                           e++;
                       }
                       else
                       {
                           continue;
                       }

                   }
               }
        
}


bool game::PlayerDeath(double hp)
{
    if (hp >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void game::automated()
{
    for (int i = 0; i < 10; i++)
    {
        Battle();
    }
}


void game::Play()
{
    string Summoning;
    int Flash = 0;
    //PlaySound(TEXT("filename.wav"), NULL, SND_SYNC);
    for (Flash = 0; Flash < 50; Flash++)
    {
        if (Flash >= 0 && Flash % 2 == 0)
        {

            cout << R"(        
                            (
                .            )        )
                         (  (|              .
                     )   )\/ ( ( (
             *  (   ((  /     ))\))  (  )    )
           (     \   )\(          |  ))( )  (|
           >)     ))/   |          )/  \((  ) \
           (     (      .        -.     V )/   )(    (
            \   /     .   \            .       \))   ))
              )(      (  | |   )            .    (  /
             )(    ,'))     \ /          \( `.    )
             (\>  ,'/__      ))            __`.  /
            ( \   | /  ___   ( \/     ___   \ | ( (
             \.)  |/  /   \__      __/   \   \|  ))
            .  \. |>  \      | __ |      /   <|  /
                 )/    \____/ :..: \____/     \ <
          )   \ (|__  .      / ;: \          __| )  (
         ((    )\)  ~--_     --  --      _--~    /  ))
          \    (    |  ||               ||  |   (  /
                \.  |  ||_             _||  |  /
                  > :  |  ~V+-I_I_I-+V~  |  : (.
                 (  \:  T\   _     _   /T  : ./
                  \  :    T^T T-+-T T^T    ;<
                   \..`_       -+-       _'  )
         )            . `--=.._____..=--'. ./         (
        ((     ) (          )             (     ) (   )>
         > \/^/) )) (   ( /(.      ))     ))._/(__))./ (_.
        (  _../ ( \))    )   \ (  / \.  ./ ||  ..__:|  _. \
        |  \__.  ) |   (/  /: :)) |   \/   |(  <.._  )|  ) )
       ))  _./   |  )  ))  __  <  | :(     :))   .//( :  : |
       (: <     ):  --:   ^  \  )(   )\/:   /   /_/ ) :._) :
        \..)   (_..  ..  :    :  : .(   \..:..    ./__.  ./
                   ^    ^      \^ ^           ^\/^     ^ JaL
)" << endl;
            system("cls");

        }
        else if (Flash > 0 && Flash % 2 != 0)
        {
            if (Flash == 49)
            {
                cout << R"(        
                            )
                .            )        (
                         )  )|              .
                     (   (\/ ) ) )
             *  (   ((  /     ))\))  (  )    )
           (     \   )\(          |  ))( )  (|
           >)     ))/   |          )/  \((  ) \
           (     (      .        -.     V )/   )(    (
            \   /     .   \            .       \))   ))
              )(      (  | |   )            .    (  /
             )(    ,'))     \ /          \( `.    )
             (\>  ,'/__      ))            __`.  /
            ( \   | /  ___   ( \/     ___   \ | ( (
             \.)  |/  /   \__      __/   \   \|  ))
            .  \. |>  \      | __ |      /   <|  /
                 )/    \____/ :..: \____/     \ <
          (   \ (|__  .      / ;: \          __| )  )
         ))    )\)  ~--_     --  --      _--~    /  ((
          /    (    |  ||               ||  |   (   \
                \.  |  ||_             _||  |  /
                  > :  |  T^T T-+-T T^T  |  : (.
                 (  \:  T/   _     _   \T  : ./
                  \  :    ~V+-I_I_I-+V~    ;<
                   \..`_       -+-       _'  )
         (            . `--=.._____..=--'. ./         )
        ))     ( )          (             )     ( )   (>
         > \/^/( (( )   ) /).      ((     ((._/(__((./ )_.
        (  _../ ( \))    )   \ (  / \.  ./ ||  ..__:|  _. \
        |  \__.  ) |   (/  /: :)) |   \/   |(  <.._  )|  ) )
       ))  _./   |  )  ))  __  <  | :(     :))   .//( :  : |
       (: <     ):  --:   ^  \  )(   )\/:   /   /_/ ) :._) :
        \..)   (_..  ..  :    :  : .(   \..:..    ./__.  ./
                   ^    ^      \^ ^           ^\/^     ^ JaL
)" << endl;
            }
            else
            {
                cout << R"(        
                            )
                .            )        (
                         )  )|              .
                     (   (\/ ) ) )
             *  (   ((  /     ))\))  (  )    )
           (     \   )\(          |  ))( )  (|
           >)     ))/   |          )/  \((  ) \
           (     (      .        -.     V )/   )(    (
            \   /     .   \            .       \))   ))
              )(      (  | |   )            .    (  /
             )(    ,'))     \ /          \( `.    )
             (\>  ,'/__      ))            __`.  /
            ( \   | /  ___   ( \/     ___   \ | ( (
             \.)  |/  /   \__      __/   \   \|  ))
            .  \. |>  \      | __ |      /   <|  /
                 )/    \____/ :..: \____/     \ <
          (   \ (|__  .      / ;: \          __| )  )
         ))    )\)  ~--_     --  --      _--~    /  ((
          /    (    |  ||               ||  |   (   \
                \.  |  ||_             _||  |  /
                  > :  |  T^T T-+-T T^T  |  : (.
                 (  \:  T/   _     _   \T  : ./
                  \  :    ~V+-I_I_I-+V~    ;<
                   \..`_       -+-       _'  )
         (            . `--=.._____..=--'. ./         )
        ))     ( )          (             )     ( )   (>
         > \/^/( (( )   ) /).      ((     ((._/(__((./ )_.
        (  _../ ( \))    )   \ (  / \.  ./ ||  ..__:|  _. \
        |  \__.  ) |   (/  /: :)) |   \/   |(  <.._  )|  ) )
       ))  _./   |  )  ))  __  <  | :(     :))   .//( :  : |
       (: <     ):  --:   ^  \  )(   )\/:   /   /_/ ) :._) :
        \..)   (_..  ..  :    :  : .(   \..:..    ./__.  ./
                   ^    ^      \^ ^           ^\/^     ^ JaL
)" << endl; system("cls");
            }

        }
    }
  //  system("pause");
    cout << "There once was a peaceful kingdom, where happiness and peace were as common as daisys in a field. Until one day a raging beast decided to make this land his home." << endl <<
        "Burnt villages, lost lives, raging fire, and a kindom no more." << endl;
 
        

        cout << "The remaining people got together and with their remaining strength summoned a Great Warrior.They task you - nay, beg you - to slay the beast - The Legendary Red Dragon - " << endl <<
            "and save them and salvage what might be remaining of their once-home. " << endl << " Will you accept ? (Y / n) : "; cin >> Summoning;
        if (Summoning == "Y" || Summoning == "y")
        {
           /* cout << "Hello wanderer, what is your name?" << endl;
            cin >> name;*/
            cout << "Young Warrior, what is your name?" << endl;
            cin >> name;
        }
        else
        {
            Play();
        }
    
    
    /*
    Quest : Moving around - commands? Take in arrow keys.
            Grid for the forest, village + villagers, Evil forest, and Dragons Keep.
    
    */
        system("cls");
        Player_Data(Playersexperience, Lvl);
        cout << endl;
        cout << endl;
    cout << R"(
               ----------------------------------------------------
               | "Your options are :                              |
               |  "i" << "-> inventory                            |
               |  "PE" << "-> Player Equip                        |
               |  "Attack" << "-> Player Equip                    |
               |  "pd" << "-> Player data"<<"                     |
               |  "HuntMode" << "-> Enter HuntMode                |
               |  "OPTIONS" << "-> Displays these options again   |                                               |
               ----------------------------------------------------)" << endl;
    do {
        cout << "Would you like to do : ";// << endl;
        cin >> choice1;
        //not done
        if (choice1 == "pE" || choice1 == "PE" || choice1 == "pe")
        {
            cout << "Player's Equiptment : " << endl;

            for (size_t i = 0; i < playEQ.size(); i++)
            {
                cout << playEQ[i] << '\n';
            }
            /*   for(auto t=pla)
               for (int b = 0; b < 6; b++)
               {

                   cout << playEQ[b] << endl;

               }*/

        }
        //done
        else if (choice1 == "pd" || choice1 == "PD" || choice1 == "pD")
        {
            Player_Data(Playersexperience, Lvl);

        }
    //done 
        else if (choice1 == "i" || choice1 == "I")
        {

            for (size_t i = 0; i < inventory.size(); i++)
            {
                cout << inventory[i] << '\n';
               
            }
            if (inventory.empty())
            {
                cout << "Inventory is currently empty! " << endl;
            }
            else
            {
                cout << "Try Again!" << endl;
            }
            
        }

        //done
        else if (choice1 == "OPTIONS" || choice1=="options")
        {
            cout << R"(
               ----------------------------------------------------
               | "Your options are :                              |
               |  "i" << "-> inventory                            |
               |  "PE" << "-> Player Equip                        |
               |  "Attack" << "-> Player Equip                    |
               |  "pd" << "-> Player Equip"<<"                    |
               |  "OPTIONS" << "-> Displays these options again   |
               |                                                  |
               ----------------------------------------------------)" << endl;

        }
       
        //done, work on MonsterBatt()
        else if (choice1 == "HuntMode" || choice1 == "Huntmode" || choice1 == "HUNTMODE" || choice1 == "huntmode")
        {
            Hunt = true;
            cout << "HuntMode ON!" << endl;
        }
        else if ((choice1 == "Attack" && Hunt == true) || (choice1 == "attack" && Hunt == true) || (choice1=="A" && Hunt == true) || (choice1== "a" && Hunt == true))
        {
          //  ATK = rand() % 500 + 1;
            system("cls");
            Battle_Monsters player1;
            player1.MonstersBatt();
            coins += player1.coins;
            Playersexperience += player1.PlayerExp;
            Lvl += player1.Lvl;
          //  MonsterBattle(Playersexperience, Lvl);
            
        }
        else if ((choice1 == "Attack" && Hunt == false) || (choice1 == "attack" && Hunt == false) || (choice1 == "A" && Hunt == false) || (choice1 == "a" && Hunt == false))
        {
            cout << "No Monsters NearBy" << endl << "Try entering Hunt Mode to look for Monters" << endl;
        }

        else
        {
            system("cls");

            cout << "Try again " << endl << endl;

        }
    } while (HP != 0);




}
