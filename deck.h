#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - Enumeration of card suits.
 * @SPADE: Spades suit.
 * @HEART: Hearts suit.
 * @CLUB: Clubs suit.
 * @DIAMOND: Diamonds suit.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card.
 *
 * @value: Value of the card, ranging from "Ace" to "King."
 * @kind: Kind of the card (suit).
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Node in a deck of cards.
 *
 * @card: Pointer to the card of the node.
 * @prev: Pointer to the previous node in the deck.
 * @next: Pointer to the next node in the deck.
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

/**
 * sort_deck - Sort a deck of cards.
 * @deck: Pointer to the head of the deck.
 */
void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
