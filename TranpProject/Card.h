#pragma once
#include <string>

// カード種類
enum ECARD_TYPE
{
	eHeart,		//< ハート
	eClover,	//< クローバー
	eDia,		//< ダイヤ
	eSpade		//< スペード
};

class Card
{
public:
	Card(int nIndex, ECARD_TYPE eType);
	virtual ~Card();

	// カードの種類名を取得
	std::string GetTypeName();

	// 自分自身の番号を取得
	int GetIndex();

private:
	int m_nIndex;
	ECARD_TYPE m_eType;
};

