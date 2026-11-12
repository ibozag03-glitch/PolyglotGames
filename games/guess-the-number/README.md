# Guess the Number

Guess the secret number chosen by the computer. The number is between 1 and 100, inclusive. 
The game tells you whether each valid guess is too low or too high.

## Status

- Game: Planned
- Documentation: Initial specification
- Implementation: Not started
- Planned language: C
- Planned interface: Console
- Available languages: None

## How to play

1. Start a game round.
2. Enter a whole number between 1 and 100.
3. Use the feedback to make another guess.
4. Continue until you guess correctly.
5. The game reports the number of valid guesses used.
6. Choose whether to play another round.

Invalid entries do not count as guesses.

## Scope

The first version is for one player, has no maximum number of guesses, and does not save scores. 
Difficulty levels, statistics, and graphical or multilingual interfaces are outside the first version's scope.

## Documentation

- [Game rules](rules.md)
- [Test plan](../../tests/guess-the-number/test_plan.md)
