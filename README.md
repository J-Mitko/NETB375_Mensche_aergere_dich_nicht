C++ game - Mensche_aergere_dich_nicht 
=========================
Check wiki for the rule set and game plan.

NBU NETB 375 project
10.02.2015


## Rules
The game can be played by 2, 3 or 4 players – one player per board side (the original board has a pattern for 6 players on the reverse). Each player has 4 game pieces, which are in the "out" area when the game starts, and which must be brought into the player's "home" row. Early games had painted wooden pieces.

The rows are arranged in a cross pattern. They are surrounded and connected with a circle of fields, over which the game pieces move in clockwise direction. There are 3 fields nearest to each side of the board; the left one is the player's "start" field (marked "S") and the middle one leads to the "home" row.

This means that each game piece enters the circle at the "start" field, moves (clockwise) over the board and finally enters the "home" row. The first player with all of their pieces in their "home" row wins the game.

The players throw a die in turn and can advance any of their pieces in the game by the thrown number of dots on the die.

Throwing a six means bringing a piece into the game (by placing one from the "out" area onto the "start" field) and throwing the die again. In some variants, a player who has no pieces in the game has three tries to throw a six. If a piece is on the "start" field and there are still pieces in the "out" area, it must be moved as soon as possible. If a piece cannot be brought into the game then any other piece in the game must be moved by the thrown number, if that is possible.

Pieces can jump over other pieces, and throw out pieces from other players (into that player's "out" area) if they land on them. A player cannot throw out his own pieces though, and cannot advance further than the last field in the "home" row. A player cannot be thrown out if he is on his "start" field.

## Game Plane
![Game Plan](http://upload.wikimedia.org/wikipedia/commons/9/91/Menschenaergern.svg)

## My Task - Create computer controlled players 
To complete this task, i reasearched what are the best strategies for playing the game. The player should aim for
- score a point if it can. 
- never to pass an opportunity to remove an enemy token from the board, because this way the player slows the progress of his/her opponent drastically,thus lowering their chance to win.
- if the dice is 6 the ai will try to put a new token on the board.
- if none of the above were possible the ai will move one of its tokens on the board if it has any. This is done by
