#include <iostream>
#include "stdafx.h"
#include "Game.h"


Game::Game(const std::vector<Player>& players)
{
	for (int i = 0; i < players.size; i++)
		m_Players.push_back(players.at(i));
	m_Leader = players.at(0);
}

void Game::Start()
{

}

void Game::NextRound()
{
	
}

Player Game::GetLeader()
{
	for (int i = 0; i < m_Players.size; i++)
		m_Leader = (m_Players.at(i).GetScore() > m_Leader.GetScore()) ? m_Players.at(i) : m_Leader;
	return m_Leader;
}

Game::~Game()
{
	delete &m_Players;
	delete &m_Leader;
}