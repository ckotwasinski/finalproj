/*******************************************/
/*** DO NOT CHANGE ANYTHING IN THIS FILE ***/
/*******************************************/


#pragma once

#include <ge211.hxx>


struct Game_config
{
    // Constructs an instance with the default parameters.
    Game_config();

    // The dimensions of the whole window:
    ge211::Dims<int> scene_dims;

    // The dimensions of the paddle (the block at the bottom):
    ge211::Dims<int> head;

    ge211::Dims<int> fruit;

    ge211::Posn<int> fruitLoc;
    ge211::Posn<int> headLoc;

    // Number of pixels from top of screen to top of brick formation:
    int top_margin;

    // Number of pixels from sides of screen to sides of brick formation:
    int side_margin;

    // Number of pixels from bottom of screen to bottom of paddle.
    int bottom_margin;


    ge211::Posn<int> snake_top_left_0() const;

    ge211::Posn<int> fruitPos();


};

