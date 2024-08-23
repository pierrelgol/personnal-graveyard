import random


def get_choices():
    options = ["rock", "paper", "scissors"]
    player_choice = input("Enter a choice : rock, paper, scissors :")
    computer_choice = random.choice(options)
    choices = {"player": player_choice, "computer": computer_choice}

    return choices


def check_win(player, computer):
    print(f"You chose {player}, computer chose {computer}")
    if player == computer:
        return ("It's a tie!")
    if player == "rock":
        if computer == "scissors":
            return "Player win"
        if computer == "paper":
            return "Computer win"
    if player == "scissors":
        if computer == "paper":
            return "Player win"
        if computer == "rock":
            return "Computer win"
    if player == "paper":
        if computer == "rock":
            return "Player win"
        if computer == "scissors":
            return "Computer win"
    return [player, computer]


NTH_GAME = 3
nth_game_played = 0
p_win = 0
c_win = 0

while nth_game_played <= NTH_GAME:
    choices = get_choices()
    result = check_win(choices["player"], choices["computer"])
    if result == "Player win":
        p_win += 1
    elif result == "Computter win":
        c_win += 1

    print(result)
    nth_game_played += 1


if p_win > c_win:
    print(f"Player win with a score of {p_win}")
else:
    print(f"Computer win with a score of {c_win}")
