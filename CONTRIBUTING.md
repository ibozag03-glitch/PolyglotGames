# Contributing to PolyglotGames

Thank you for your interest in contributing to PolyglotGames.

This document explains how to add a new game and keep the repository consistent.

## How to contribute

1. Clone the repository.
2. Create a new branch for each game or feature:
```bash
git checkout -b game/game_name
```
or
```bash
git checkout -b game_name/feature_name
```
3. Make small, focused and clear commit messages.
4. Open a pull request when the feature is ready.

## Adding a new game

1. Create a new folder in `games/` with the name of the game. e.g. `games/guess-the-number/`.
2. Add a `README.md` file to present the game and its implementations. It will be the game documentation.
3. Add a `rules.md` file to describe the game rules.
4. Create a subfolder for each implementation language as described in [Adding a new language](#adding-a-new-language).
5. Add tests in `tests/[game_name]/` when relevant.
6. Update the [roadmap](docs/ROADMAP.md) file by adding the new game into the games list.

## Adding a new language

1. Create a new subfolder in `games/[game_name]/` with the name of the language. e.g. `games/guess-the-number/c/`.
2. Implement the game in that language.
3. Update `games/[game_name]/README.md` to list the new implementation.
4. Update the [list of games and status](docs/ROADMAP.md#list-of-games-and-status).

## Naming conventions

- Use English for all code, documentation and file names.
- Use lowercase and hyphens for folder names, for example `guess-the-number`.
- Use clear and descriptive names for files and functions.
- Keep game folders independent: a game should not depend on another game.

## Documentation

- Put detailed game information in `games/[game_name]/README.md`.
- Put game rules in `games/[game_name]/rules.md`.
- Update `docs/ROADMAP.md` when the project status changes.

## Shared resources

Use `shared/` only when a resource is reused by several games, for example:

- A word list used by two guessing game.
- Common images, sounds or fonts.
- Common configuration or utilities.
- Common documentation conventions.

When a resource is used by only one game, keep it inside that game’s folder.
