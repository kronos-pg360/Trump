#include "Player.h"



Player::Player()
{
	m_anHandIndexList.clear();
}


Player::~Player()
{
}


void Player::CatchCard(int nIndex)
{
	m_anHandIndexList.push_back(nIndex);
}

void Player::ReleqaseCard(int nHandIndex)
{
	m_anHandIndexList.erase(m_anHandIndexList.begin() + nHandIndex);
}
