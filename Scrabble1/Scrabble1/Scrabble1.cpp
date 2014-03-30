#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

const int A = 1;
const int B = 2;
const int C = 3;
const int D = 2;
const int E = 1;
const int F = 4;
const int G = 2;
const int H = 4;
const int I = 1;
const int J = 8;
const int K = 5;
const int L = 1;
const int M = 3;
const int N = 1;
const int O = 1;
const int P = 3;
const int Q = 10;
const int R = 1;
const int S = 1;
const int T = 1;
const int U = 1;
const int V = 4;
const int W = 4;
const int X = 8;
const int Y = 4;
const int Z = 10;

int scores[4];
//std::string player1name, player2name, player3name, player4name;
bool done = false;
std::string players[4];

int WordScore(string word)
{
	int wordscore = 0, currentletterscore;
	int wholewordmodifier1 = 1, wholewordmodifier2 = 1;
	char currentletter;

	//foreach (char currentletter : word)
	for (int i = 0; i < word.length(); i++)
	{
		currentletter = word[i];

		switch (currentletter)
		{
		case 'a':
			currentletterscore = A;
			break;
		case 'b':
			currentletterscore = B;
			break;
		case 'c':
			currentletterscore = C;
			break;
		case 'd':
			currentletterscore = D;
			break;
		case 'e':
			currentletterscore = E;
			break;
		case 'f':
			currentletterscore = F;
			break;
		case 'g':
			currentletterscore = G;
			break;
		case 'h':
			currentletterscore = H;
			break;
		case 'i':
			currentletterscore = I;
			break;
		case 'j':
			currentletterscore = J;
			break;
		case 'k': 
			currentletterscore = K;
			break;
		case 'l':
			currentletterscore = L;
			break;
		case 'm':
			currentletterscore = M;
			break;
		case 'n':
			currentletterscore = N;
			break;
		case 'o':
			currentletterscore = O;
			break;
		case 'p':
			currentletterscore = P;
			break;
		case 'q':
			currentletterscore = Q;
			break;
		case 'r':
			currentletterscore = R;
			break;
		case 's':
			currentletterscore = S;
			break;
		case 't':
			currentletterscore = T;
			break;
		case 'u':
			currentletterscore = U;
		case 'v':
			currentletterscore = V;
			break;
		case 'w':
			currentletterscore = W;
			break;
		case 'x':
			currentletterscore = X;
			break;
		case 'y':
			currentletterscore = Y;
			break;
		case 'z':
			currentletterscore = Z;
			break;
		case '?':
			currentletterscore = 0;
			break;
		default:
			std::cout << currentletter << "Is not a valid character.\n";
			return 0;
		}

		std::cout << "Were there any letter modifiers on " << currentletter << "?\nPlease enter yes or no\n";
		bool hasModifier;
		string reply;
		std::cin >> reply;

		if (reply == "yes")	hasModifier = true;

		else if (reply == "no")	hasModifier = false;

		else
		{
			std::cout << "Not a valid answer.\n";
			return 0;
		}

		if (hasModifier)
		{
			std::cout << "Please enter the modifier.\nUse 'dw' for double word, 'dl' for double letter,'tl' for triple letter, and 'tw' for triple word\n";
			string modifierString;
			std::cin >> modifierString;

			if (modifierString == "dl") currentletterscore *= 2;

			else if (modifierString == "dw")
			{
				if (wholewordmodifier1 != 1)
				{
					wholewordmodifier2 = 2;
				}

				else
				{
					wholewordmodifier1 = 2;
				}
			}

			else if (modifierString == "tl") currentletterscore *= 3;

			else if (modifierString == "tw")
			{
				if (wholewordmodifier1 != 1)
				{
					wholewordmodifier2 = 3;
				}

				else
				{
					wholewordmodifier1 = 3;
				}
			}

			else
			{
				std::cout << "Not a valid modifier, moving to next letter\n";
			}
		}

		else
		{
			 wordscore += currentletterscore;
			 currentletterscore = 0;
		}

		wordscore += currentletterscore;
		currentletterscore = 0;
	}
	return wordscore * wholewordmodifier1 * wholewordmodifier2;
}

