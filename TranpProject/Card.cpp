#include "Card.h"


Card::Card(int nIndex, ECARD_TYPE eType):
	m_nIndex(nIndex),
	m_eType(eType)
{

}

Card::~Card()
{
}


std::string Card::GetTypeName()
{
	switch (m_eType)
	{
	case eHeart:
		return "ハート";
	case eClover:
		return "クローバー";
	case eDia:
		return "ダイヤ";
	case eSpade:
		return "スペード";
	default:
		return "NONE";
	}
}

int Card::GetIndex()
{
	return m_nIndex;
}
