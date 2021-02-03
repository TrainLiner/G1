#include "Character.h"

void Character::Stat_Add(int stat, int addition)
{
	stat = addition + stat;

}


void Character::Character_Show_Stats(Character Player)
{
	std::cout << "\n Here are your Stats:";
	std::cout << "\n Health_Points: " << this->Health_Points;
	std::cout << "\n Strength: "	  << this->Strength;
	std::cout << "\n Speed: "		  << this->Speed;
	std::cout << "\n Mana: "		  << this->Mana;
	std::cout << "\n Intelligence: "  << this->Intelligence;
	std::cout << "\n Luck: "		  << this->Luck;
	std::cout << "\n XP: "			  << this->XP;

}
