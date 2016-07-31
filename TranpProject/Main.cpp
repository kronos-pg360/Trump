#include "CardManager.h"
#include "Player.h"
#include "Dealer.h"

int main()
{
	Player* m_cPlayer = new Player();

	CardManager& cInstance = CardManager::GetInstance();

	// Card作成
	cInstance.CreateCard();

	// シャッフル
	Dealer::Shuffle();

	// Cardを引く
	std::vector<int> anGetCardList = Dealer::PullCard(10);
	for (unsigned int i = 0; i < anGetCardList.size(); i++)
	{
		m_cPlayer->CatchCard(anGetCardList[i]);
	}

	printf("\n");
	printf("現在 プレイヤー手札");
	printf("\n");

	for (auto& nCardIndex : m_cPlayer->GetHandCardList())
	{
		Card& cCard = cInstance.GetCardData(nCardIndex);

		printf(cCard.GetTypeName().c_str());
		printf(" : ");
		printf(std::to_string(cCard.GetIndex()).c_str());
		printf("\n");
	}

	printf("\n");
	printf("残り山札");
	printf("\n");

	for (auto& nCardIndex : Dealer::GetStockCard())
	{
		Card& cCard = cInstance.GetCardData(nCardIndex);
		printf(cCard.GetTypeName().c_str());
		printf(" : ");
		printf(std::to_string(cCard.GetIndex()).c_str());
		printf("\n");
	}
	
	getchar();

	delete m_cPlayer;

	return 0;
}