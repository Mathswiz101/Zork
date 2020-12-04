#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include<stdlib.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
#ifndef GAME_H
#define GAME_H

class game
{
public:

	int Lvl = 0;
	int random;
	int j = 10;
	double HP = 200;
	double dragHP = 500;
	double dragAttack; 
	double Playersexperience = 0;
	double Exp = 10;
	double LvlUpMax = 10;// 00;
	double ATK = rand() % 100 + 1;
	int coins = 0;
	int loot = 10;
	int drops;
	int equip = 0;
	int playerReflect;
	string choice;
	string choice1;
	string name;

	vector<string> inventory;

	bool Hunt = false;
	double Level();
	void Player_Data(int exp, int lvl);
	double EXP(); // adding the exp to players experience after a battle
	void MonsterBattle(int exp, int lvl); // fighting Monsters
	void Play();
	void automated();
	bool PlayerDeath(double drhp);


};
#endif
