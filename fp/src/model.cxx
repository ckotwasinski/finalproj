// YOU DEFINITELY NEED TO MODIFY THIS FILE.

#include "model.hxx"



eDirecton dir;

int wait = 0;

Model::Model(Game_config const& config)
        : config(config),
          head(Block::from_top_left(config.snake_top_left_0(),
                                      config.head)),
          fruit(Block::from_top_left(config.fruitPos(),config.fruit))
{
    snakes.push_back(Block::from_top_left({config.snake_top_left_0().x+10,
                                         config.snake_top_left_0().y},
                                         config.head)))
    snakes.push_back(Block::from_top_left({config.snake_top_left_0().x+20,
                                          config.snake_top_left_0().y},
                                          config.head)))
}

void
Model::on_frame(double dt)
{
    if (wait == 30) {
        wait = 0;
        snakes[0].x = head.x;
        snakes[0].y = head.y;

        for (i=1; i<snakes.length(); i++)
        {
            snakes[i].x = snakes[i-1].x;
            snakes[i].y = snakes[i-1].y;
        }

        switch (dir) {
        case LEFT:
            head.x -= 10;
            break;
        case RIGHT:
            head.x += 10;
            break;
        case UP:
            head.y += 10;
            break;
        case DOWN:
            head.y -= 10;
            break;
        default:
            break;
        }

    }
    if(Snake::hits_body(Game_config const& config)||Snake::hits_top(Game_config
    const& config)||Snake::hits_side(Game_config const& config)
    Snake::hits_bottom(Game_config const& config))
        quit();
    if(Snake::hit_fruit(Game_config const& config))
    {
        snakes.push_back(Block::from_top_left({snakes[snakes.last().x,
                                               snakes[snakes.last().y},
                                              config.head)))
    }

}

