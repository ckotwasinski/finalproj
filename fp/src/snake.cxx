#include "snake.hxx"
#include "game_config.hxx"


bool
Snake::hits_body(Game_config const& config)
{
    for(Block* body : snakes) {
        if (config.headLoc.x == body.x && config.headLoc.y == body.y)
        {
            return true;
        }
    }
    return false;

}



bool
Snake::hits_fruit(Game_config const& config)
{
    if (config.headLoc.x == config.fruitLoc.x && config.headLoc.y == config.fruitLoc.y)
    {
        return true;
    }else
        return false;
}

bool
Snake::hits_top(Game_config const& config)
{
    if(config.headLoc.y > config.scene_dims.height){
        return true;
    }else {
        return false;
    }
}
bool
Snake::hits_bottom(Game_config const& config)
{
    if(config.headLoc.y - 10 < 0){
        return true;
    }else {
    return false;
    }
}
bool
Snake::hits_side(Game_config const& config)
{
    if(config.headLoc.x + 10 > config.scene_dims.width || config.headLoc.x < 0){
        return true;
    }else {
        return false;
    }
}

