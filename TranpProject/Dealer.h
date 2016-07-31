#pragma once
#include <vector>

class Dealer
{
public:
	Dealer();
	~Dealer();

	// �J�[�h����������
	// �߂�l�́A�����������̃J�[�h�ԍ�
	static std::vector<int> PullCard(int nOutCount);
	
	// �R�D�擾
	static std::vector<int> GetStockCard();
	
	// �V���b�t��
	static void Shuffle();

private:
	static std::vector<int> m_anStock;

};

