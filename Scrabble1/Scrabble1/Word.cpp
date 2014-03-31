#include "stdafx.h"
#include "Word.h"

Word::Word(const std::string& what, const std::map<int, LetterModifiers>& letterModifiers, const std::map<int, WordModifiers>& wordModifiers)
{
	m_Score = 0;
	m_Letters;
	for (int i = 0; i < what.size(); i++)
	{
		std::pair<char, int> letter = std::make_pair(what[i], LetterScores.at(what[i]));
		m_Letters.push_back(letter);
		if (letterModifiers.count(i) == 1)
			m_Letters.at(i) = std::make_pair(letter.first, letter.second * letterModifiers.at(i));
		if (wordModifiers.count > 0)
		{
			for (int j = 0; i < wordModifiers.size; j++)
			{
				for (int k = 0; j < m_Letters.size; k++)
					m_Letters.at(k).second *= wordModifiers.at(j);
			}
		}
		m_Score += m_Letters.at(i).second;
	}
}

int Word::GetScore()
{
	return m_Score;
}

std::vector<std::pair<char, int>> Word::GetLetters()
{
	return m_Letters;
}

Word::~Word()
{
	delete &m_Letters;
	delete &m_Score;
}