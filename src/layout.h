#pragma once

#include <string>

#include "config.h"
#include "gtext.h"

NS_GTEXT_BEG

class Layout {
public:
    Layout();

    void set_text(std::string text);
    Bitmap render();

private:
    std::string _text;
};

NS_GTEXT_END