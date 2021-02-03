#pragma once
#include <iostream>
#include "Character.h"
#include <fstream>
#include <string>
#include <windows.h>


class utility
{
public:
	void Menu();
	void WindowSetup();
	//void exit();

public:
	Character Player;
	void Character_Setup(Character Player);
	void Character_Race_Setup(Character Player);
	void Character_Class_Setup(Character Player);
	void Character_Name_Setup(Character Player);
};
