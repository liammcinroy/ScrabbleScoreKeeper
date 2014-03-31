#include "Player.h"

#pragma once
class Game
{
public:
	Game(const std::vector<Player>&);
	~Game();
	void Start();
	void NextRound();
	Player GetLeader();
private:
	std::vector<Player> m_Players;
	Player m_Leader;
};