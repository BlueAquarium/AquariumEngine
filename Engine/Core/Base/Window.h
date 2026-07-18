#ifndef WINDOW_H
#define WINDOW_H

#include <SDL3/SDL.h>
#include <string>
#include <functional>

//管理SDL窗口的生命周期，并提供一个事件循环的接口
class Window{
    Window(const std::string&title,int width,int height,SDL_WindowFlags flags = 0);

    ~Window();
}