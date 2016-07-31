#pragma once
#include <vector>

class Player
{
public:
	Player();
	~Player();

	// �J�[�h���Q�b�g����B
	// �����z��Ƀv�b�V�����Ă���
	void CatchCard(int nIndex);

	// �J�[�h�������
	// ������Index�ԍ��̔z��v�f���폜����B
	void ReleqaseCard(int nHaveIndex);

	// ��D���ׂĎ擾
	std::vector<int> GetHandCardList() { return m_anHandIndexList; }

private:
	std::vector<int> m_anHandIndexList;

};

