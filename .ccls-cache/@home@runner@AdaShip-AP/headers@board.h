#pragma once

class Board{
  public:
    void setWidth(int width){width_ = width;}
    int getWidth(void){return width_;}
    void setHeight(int height){height_ = height;}
    int getHeight(void){return height_;}
    Board();

  private:
    int width_;
    int height_;
};