# Guess the Number - Rules

## Objective

Guess the secret whole number selected by the game.

## Setup

- The game selects a random integer from 1 to 100, inclusive.
- The number of valid guesses starts at zero.

## Turn sequence

1. The player enters a guess.
2. The guess must be a whole number from 1 to 100.
3. If the input is invalid, the game displays the appropriate error message and asks again. 
    Invalid input does not count as a guess.
4. For a valid guess, the game increases the attempt count by one.
5. The game compares the guess with the secret number:
	- If the guess is lower, it displays `Your number is too low.`
	- If the guess is higher, it displays `Your number is too high.`
	- If the guess is correct, it displays `Correct! You found the secret number!` and the total number of valid guesses.

A round ends when the player guesses the secret number. There is no maximum number of guesses.

## Input rules

- The input must be a whole number; decimals and other non-numeric text are invalid.
- The number must be between 1 and 100, inclusive.
- Empty input is invalid.
- A guess outside the allowed range is invalid.
- Invalid input does not use up a guess.

## Expected messages

| Situation | Message |
|---|---|
| Prompt for a guess | `Enter a number between 1 and 100:` |
| Guess is lower than the secret number | `Your number is too low.` |
| Guess is higher than the secret number | `Your number is too high.` |
| Guess is correct | `Correct! You found the secret number!` |
| Invalid or empty input | `Invalid input. Please enter a whole number.` |
| Guess is below 1 or above 100 | `Invalid input. Please enter a number between 1 and 100.` |
| Attempt count after a correct guess | `Attempts: {count}` |
| Ask whether to play again | `Play again? (y/n):` |
| Invalid replay response | `Please enter y or n.` |

For the replay prompt, `y` or `yes` starts a new round; `n` or `no` exits. 
Responses are case-insensitive. Starting a new round selects a new secret number and resets the attempt count.

## Version 1 scope

- One player.
- Console interface.
- Secret number from 1 to 100, inclusive.
- No maximum number of guesses.
- Invalid input does not count as a guess.
- Replay starts a new round.
- No saved scores, difficulty levels, statistics, or graphical interface.

## Future features

- Difficulty levels.
- Maximum number of guesses.
- Best-score storage and statistics.
- Multilingual interface.
- Graphical interface.
