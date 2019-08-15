#include <card.h>
#include <deck.h>
#include <vector>
using namespace std;
class Player{
public:
	Player(int mon);
	void bet(int a);
	void firstDeal(Card a, Card b);
	void show();
	vector<Card> getHand();
	int getTotal();
	void addCard(Card a);
	void addMoney();
	void reset();
	bool busted();
private:
	vector<Card> hand;
	int total;
	int money;
	bool bust;
	bool bj;
	int aces;
}
class Dealer : public Player{
public:
	Dealer(Card a, Card b);
	void showOne();
private:
	vector<Card> hand;
	int total;
	int money;
	bool bust;
	bool bj;
	int aces;
}