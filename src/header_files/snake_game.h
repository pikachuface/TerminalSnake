#pragma once
#include <vector>
#include <queue>
#include <cmath>
#include "snake_node.h"
#include "food.h"
#include "../CLI_renderer_lib/renderer.h"

namespace SnakeGame
{
    class SnakeGame
    {
    public:
        enum Direction
        {
            None = 0,
            Up = -2,
            Down = 2,
            Left = -1,
            Right = 1
        };

    private:
        //Renderer
        Renderer *renderer;
        //Map variables
        uint8_t map_height = 10;
        uint8_t map_width = 10;
        bool map_loops = true;
        //Snake variables
        std::deque<SnakeNode *> snake_body;
        int snake_length;
        float snake_speed;
        Direction direction = Direction::None;
        //Food
        Food *food;
        //Game
        int score = 0;

    public:
        //Getters
        const int
        GetScore();
        const int GetMapHeight();
        const int GetMapWidth();
        const int GetSnakeLength();
        const float GetSnakeSpeed();
        //Constructors | Destructors
        SnakeGame(const float &speed, const bool &map_loops,
                  const int &map_Height, const int &map_width);
        ~SnakeGame();
        //Game Methods
        void ChangeDirection(const Direction &new_direction);
        const bool Move();
    };
} // namespace SnakeGame