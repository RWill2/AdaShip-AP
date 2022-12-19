#include "headersReq.hpp"

int gameMode;



void validGameMode(int userChoice){
  switch(userChoice){
    case 1:
      Board();
      //readFile(configFile);
      break;
    case 9:
      std::cout << "Goodbye\n";
      break;
    default:
      std::cout << "Invalid input!\n";
      break;
  }
}

void game(){
  std::cout << "Select a game mode or enter 9 to quit\n"; 
  std::cout << "1) Player vs Computer\n";
  std::cout << "9) Quit\n";
  std::cin >> gameMode;

  validGameMode(gameMode);
}