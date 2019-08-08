#include <string>
class Card{
public:
	Card(int n, int s);
	char get_suit_l();
	/*
	0 : Hearts
	1 : Clubs
	2 : Diamonds
	3 : Spades
	4 : Joker
	else : Empty
	*/
	int get_suit();
	string get_val_s();
	/*
	1-10 represent A-10
	11-13 represent J-K
	14 represnts a Joker
	else is Error
	*/
	int get_val();
	void show();
private:
	int suit; //suit
	int val; //value
}