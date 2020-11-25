#pragma once
#include <iostream>
#include <ctime>
#include <time.h>
#include<stdlib.h>
class Battle_Monsters
{
public:
	double MonstersHP = 100;
	double MonstersAtk;
	void MonstersBatt();
	void MonstersVictory();
	void MonstersDeath();
	double Exp();
	double Level();
	double PlayerExp;
	double PlayerHP;
	double ATK;
	int coins;
	int loot;
	int drops;
	int j = 10;
	int Lvl = 0;
	int LvlUpMax = 10;


};

