// A deck consist of 52 cards.
// A card belong to particular suit.
// June 14 2021
class Card {
	int value;
	int suit;

	public Card(int value, int suit) {
		this.value = value;
		this.suit = suit;
	}
    // Compare suite
    // Compare cards value
	public int compareTo(Card that) {
		if(this.suit < that.suit) {
			return -1;
		}
		if(this.suit > that.suit) {
			return 1;
		}
		if(this.value < that.value) {
			return -1;
		}
		if(this.value > that.value) {
			return 1;
		}
		return 0;
	}
}

class Runner {
	public static void main(String[] args) {
		// Now we need to init the card deck -> which is collection of cards.
		// Suit - 1 (heart) 2(club) 3(spade) 4(diamond)

		Card[] deck = new Card[52];

		int k = 0;

		for(int suit= 0; suit<4; suit++) {
			for(int value = 0; value<13; value++) {
				deck[k] = new Card(value, suit);
				k++;
			}
		}

		// Suppose one card is missing
		deck[51] = null;

		// Find the missing cards
		// Iterate to find missing card
		int count = 0;
		for(Card c : deck) {
			if (c == null) {
				System.out.println("Found Missing card");
				// Determining which card it is.
				// I have a sequential ordering
				System.out.println("Location : " + (count));
				int suit = 0;
				while(count >= 13) {
					count = count - 13;
					suit++;
				}
				System.out.println("Card belongs to Suit " + (suit+1) + " and has value " + (count+1));
			}
			else {
				count++;
			}
		}

		// Searching for particular card
		// Binary search
		int index = binarySearch(deck, 0, deck.length-1, new Card(13,0));
		System.out.println("Location in deck array " + index);
	}

	public static int binarySearch(Card[] deck, int start, int end, Card target) {
		int idx = -1;
		while(start <= end) {
			int mid = start + (end-start)/2;

			int ans = deck[mid].compareTo(target);
			if(ans == 0) {
				return mid;
			}
			if(ans < 0) {
				start = mid+1;
			}
			else {
				end = mid-1;
			}
		}

		return idx;
	}
}

