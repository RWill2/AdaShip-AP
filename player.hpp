#ifndef player_h
#define player_h

class Player{
  public:
    Player();
    Player(bool autoPlay, int num);
    bool isComputer();
    void setAuto(bool autoPlayer);
    int getPlayerNum();
    void setPlayerNum(int num);
  private:
    int playerNum;
    bool isComputerPlayer;
};

#endif