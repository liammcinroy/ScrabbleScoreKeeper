#include "Word.h"

#pragma once
class Player
{
public:
	Player(const std::string&);
	Player();
	~Player();
	void AddWord(Word&);
	int GetScore();
	std::string GetName();
	std::vector<Word> GetWords();
private:
	int m_Score;
	std::string m_Name;
	std::vector<Word> m_Words;
};

