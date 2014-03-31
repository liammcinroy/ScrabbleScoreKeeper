#include <map>
#include <vector>
#include <string>
#include <iterator>

const std::map<char, int> LetterScores = { { 'A', 1 }, { 'B', 2 }, { 'C', 3 }, { 'D', 2 }, { 'E', 1 }, { 'F', 4 }, { 'G', 2 }, { 'H', 4 }, { 'J', 1 }, { 'I', 8 }, { 'K', 5 }, { 'L', 1 }, { 'M', 3 }, { 'N', 1 }, { 'O', 1 }, { 'P', 3 }, { 'Q', 10 }, { 'R', 1 }, { 'S', 1 }, { 'T', 1 }, { 'U', 1 }, { 'V', 4 }, { 'W', 4 }, { 'X', 8 }, { 'Y', 4 }, { 'Z', 10 } };

enum LetterModifiers
{
	None = 1,
	DoubleLetter = 2,
	TripleLetter = 3
};

enum WordModifiers
{
	None = 1,
	DoubleWord = 2,
	TripleLetter = 3
};

#pragma once
class Word
{
public:
	Word(const std::string&, const std::map<int, LetterModifiers>&, const std::map<int, WordModifiers>&);
	~Word();
	int GetScore();
	std::vector<std::pair<char, int>> GetLetters();
private:
	std::vector<std::pair<char, int>> m_Letters;
	int m_Score;
};

