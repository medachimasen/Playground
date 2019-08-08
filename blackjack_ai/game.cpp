#include <game.h>
#include <iostream>
using namespace std;
class Player{
public:
	Player(Card a){
		hand.push_back(a);
		int val = a.get_val();
		if(val > 1 && val < 11){
			total = val;
			aceTotal = val;
		}
		else if (val >= 11){
			total = 10;
			aceTotal = 10;
		}
		else{
			total = 1;
			aceTotal = 11;
		}
		bust = 0;
	}
	void show(){
		if(aceTotal <= 21 && aceTotal != total){
			cout << "Total: " << total << " or " << aceTotal << endl;
		}
		else{
			cout << "Total: " << total << endl;
		}
		for(int i = 0; i < hand.size(); I++){
			hand[i].show();
		}

	}
	vector<Card> getHand(){
		return hand;
	}
	int getTotal(){
		return total;
	}
	void addCard(Card a){
		hand.push_back(a);
		int 
	}
	void addMoney();
	void reset();
private:
	vector<Card> hand;
	int total;
	int aceTotal;
	bool bust;
}
