# PolyglotGames — Architecture

This document describes the high-level architecture and repository
organization of PolyglotGames.

## Overview

PolyglotGames is a collection of classic games implemented in multiple programming languages. 
The repository is organized so that each game has its own folder, 
while shared resources and documentation are kept separate.

The main goals of this structure are:

- Keep each game independent and easy to understand.
- Make it easy to add a new game or a new language.
- Avoid duplication by sharing only what is truly common.
- Keep documentation close to the code it describes.

## PolyglotGames structure

```
PolyglotGames/
├── README.md
├── CONTRIBUTING.md
├── LICENSE
├── .gitignore
├── docs/
│   ├── screenshots/
│   ├── ARCHITECTURE.md
│   └── ROADMAP.md
├── games/
│   └── [game_name]/
│       ├── README.md
│       ├── rules.md
│       └── [language]/
├── shared/
│   ├── data/
│   ├── assets/
│   │   ├── images/
│   │   └── sounds/
│   └── documentation/
└── tests/
    └── [game_name]/
        ├── test_plan.md
        └── [language]/
```

## Folder responsibilities

### Root files

- `README.md` — project overview and quick start.
- `CONTRIBUTING.md` — how to contribute to the project.
- `LICENSE` — project license.
- `.gitignore` — files and folders excluded from version control.

### `docs/` folder

- `screenshots/` — screenshots of games and user interfaces.
- `ARCHITECTURE.md` — this file; explains the repository organization.
- `ROADMAP.md` — planned evolution of the project.

### `games/` folder

- `games/` — contains one folder per game.
- `games/[game_name]/README.md` — presents the game and its implementations.
- `games/[game_name]/rules.md` — describes the game rules, independent of language.
- `games/[game_name]/[language]/` — contains the implementation for a given language.

Example:
```
games/guess-the-number/
├── README.md
├── rules.md
├── c/
├── javascript/
└── python/
```

### `shared/` folder

- `shared/assets/` — images, sounds or fonts shared between games.
- `shared/data/` — data files shared between games (e.g. word lists).
- `shared/documentation/` — documentation shared by several games, such as coding style, testing guidelines or i18n rules. 
    Use it only when at least two games need the same document.

The `shared/` folder is used only when a resource is genuinely reused by
several games. Do not create shared files “just in case”.

### `tests/` folder

- `tests/` — contains tests organized by game.
- `tests/[game_name]/test_plan.md` — optional language-independent acceptance plan for the game.
- `tests/[game_name]/[language]/` — contains tests for that game’s implementation in the specified language.

## Project Identification

Project Name: **PolyglotGames**

Repository URL: https://github.com/ibozag03-glitch/PolyglotGames

Primary Contact: ibozag03-glitch

Date of Last Update: [2026-11-12]
