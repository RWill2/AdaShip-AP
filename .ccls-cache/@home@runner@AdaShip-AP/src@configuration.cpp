/*

configuration* configuration::inst_ = nullptr;

configuration *configuration::getInstance(const int _boardWidth, const int _boardHeight){
  if(inst_ == nullptr){
    inst_ = new configuration(_boardWidth, _boardHeight);
  }
  return inst_;
}

configuration configuration::*getInstance(const int _boardWidth, const int _boardHeight);

int configuration::boardWidth() const{
  return boardWidth_;
}

int configuration::boardHeight() const {
  return boardHeight_;
}

void configuration::boardDetails(int width, int height){
  boardWidth_ = width;
  boardHeight_ = height;
}

configuration::configuration(const int boardWidth, const int boardHeight):
  boardWidth_ (boardWidth),
  boardHeight_ (boardHeight){
  
  }*/