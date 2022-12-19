#include "headersReq.hpp"

int gameMode;

void gameStart(bool p2Auto){
  int currentPlayer, nextPlayer;

  player1.Player(false, 1);
  initialiseBoard(player1Board);
  if(p2Auto){
    player2.Player(false, 2);
    initialiseBoard(player2Board);
  }
  else{
    player2.Player(true, 2);
    intitialiseAutoBoard(player2Board);
  }
  
}

std::string Game::splitString(){
  std::string validInput;
  std::getline(std::cin, validInput);
  bool valid = false;

  do{
    if(validInput.length() == 2 && (validInput[0] >= 65 && validInput[0] <= 74) && (validInput[1] >= 48 && validInput[1] <= 57)){
      valid = true;
    }
    else{
      std::cout << "Invalid input! Enter location [Letter][Number]\n";
      std::getline(std::cin, validInput);
    }
  }while(valid != true);
  return validInput;
}

void Game::initialiseAutoBoard(Board b_){
  int xPos, yPos, horizontal;

  for(int j = 0; j < shipNames.size(); j++){
    do{
      xPos = rand()%10;
      yPos = rand()%10;
      horizontal = rand()%2;
    }while(!b_.placeShip(j, xPos, yPos, horizontal));
  }
  std::cout << "Computer board:\n";
  b_.printPlayerBoard();
}

void Game::initialiseBoard(Board b_){
  int xPos = 0;
  int yPos = 0;
  int horizontal = 0;
  std::string tempInput;
  
  for(int i = 0; i < shipNames.size(); i++){
    do{
      b_.printPlayerBoard();
      std::cout << "Enter the location [Letter][Number] for the top left of your " << shipNames[i] << " which is " << shipSizes[i] << " in length.\n";
      tempInput = splitString();
      xPos = static_cast<int>(tempInput[0]);
      yPos = static_cast<int>(tempInput[1]);

      std::cout << "Enter 0 to place ship horizontally, "
        << "or 1 to place ship vertically\n";
      std::cin >> horizontal; //= getInt(0,1);  
      
    }while(!b_.placeShip(i, xPos, yPos, horizontal));
  }

  std::cout << "Your board:\n";
  b_.printPlayerBoard();
}

void validGameMode(int userChoice){
  switch(userChoice){
    case 1:
      gameStart(true);
      //Board();
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

void Game::switchPlayers(){
  std::cout << "Press ENTER to end your turn\n";
  std::cin.get();
  std::cout << std::flush;

  std::cout << "Press ENTER to start your turn\n";
  std::cin.get();
  std::cout << std::flush;
}
