#include "CardManager.h"

CardManager* CardManager::m_cInstance = nullptr;
bool CardManager::m_bIsInstance = false;


CardManager::CardManager()
{

}


CardManager::~CardManager()
{
	for(unsigned int i = 0; i < m_acCardList.size(); i++)
	{
		delete m_acCardList[i];
	}

	m_acCardList.clear();
}


void CardManager::CreateCard()
{
	m_acCardList.clear();

	for (int i = 1; i <= m_conCardTypeMaxCount; i++)
	{
		m_acCardList.push_back(new Card(i,ECARD_TYPE::eHeart));
	}

	for (int i = 1; i <= m_conCardTypeMaxCount; i++)
	{
		m_acCardList.push_back(new Card(i, ECARD_TYPE::eDia));
	}

	for (int i = 1; i <= m_conCardTypeMaxCount; i++)
	{
		m_acCardList.push_back(new Card(i, ECARD_TYPE::eClover));
	}

	for (int i = 1; i <= m_conCardTypeMaxCount; i++)
	{
		m_acCardList.push_back(new Card(i, ECARD_TYPE::eSpade));
	}
}

Card& CardManager::GetCardData(int nIndex)
{
	return *m_acCardList[nIndex - 1];
}

std::vector<Card*> CardManager::GetAllCard()
{
	return m_acCardList;
}