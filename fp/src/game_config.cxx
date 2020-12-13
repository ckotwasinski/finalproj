/*******************************************/
/*** DO NOT CHANGE ANYTHING IN THIS FILE ***/
/*******************************************/

#include "game_config.hxx"
#include <stdlib.h>
using namespace std;

int round(int n)
{
    // Smaller multiple
    int a = (n / 10) * 10;

    // Larger multiple
    int b = a + 10;

    // Return of closest of two
    return (n - a > b - n)? b : a;
}


Game_config::Game_config()
        : scene_dims{400, 400},
          head{10, 10},
          fruit{10,10},
          top_margin{10},
          side_margin{10},
          bottom_margin{10}
{ }

ge211::Posn<int>
Game_config::fruitLoc;
ge211::Posn<int>
Game_config::headLoc;
ge211::Posn<int>
Game_config::snake_top_left_0() const
{
    ge211::Posn<int> result(scene_dims);
    result.x /= 2;
    headLoc = result.up_by(result.y/2);
    return headLoc;
}

ge211::Posn<int>
Game_config::fruitPos()
{
    ge211::Posn<int> result(scene_dims);
    result.x = round(rand() * result.x);
    fruitLoc = result.up_by(round(rand() * result.y));
    return fruitLoc;
}



