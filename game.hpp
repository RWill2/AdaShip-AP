#pragma once
#include "player.hpp"
#include "board.hpp"

#ifndef game_h
#define game_h

class Game{
  public:
    void game();
    void gameStart(bool p2Auto);
    void validGameMode(int userChoice);
    void initialiseBoard(Board b_);
    void initialiseAutoBoard(Board b_);
    std::string splitString();
    void switchPlayers();
    Player player1;
    Board player1Board;
    Player player2;
    Board player2Board;

  private:

};

#endif