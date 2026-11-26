# Guess the Number

Guess the secret number chosen by the computer. The number is between 1 and 100, inclusive. 
The game tells you whether each valid guess is too low or too high.

## Status

- Game: In progress
- Documentation: Initial specification
- Implementation: C starter program without gameplay
- Planned language: C
- Planned interface: Console
- Available languages: None

## Planned gameplay

1. Start a game round.
2. Enter a whole number between 1 and 100.
3. Use the feedback to make another guess.
4. Continue until you guess correctly.
5. The game reports the number of valid guesses used.
6. Choose whether to play another round.

Invalid entries do not count as guesses.

## Build and run

From the repository root, use:

```bash
cd games/guess-the-number/c
mingw32-make
mingw32-make run
```

To remove the generated executable, use:

```bash
mingw32-make clean
```

## Scope

The first version is for one player, has no maximum number of guesses, and does not save scores. 
Difficulty levels, statistics, and graphical or multilingual interfaces are outside the first version's scope.

## Documentation

- [Game rules](rules.md)
- [Test plan](../../tests/guess-the-number/test_plan.md)
