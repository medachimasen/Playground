#include <card.h>
#include <deck.h>
#include <vector>
using namespace std;
class Player{
public:
	Player(Card a);
	void show();
	vector<Card> getHand();
	int getTotal();
	void addCard(Card a);
	void addMoney();
	void reset();
private:
	vector<Card> hand;
	int total;
	bool bust;
}
class Dealer : public Player{
public:
	void showOne();
	void showOneCard();
private:
	vector<Card> hand;
	int firstHand;
	int total;
	bool bust;
}