#include "stdafx.h"
#include "Player.h"


Player::Player()
{

}

Player::Player(const std::string& name)
{
	m_Score = 0;
	m_Name = name;
	m_Words;
}

void Player::AddWord(Word& word)
{
	m_Words.push_back(word);
	m_Score += word.GetScore();
}

std::string Player::GetName()
{
	return m_Name;
}

std::vector<Word> Player::GetWords()
{
	return m_Words;
}

Player::~Player()
{
	delete &m_Score;
	delete &m_Name;
	delete &m_Words;
}
