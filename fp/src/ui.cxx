// YOU DEFINITELY NEED TO MODIFY THIS FILE.

#include "ui.hxx"
#include "model.hxx"
#include "snake.hxx"

///
/// VIEW CONSTANTS
///

// Colors are red-green-blue(-alpha), each component
// from 0 to 255.
ge211::Color const ball_color{255, 127, 127};
ge211::Color const paddle_color{255, 255, 127};
ge211::Color const brick_color{100, 100, 100};

///
/// VIEW FUNCTIONS
///

// Data members that are references cannot be initialized by assignment
// in the constructor body and must be initialized in a member
// initializer list.
Ui::Ui(Model& model)
        : model(model)
{ }

ge211::Dims<int>
Ui::initial_window_dimensions() const
{
    return model.config.scene_dims;
}

// Use `Sprite_set::add_sprite(Sprite&, Position)` to add each sprite
// to `sprites`.
void
Ui::draw(ge211::Sprite_set& sprites)
{
    sprites.add_sprite(head_sprite, config.headLoc;
    sprites.add_sprite(fruit_sprite, config.fruitLoc);
    for (i=0; i<snakes.length()), i++)
    {
        sprites.add_sprite(head_sprite, {config.headLoc.x+10*i,
                                         config.headLoc.y});
    }

}


void
Ui::on_key(ge211::Key key)
{
    if (key == ge211::Key::code('q')) {
        quit();
    }
    if (key == ge211::Key::code('w')) {
        dir=UP;
    }
    if (key == ge211::Key::code('a')) {
        dir=LEFT;
    }
    if (key == ge211::Key::code('s')) {
        dir=DOWN;
    }
    if (key == ge211::Key::code('d')) {
        dir=RIGHT;
    }
    // TODO: your code here
}

void
Ui::on_frame(double dt)
{
    model.on_frame(dt);
}
