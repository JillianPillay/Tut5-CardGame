#pragma once
class DeckOfCards
{
public:
	int i;
	int cards;
	DeckOfCards();
	~DeckOfCards();
	void deck();
	void reset();
	void shuffle();
	void peek();
	void numberOfcards();
};

