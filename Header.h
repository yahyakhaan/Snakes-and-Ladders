#pragma once
#include <iostream>
#include <string>
#include<stdlib.h>
#include <time.h>
using namespace std;
int temp1;
int temp2;
class Game
{
private:
	int dice;
	int dice2;
	int tempP1;
	int tempP2;
	int n;
	string name1;
	string name2;
public:
	Game()
	{
		name1 = name2 = "";
		dice = n = tempP1 = 0;
		tempP2 = 0;
		dice2 = 0;
	}
	void SetName(string name)
	{
		this->name1 = name;
	}
	string GetName()const
	{
		return name1;
	}
	void DiceMovement()
	{
		srand(time(NULL));
		int dice1 = rand() % 6 + 1;
		//int temp1;
		//dice = dice1;
		
			temp1 = temp1 + dice1;
			//n++;
			if (temp1 == 3) { temp1 = 22; }
			else if (temp1 == 5) { temp1 = 8; }
			else if (temp1 == 11) { temp1 = 26; }
			else if (temp1 == 20) { temp1 = 29; }
			else if (temp1 == 27) { temp1 = 1; }
			else if (temp1 == 21) { temp1 = 9; }
			else if (temp1 == 17) { temp1 = 4; }
			else if (temp1 == 19) { temp1 = 7; }
			else if (temp1 > 30)
			{
				temp1 -= dice1;
				//DiceMovement();
			}
			else if (temp1 == 30)
			{
				cout << "Player 1 wins!" << endl;
			}
			SetTemp(temp1);
			SetDice(dice1);
	}
	void DiceMovement2()
	{
		srand(time(NULL));
		int dice1 = rand() % 6 + 1;
		//int temp1;
		//dice = dice1;

		temp2 = temp2 + dice1;
		//n++;
		if (temp2 == 3) { temp2 = 22; }
		else if (temp2 == 5) { temp2 = 8; }
		else if (temp2 == 11) { temp2 = 26; }
		else if (temp2 == 20) { temp2 = 29; }
		else if (temp2 == 27) { temp2 = 1; }
		else if (temp2 == 21) { temp2 = 9; }
		else if (temp2 == 17) { temp2 = 4; }
		else if (temp2 == 19) { temp2= 7; }
		else if (temp2 > 30)
		{
			temp2 -= dice1;
			//DiceMovement();
		}
		else if (temp2 == 30)
		{
			cout << "Player 2 wins!" << endl;
		}
		SetTemp2(temp2);
		SetDice2(dice1);
	}
	void SetTemp(int t)
	{
		this->tempP1 = t;
	}
	void SetTemp2(int t)
	{
		this->tempP2 = t;
	}
	void SetDice(int t)
	{
		this->dice = t;
	}
	void SetDice2(int t)
	{
		this->dice2 = t;
	}
	int GetDice1()const
	{
		return this->dice;
	}
	int GetDice2()const
	{
		return this->dice2;
	}
	int GetTemp()const
	{
		return this->tempP1;
	}
	int GetTemp2()const
	{
		return this->tempP2;
	}
	int GetDiceFig1()const
	{
		cout << "Player1 Dice is: " << GetDice1() << endl;
		cout << "Player1 Score is: " << tempP1 << endl << endl;
		//string a = dice.ToString();
		return dice;
		
	}
	int GetDiceFig2()const
	{
		cout << "Player2 Dice is: " << GetDice2() << endl;
		cout << "Player2 Score is: " << tempP2 << endl << endl;
		//string a = dice.ToString();
		return dice2;

	}
};