#include "Dealer.h"
#include "CardManager.h"
#include <time.h>

std::vector<int> Dealer::m_anStock;

Dealer::Dealer()
{
}

Dealer::~Dealer()
{
}

void Dealer::Shuffle()
{
	srand((unsigned)time(NULL));
	CardManager& cInstance = CardManager::GetInstance();

	int nSize = cInstance.GetAllCard().size();

	m_anStock.clear();

	for (int i = 0; i < nSize; i++)
	{
		m_anStock.push_back(i + 1);
	}

	for (int i = 0; i < nSize; i++)
	{
		int j = rand() % nSize;
		int t = m_anStock[i];
		m_anStock[i] = m_anStock[j];
		m_anStock[j] = t;
	}
}


std::vector<int>Dealer:: GetStockCard()
{
	return m_anStock;
}

std::vector<int> Dealer::PullCard(int nOutCount)
{
	if (nOutCount >= m_anStock.size()) return std::vector<int>(0);
	if (nOutCount <= 0) return std::vector<int>(0);

	std::vector<int> nOutputList(nOutCount);

	for (int i = 0; i < nOutCount; i++)
	{
		nOutputList[i] = m_anStock[i];
	}
	
	for (int i = 0; i < nOutCount; i++)
	{ 
		m_anStock.erase(m_anStock.begin());
	}

	return nOutputList;
}
