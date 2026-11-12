# Guess the Number - Test Plan

This plan defines the behavior that every implementation of Guess the Number must satisfy. 
It complements the [game rules](../../games/guess-the-number/rules.md); the rules describe the game, and this plan describes how to verify it.

## Test setup

For tests that need a predictable secret number, use a test mode or test harness that supplies the secret. 
Do not expose or fix the secret in the normal game.

Unless a test says otherwise, use `50` as the secret number.

## Test cases

| ID | Test case | Setup and input | Expected result |
|---|---|---|---|
| TC-01 | Guess is too low | Secret: `50`; guess `25` | Displays `Your number is too low.` and continues the round |
| TC-02 | Guess is too high | Secret: `50`; guess `75` | Displays `Your number is too high.` and continues the round |
| TC-03 | Correct guess | Secret: `50`; guess `50` | Displays `Correct! You found the secret number!`, reports `Attempts: 1`, and ends the round |
| TC-04 | Minimum valid guess | Secret: `50`; guess `1` | Accepts and compares the guess; displays the low feedback |
| TC-05 | Maximum valid guess | Secret: `50`; guess `100` | Accepts and compares the guess; displays the high feedback |
| TC-06 | Guess below range | Guess `0` | Displays `Invalid input. Please enter a number between 1 and 100.`; attempt count does not increase |
| TC-07 | Guess above range | Guess `101` | Displays `Invalid input. Please enter a number between 1 and 100.`; attempt count does not increase |
| TC-08 | Non-integer input | Enter `abc` | Displays `Invalid input. Please enter a whole number.`; attempt count does not increase |
| TC-09 | Empty input | Submit an empty line | Displays `Invalid input. Please enter a whole number.`; attempt count does not increase |
| TC-10 | Decimal input | Enter `12.5` | Displays `Invalid input. Please enter a whole number.`; attempt count does not increase |
| TC-11 | Attempt count | Secret: `50`; guesses `25`, `75`, then `50` | Reports `Attempts: 3` |
| TC-12 | Invalid input does not count | Secret: `50`; enter `abc`, then `50` | Rejects `abc`; after the correct guess, reports `Attempts: 1` |
| TC-13 | Replay starts a round | Win a round, then answer `y` or `yes` | Starts a new round and resets the attempt count |
| TC-14 | Replay starts fresh state | Configure the next test round's secret as `70`; after replay, guess `70` | The new round ends and reports `Attempts: 1` |
| TC-15 | Decline replay | Win a round, then answer `n` or `no` | Exits the game |
| TC-16 | Replay response is case-insensitive | Answer `YES` or `N` at the replay prompt | Treats the answers as `yes` and `no`, respectively |
| TC-17 | Invalid replay response | Answer `maybe` at the replay prompt | Displays `Please enter y or n.` and asks again |
| TC-18 | Secret number range | Use controlled random-source values at the range boundaries when supported; otherwise, generate repeated values as a sanity check | Every selected secret is an integer from 1 to 100, inclusive |

A randomly selected number may repeat between rounds; replay must select a secret again, but it does not have to be different from the previous one.
Repeated random samples are a range sanity check, not proof that all possible generated values are in range or that the distribution is uniform.

## Acceptance criteria

An implementation is complete when:

- It selects a secret integer from 1 to 100, inclusive.
- It accepts only whole-number guesses in that range.
- Invalid input is rejected without incrementing the attempt count.
- Valid guesses receive the correct feedback.
- A correct guess ends the round and reports the number of valid guesses.
- Replay starts a new round with a reset attempt count, or exits when declined.
- All applicable test cases pass.