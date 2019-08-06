#include <card.h>
#include <vector>
using namespace std;
class Deck{
public:
	Deck(bool type, int jokers, int many); //true means normal deck as if opened
	//false means suffled deck, number of jokers adds that many
	//if many is > 1 make merge more decks;
	void reshuffle_cur(); //shuffles current deck
	void reshuffle(); // reshuffles entire deck
	Card draw();
	vector<Card> drawMulti(int n); //draw multiple
	void add_card(Card a);
private:
	vector<Card> deck;
	vector<Card> discard;
	int cardsLeft;
}