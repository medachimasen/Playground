#include <iostream>
#include <string>
using namespace std;

class Card{
public:
	Card(int n, int s){
		suit = s;
		value = n;
	}
	char get_suit_l(){
		switch(suit){
			case 0:
			return 'H';
			case 1:
			return 'C';
			case 2:
			return 'D';
			case 3: 
			return 'S';
			case 4:
			return 'J';
			default:
			return 'E';
		}
	}
	int get_suit(){
		return suit;
	}
	string get_val_s(){
		switch(value){
			case 1:
			return "A";
			case 2:
			return "2";
			case 3:
			return "3";
			case 4:
			return "4";
			case 5:
			return "5";
			case 6:
			return "6";
			case 7:
			return "7";
			case 8:
			return "8";
			case 9:
			return "9";
			case 10:
			return "10";
			case 11:
			return "J";
			case 12:
			return "Q";
			case 13:
			return "K";
			case 14:
			return "Joker";
			default:
			return "error";
		}
	}
	int get_val(){
		return value;
	}
	void show(){
		cout << get_val_s() << get_suit_l();
	}
private:
	int suit;
	int value;
}