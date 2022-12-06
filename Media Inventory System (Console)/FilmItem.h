#pragma once
#include "MediaItem.h"
#include <string>
class FilmItem :
    public MediaItem
{
public:
    FilmItem(std::string title, std::string director, int year, std::string filmFormat)
        : MediaItem(title, year), director(director), filmFormat(filmFormat) {}
private:
    std::string filmFormat;
    std::string director;
};

