# PolyglotGames

PolyglotGames is a collection of classic games implemented in various programming languages.
The main goal is to learn, compare and understand programming languages by reusing
the same game rules while progressively increasing technical complexity.

## Goals

- Implement the game in several programming languages
- Compare language features, syntax and project organisation
- Start with simple console games, then move to browser and graphical games
- Keep a clean, modular and documented repository structure

## Games

Games are sorted by difficulty.

| Game | Difficulty | Status |
|---|---|---|
| Guess the Number | Very easy | In progress |
| Rock Paper Scissors | Very easy | Planned |
| Hangman | Easy | Planned |
| Tic-Tac-Toe | Easy | Planned |
| Multilingual Quiz | Medium | Planned |
| Memory Match | Medium | Planned |
| Snake | Medium | Planned |
| Connect Four | Medium | Planned |
| Pong | Medium | Planned |
| Breakout | Hard | Planned |

NB: You can add more games to this list.

## Project structure

```
PolyglotGames/
├── README.md
├── LICENSE
├── .gitignore
├── docs/
│   ├── screenshots/
│   ├── ARCHITECTURE.md
│   └── ROADMAP.md
├── games/
│   └── [game]/
│       ├── README.md
│       ├── rules.md
│       └── [language]/
├── shared/
└── tests/
```
- `games/` contains one folder per game.
- `games/[game]/README.md` presents the game and its implementations.
- `games/[game]/rules.md` describes the game rules.
- `shared/` contains data and assets shared between games.
- `tests/` contains tests for each game.
- `docs/` contains project-level documentation.

Follow the [architecture](docs/ARCHITECTURE.md) file for more details about the project organization.

## Project status

The project is currently in its initialization phase.
The repository structure and roadmap are defined. Documentation for Guess the Number is in place, and
the C implementation has started, but gameplay has not been implemented yet.

The first game being implemented is **Guess the Number** in C.

## Contributing

Contributions are welcome.

Check out the [contributing](CONTRIBUTING.md) file to see the guidelines for contributing to the project, 
adding a new game, and following the naming conventions.

## License

This project is licensed under the terms of [MIT license](LICENSE).