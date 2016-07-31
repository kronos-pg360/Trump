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

	// �J�[�h�𐶐�����.
	void CreateCard();

	// ������Index�ԍ��̃J�[�h���擾����B
	Card& GetCardData(int nIndex);

	// �J�[�h���ׂĎ擾
	std::vector<Card*> GetAllCard();

	// �J�[�h�̎�ނ��Ƃ̍ő吔
	static const int m_conCardTypeMaxCount = 13;

private:
	CardManager();
	~CardManager();

	static CardManager* m_cInstance;
	static bool m_bIsInstance;

	std::vector<Card*> m_acCardList;
};

