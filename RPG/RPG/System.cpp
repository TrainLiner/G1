#pragma once
#include "system.h"
#undef min
#undef max

void utility::Menu()
{
	int choice;
	bool loop = true;

	std::cout << "\n     Menu";
	std::cout << "\n===============";
	std::cout << "\n 1 - Start";
	std::cout << "\n 2 - What is this?";
	std::cout << "\n 3 - Exit";
	std::cout << "\n Enter number: ";

	while (loop)
	{
		std::cin >> choice;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();

		switch (choice)
		{
		case 1:
			loop = false;
			Character_Setup(Player);
			break;
		case 2:
			loop = false;
			std::cout << "EXPLAIN" << std::endl;
			//utility::explain();
			break;
		case 3:
			loop = false;
			std::cout << "EXIT" << std::endl;
			//utility::exit();
			break;

		default:
			std::cout << "\n Invaild Input, Try Again: ";
			break;
		}

	}
}


void utility::Character_Setup(Character Player)
{
	system("CLS");
	Character_Name_Setup(Player);
	std::cin.get();
	Character_Race_Setup(Player);
	std::cin.get();
	system("CLS");
	Character_Class_Setup(Player);
	std::cin.get();
	system("CLS");

}

void utility::Character_Race_Setup(Character Player)
{
	bool loop = true;
	int choice;
	std::fstream File;

	File.open("Race_Script.txt", std::ios::in);
	if (File.is_open())
	{
		std::string line;
		while (getline(File, line))
		{
			std::cout << line << "\n";
		}
		File.close();
	}
	else { std::cout << "ERROR: CANNOT FIND TEXT FILE" "\n"; }

	std::cout << "\nWhich race will you pick: ";

	while (loop)
	{

		std::cin >> choice;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();

		switch (choice)
		{
		case 1:
			loop = false;
			Player.Player_Race = "human";
			Player.Stat_Add(Player.Health_Points, 5);
			Player.Stat_Add(Player.Strength, 5);
			Player.Stat_Add(Player.Speed, 10);
			std::cout << "\n" "So you decided to pick " << Player.Player_Race << ", so mind games and speed...";
			break;
		case 2:
			loop = false;
			Player.Player_Race = "dark elf";
			Player.Stat_Add(Player.Mana, 10);
			Player.Stat_Add(Player.Intelligence, 10);
			std::cout << "\n" "So you decided to pick " << Player.Player_Race << ", so magic is your thing...";
			break;
		case 3:
			loop = false;
			Player.Player_Race = "orc";
			Player.Stat_Add(Player.Health_Points, 10);
			Player.Stat_Add(Player.Strength, 10);
			std::cout << "\n" "So you decided to pick " << Player.Player_Race << ", ahhh the safe option...";
			break;

		default:
			std::cout << "\n Invaild Input, Try Again: ";
			break;
		}
	}
}


void utility::Character_Class_Setup(Character Player)
{
	std::fstream File;
	int choice;
	bool loop = true;

	File.open("Class_Script.txt", std::ios::in);
	if (File.is_open())
	{
		std::string line;
		while (getline(File, line))
		{
			std::cout << line << "\n";
		}
		File.close();
	}
	else { std::cout << "ERROR: CANNOT FIND TEXT FILE" "\n"; }


	std::cout << "\nWhich class will you pick: ";

	while (loop)
	{
		std::cin >> choice;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();

		switch (choice)
		{
		case 1:
			loop = false;
			Player.Player_Class = "berserker";
			Player.Stat_Add(Player.Health_Points, 100);
			Player.Stat_Add(Player.Strength, 20);
			Player.Stat_Add(Player.Speed, 25);
			Player.Stat_Add(Player.Luck, 1);
			//std::cout << "\n" "So you decided to pick " << Player.Player_Race << ", so mind games and speed...";
			break;
		case 2:
			loop = false;
			Player.Player_Class = "assassin";
			Player.Stat_Add(Player.Health_Points, 120);
			Player.Stat_Add(Player.Strength, 20);
			Player.Stat_Add(Player.Luck, 1);
			//std::cout << "\n" "So you decided to pick " << Player.Player_Race << ", so magic is your thing...";
			break;
		case 3:
			loop = false;
			Player.Player_Class = "dark magician";
			Player.Stat_Add(Player.Health_Points, 80);
			Player.Stat_Add(Player.Intelligence, 20);
			Player.Stat_Add(Player.Mana, 20);
			Player.Stat_Add(Player.Luck, 1);
			//std::cout << "\n" "So you decided to pick " << Player.Player_Race << ", ahhh the safe option...";
			break;

		default:
			std::cout << "\n Invaild Input, Try Again: ";
			break;
		}
	}
}

void utility::Character_Name_Setup(Character Player)
{
	std::cout << "Welcome fellow adventurer, You are now going to setup your character!";
	std::cout << "\nName your character: ";
	std::cin >> Player.Player_Name;
}

void utility::WindowSetup()
{
	HWND Console = GetConsoleWindow();
	LPCTSTR Console_Title = L"Slice and Dice";
	RECT console_Window;
	GetWindowRect(Console, &console_Window);
	SetConsoleTitle(Console_Title);
	MoveWindow(Console, console_Window.left, console_Window.top, 1200, 800, TRUE);

}