int SubtractWordScore(string word)
	{
	int wordscore = 0, currentletterscore;
	char currentletter;

	//foreach (char currentletter : word)
	for (int i = 0; i < word.length(); i++)
	{
		currentletter = word[i];

		switch (currentletter)
		{
		case 'a':
			currentletterscore = A;
			break;
		case 'b':
			currentletterscore = B;
			break;
		case 'c':
			currentletterscore = C;
			break;
		case 'd':
			currentletterscore = D;
			break;
		case 'e':
			currentletterscore = E;
			break;
		case 'f':
			currentletterscore = F;
			break;
		case 'g':
			currentletterscore = G;
			break;
		case 'h':
			currentletterscore = H;
			break;
		case 'i':
			currentletterscore = I;
			break;
		case 'j':
			currentletterscore = J;
			break;
		case 'k': 
			currentletterscore = K;
			break;
		case 'l':
			currentletterscore = L;
			break;
		case 'm':
			currentletterscore = M;
			break;
		case 'n':
			currentletterscore = N;
			break;
		case 'o':
			currentletterscore = O;
			break;
		case 'p':
			currentletterscore = P;
			break;
		case 'q':
			currentletterscore = Q;
			break;
		case 'r':
			currentletterscore = R;
			break;
		case 's':
			currentletterscore = S;
			break;
		case 't':
			currentletterscore = T;
			break;
		case 'u':
			currentletterscore = U;
		case 'v':
			currentletterscore = V;
			break;
		case 'w':
			currentletterscore = W;
			break;
		case 'x':
			currentletterscore = X;
			break;
		case 'y':
			currentletterscore = Y;
			break;
		case 'z':
			currentletterscore = Z;
			break;
		case '?':
			currentletterscore = 0;
			break;
		default:
			std::cout << currentletter << "Is not a valid character.\n";
			return 0;
		}
		wordscore += currentletterscore;
		currentletterscore = 0;
	}
	return wordscore;
}

void FindWinner()
{
	int max = 0;
	for (int i = 1; i < 4; i++)
	{
		if (scores[i] > scores[max])
			max = i;
	}
	std::cout << players[max] << " won with a score of " << scores[max] << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "This is a scrabble score keeper,\nEnter the information required ALL in lower-case, and use '?' for blank letters." << endl;
	std::cout << "Please enter your number of players (<= 4, if more use teams).\n";
	int playersAmount;
	std::cin >> playersAmount;

	for (int i = 0; i < playersAmount; i++)
	{
		std::cout << "Please enter Player " << i << "'s name\n";
		std::cin >> players[i];
	}
	while (!done)
	{
		for (int i = 0; i < playersAmount; i++)
		{
			std::cout << "Please enter " << players[i] << "'s word. (lower-case)\n";
			string word;
			std::cin >> word;
			int score = WordScore(word);
			std::cout << "Your word's score is " << score << endl;
			scores[i] += score;
		}

		for (int i = 0; i < playersAmount; i++)
			std::cout << players[i] << "'s total score:\n" << scores[i] << "\n";
		std::cout << "\nAnother turn?('yes' or 'no')" << endl;
		string reply;
		std::cin >> reply;

		if (reply == "yes") done = false;

		if (reply == "no")
		{
			done = true;

			for (int i = 0; i < playersAmount; i++)
			{
				std::cout << "Please enter any letters " << players[i] << " has left on their board (if none, enter a '?')\n";
				string letters;
				std::cin >> letters;
				int subtractscore = SubtractWordScore(letters);
				scores[i] -= subtractscore;
				std::cout << players[i] << " lost " << subtractscore << " points.\n";
			}
		}
	}

	for (int i = 0; i < playersAmount; i++)
	{
		std::cout << players[i] << "'s total score:\n" << scores[i] << endl;
	}

	FindWinner();
	std::cout << "Thanks for playing! Type something and press enter to terminate" << endl;
	std::cin >> scores[0];
	return 0;
}
