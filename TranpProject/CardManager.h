#pragma once

#include <vector>
#include "Card.h"

class CardManager
{
public:

	static CardManager& GetInstance()
	{
		if (!m_bIsInstance)
		{
			m_bIsInstance = true;
			m_cInstance = new CardManager();
		}

		return *m_cInstance;
	}

	// カードを生成する.
	void CreateCard();

	// 引数のIndex番号のカードを取得する。
	Card& GetCardData(int nIndex);

	// カードすべて取得
	std::vector<Card*> GetAllCard();

	// カードの種類ごとの最大数
	static const int m_conCardTypeMaxCount = 13;

private:
	CardManager();
	~CardManager();

	static CardManager* m_cInstance;
	static bool m_bIsInstance;

	std::vector<Card*> m_acCardList;
};

