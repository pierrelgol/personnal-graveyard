import random


class Card:

    def __init__(self, suits, ranks):
        self.suit = suits
        self.rank = ranks

    def __str__(self):
        return f"{self.rank['rank']} of {self.suit}"


class Deck:

    def __init__(self):
        self.cards = []
        suits = ["Hearts", "Spades", "Diamonds", "Clubs"]
        ranks = [
            {"rank": "A",  "value": 11},
            {"rank": "K",  "value": 10},
            {"rank": "Q",  "value": 10},
            {"rank": "J",  "value": 10},
            {"rank": "10", "value": 10},
            {"rank": "9",  "value":  9},
            {"rank": "8",  "value":  8},
            {"rank": "7",  "value":  7},
            {"rank": "6",  "value":  6},
            {"rank": "5",  "value":  5},
            {"rank": "4",  "value":  4},
            {"rank": "3",  "value":  3},
            {"rank": "2",  "value":  2},
        ]
        for s in suits:
            for r in ranks:
                self.cards.append(Card(s, r))

    def shuffle_cards(self):
        if len(self.cards) > 1:
            random.shuffle(self.cards)

    def get_cards(self, number):
        cards_dealt = []
        for x in range(number):
            if len(self.cards) > 0:
                card = self.cards.pop()
                cards_dealt.append(card)
        return cards_dealt


class Hand:

    def __init__(self, dealer=False):
        self.cards = []
        self.value = 0
        self.dealer = dealer

    def add_card(self, card_list):
        self.cards.extend(card_list)

    def calculate_value(self):
        self.value = 0
        has_ace = False
        card_value = 0
        for card in self.cards:
            if len(self.cards) > 0:
                card_value = int(card.rank["value"])
                if card.rank["rank"] == "A":
                    has_ace = True
            self.value += card_value

        if has_ace and self.value > 21:
            self.value -= 10

    def get_value(self):
        self.calculate_value()
        return self.value

    def is_blackjack(self):
        return self.get_value() == 21

    def display(self, show_all_dealer_cards=False):
        print(f'''{"Dealer's" if self.dealer else "Your" } hand:''')
        for index, card in enumerate(self.cards):
            if index == 0 and self.dealer \
                    and not show_all_dealer_cards \
                    and not self.is_blackjack():

                print("hidden")
            else:
                print(card)

        if not self.dealer:
            print("Value:", self.get_value())
        print()


class Game:

    def play(self):
        game_number = 0
        games_to_play = 0
        while games_to_play <= 0:

            try:
                games_to_play = int(
                    input("How many games do you want to play? "))
            except:
                print("You must enter a number.")

        while game_number < games_to_play:
            game_number += 1

            deck = Deck()
            deck.shuffle_cards()

            player_hand = Hand()
            dealer_hand = Hand(dealer=True)

            for i in range(2):
                player_hand.add_card(deck.get_cards(1))
                dealer_hand.add_card(deck.get_cards(1))

            print()
            print('*' * 30)
            print(f"Game {game_number} of {games_to_play}")
            print('*' * 30)
            player_hand.display()
            dealer_hand.display()

            if self.check_winner(player_hand, dealer_hand):
                continue

            choice = ""
            while player_hand.get_value() < 21 and choice not in ["s", "stand"]:
                choice = input("Please choose 'Hit' or 'Stand': ").lower()
                print()
                while choice not in ["h", "s", "hit", "stand"]:
                    choice = input("Please enter 'Hit' or 'Stand', or (H/S) ")
                    print()
                if choice in ["Hit", "h"]:
                    player_hand.add_card(deck.get_cards(1))
                    player_hand.display()

            if self.check_winner(player_hand, dealer_hand):
                continue

            player_hand_value = player_hand.get_value()
            dealer_hand_value = player_hand.get_value()

            while dealer_hand_value < 17:
                dealer_hand.add_card(deck.get_cards(1))
                dealer_hand_value = dealer_hand.get_value()

            dealer_hand.display(show_all_dealer_cards=True)

            print("Final Results")
            print("Your hand:", player_hand_value)
            print("Dealer's hand:", dealer_hand_value)
            self.check_winner(player_hand, dealer_hand, game_over=True)

    def check_winner(self, player_hand, dealer_hand, game_over = False):
        if not game_over:
            if player_hand.get_value() > 21:
                print("You busted. Dealer wins!")
            elif dealer_hand.get_value() > 21:
                print("Dealer busted. You win!")
            elif dealer_hand.is_blackjack() and player_hand.is_blackjack():
                print("Both Platers have blackjack. It's a Tie!")
            elif player_hand.is_blackjack():
                print("You have blackjack. You win!")
                return True
            elif dealer_hand.is_blackjack():
                print("Dealer has blackjack. Dealer wins!")
                return True
        else:
            if player_hand.get_value() > dealer_hand.get_value():
                print("You win!")
            elif ( player_hand.get_value() == dealer_hand.get_value() ):
                print("Dealer wins!")
            return True
        return False


game = Game()
game.play()
