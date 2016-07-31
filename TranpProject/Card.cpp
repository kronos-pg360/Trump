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
		return "�n�[�g";
	case eClover:
		return "�N���[�o�[";
	case eDia:
		return "�_�C��";
	case eSpade:
		return "�X�y�[�h";
	default:
		return "NONE";
	}
}

int Card::GetIndex()
{
	return m_nIndex;
}
