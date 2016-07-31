#pragma once
#include <vector>

class Dealer
{
public:
	Dealer();
	~Dealer();

	// カードを引かせる
	// 戻り値は、引いた数分のカード番号
	static std::vector<int> PullCard(int nOutCount);
	
	// 山札取得
	static std::vector<int> GetStockCard();
	
	// シャッフル
	static void Shuffle();

private:
	static std::vector<int> m_anStock;

};

