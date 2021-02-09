#pragma once
#include "ansi_escapes.h"
namespace ConsoleRenderer
{
    class RenderableObject
    {
    public:
        int pos_x;
        int pos_y;
        Colors bkg_color;
        Colors txt_color = Colors::WHITE_TXT;
        char block_texture[2] = {' ', ' '};

        //Getter & Setter
        RenderableObject(const int &pos_x, const int &pos_y,
                         const Colors &bkg_color);
        RenderableObject(const int &pos_x, const int &pos_y,
                         const Colors &bkg_color, const Colors &txt_color,
                         const char &left_char, const char &right_char);

    };

} // namespace ConsoleRenderer