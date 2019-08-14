#include <game.h>
#include <iostream>
using namespace std;
class Player{
public:
	Player(int mon){
		money = mon;
	}
	void bet(int a){
		money -= a;
	}
	void firstDeal(Card a, Card b){
		hand.push_back(a);
		hand.push_back(b);
		total = changeToBJVal(a) + changeToBJVal(b);
		bust = 0;
		if(total == 21){
			bj = 1;
		}
	}
	void show(){
		if(total <= 10 && aces > 0){
			cout << "Total: " << total - 10 << " or " << total << endl;
		}
		else{
			cout << "Total: " << total << endl;
		}
		for(int i = 0; i < hand.size(); i++){
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
		int val = changeToBJVal(a);
		total += val;
		if (val > 21){
			if(aces > 0){
				total -= 10;
			}
			else{
				bust = 1;
			}
		}
	}
	void addMoney(int a){
		money += a;
	}
	void reset(){
		hand = new vector<Card>;
		bj = 0;
		aces = 0;
	};
private:
	vector<Card> hand;
	int total;
	int money;
	bool bust;
	bool bj;
	int aces;
}
int changeToBJVal(Card a){
	int val = a.get_val();
	if(val > 1 && val < 11){
		return val;
	}
	else if (val >= 11){
		return 10;
	}
	else{
		return 11;
	}
}
bool isAce(Card a){ //possible parallel implementation of search here
	if (a.get_val == 1){
		return true;
	}
	return false;
}