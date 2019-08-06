#include <card.h>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;
class Deck{
public:
	Deck(bool type, int jokers, int many){
		if(type){	//merges organized decks together
			for(int i = 0; i < many; i++){
				for(int j = 0; j < 4; j++){
					for(int k = 0; k < 13; k++){
						deck.push_back(j+1, i);
					}
				}
				for(int j = 0; j < jokers; j++){
					deck.push_back(14, 4);
				}
			}
			cardsLeft = many * 52 + jokers;
		}
		else{
			cardsLeft = many * 52 + jokers; //counter the total number of cards
			for(int i = 0; i < many; i++){ //makes all the decks
				for(int j = 0; j < 4; j++){
					for(int k = 0; k < 13; k++){
						deck.push_back(j+1, i);
					}
				}
				for(int j = 0; j < jokers; j++){
					deck.push_back(14, 4);
				}
			}
			//basic randomizer implemented
			srand(time(0));
			for(int i = 0; i < cardsLeft; i++){
				int r = i + (rand() % (cardsLeft - i));
				swap(deck[i], deck[r]);
			}
		}
	}
	void reshuffle_cur(){
		srand(time(0));
		for(int i = 0; i < cardsLeft; i++){
			int r = i + (rand() % (cardsLeft - i));
			swap(deck[i], deck[r]);
		}
	}
	void reshuffle(){
		cardsLeft = cardsLeft + discard.size();
		vector<Card> newDeck;
		newDeck.reserve(cardsLeft);
		newDeck.insert(newDeck.end(), deck.begin(), deck.end());
		newDeck.insert(newDeck.end(), discard.begin(), discard.end());
		deck = newDeck;
		reshuffle_cur();
	} // reshuffles entire deck
	Card draw(){
		cardsLeft--;
		Card res = deck[0];
		discard.push_back(res);
		deck.erase(0);
		return res;
	}
	vector<Card> drawMulti(int n){
		vector<Card> res;
		res.reserve(n);
		for(int i = 0; i < n; i++){
			res.insert(i, draw());
		}
		return res;
	}
	void add_card(Card a){
		deck.push_back(a);
		cardsLeft++;
	}
private:
	vector<Card> deck;
	vector<Card> discard;
	int cardsLeft;
}