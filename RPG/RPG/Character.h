#pragma once
#include <string>
#include <iostream>


class Character 
{
public:
	std::string Player_Name;
	std::string Player_Race;
	std::string Player_Class;

public:
	int Health_Points;
	int Mana;
	int Luck;
	int Strength;
	int Speed;
	int Intelligence;
	int XP;

public:
	Character() : Health_Points{ 0 }, Mana{ 0 }, Luck{ 0 }, Strength{0}, Speed{ 0 }, Intelligence{ 0 }, XP { 0 }
	{
	
	}

public:
	void Stat_Add(int stat, int addition);
	void Character_Show_Stats(Character Player);
};