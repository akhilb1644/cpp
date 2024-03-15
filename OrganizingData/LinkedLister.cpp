#include <iostream>
using namespace std;

class Player {
	string name;

	public:
		Player(string);
		void setName(string);
		string getName();
};

class Node {
	string dialogue;
	Player player;

	public:
		Node(string,Player);
		void setDialogue(string);
		string getDialogue();
		void setPlayer(Player);
		Player getPlayer();
};

Player::Player (string n) {
	name = n;
}

void Player::setName(string n) {
	name = n;	
}

string Player::getName() {
	return name;
}

Node::Node(string n, Player p) {
	name = n;
	player = p;
}

void Node::setDialogue(string d) {
	dialogue = d;
}

string Node::getDialogue() {
	return dialogue;
}

void Node::setPlayer(Player p) {
	player = p;
}

Player Node::getPlayer() {
	return player;
}