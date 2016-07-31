#pragma once
#include <string>

// �J�[�h���
enum ECARD_TYPE
{
	eHeart,		//< �n�[�g
	eClover,	//< �N���[�o�[
	eDia,		//< �_�C��
	eSpade		//< �X�y�[�h
};

class Card
{
public:
	Card(int nIndex, ECARD_TYPE eType);
	virtual ~Card();

	// �J�[�h�̎�ޖ����擾
	std::string GetTypeName();

	// �������g�̔ԍ����擾
	int GetIndex();

private:
	int m_nIndex;
	ECARD_TYPE m_eType;
};

