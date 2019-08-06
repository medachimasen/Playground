#include <string>
class Card{
public:
	Card(int n, int s);
	char get_suit_l();
	int get_suit();
	string get_val_s();
	int get_val();
	void show();
private:
	int suit; //suit
	int val; //value
}