#include "headersReq.hpp"

Player::Player(){
  isComputerPlayer = false;
  playerNum = 1;
}

Player::Player(bool autoPlay, int num){
  isComputerPlayer = autoPlay;
  playerNum = num;
}

bool Player::isComputer(){
  return isComputerPlayer;
}

void Player::setAuto(bool autoPlayer){
  isComputerPlayer = autoPlayer;
}