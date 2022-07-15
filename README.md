# Rock Paper Scissors

## About

This was a fun project I made that detects the winner of a game of Rock-Paper-Scissors.

## Buidling

Once you have cloned this project, to build it, all you need to do is run `make`. However, on certain devices you may need to change the line `rm *.o` to `del *.o`.

## Usage

```bsh
./RockPaperScissors <Player 1 Choice> <Player 2 Choice>
```

## Examples

```bsh
$ ./RockPaperScissors scissors rock
Player 1: scissors
Player 2: rock
------------------
Player 2 wins!
```

```bsh
$ ./RockPaperScissors rock scissors
Player 1: rock
Player 2: scissors
------------------
Player 1 wins!
```

```bsh
$ ./RockPaperScissors dynamite scissors
Invalid choice: dynamite
```
