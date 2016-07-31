#pragma once
#include <vector>

class Player
{
public:
	Player();
	~Player();

	// カードをゲットする。
	// 所持配列にプッシュしていく
	void CatchCard(int nIndex);

	// カードを手放す
	// 引数のIndex番号の配列要素を削除する。
	void ReleqaseCard(int nHaveIndex);

	// 手札すべて取得
	std::vector<int> GetHandCardList() { return m_anHandIndexList; }

private:
	std::vector<int> m_anHandIndexList;

};

