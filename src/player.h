#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
  private:
    int hp;
    int dmg;
  public:
    char icon;
    std::string name;
    std::string player_class_name;
    int player_class_id;
    int player_pos[2];

    Player(std::string name, std::string player_class_name);
};

#endif
