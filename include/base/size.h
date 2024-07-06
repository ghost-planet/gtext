#pragma once

#include "config.h"

NS_GTEXT_BEG

struct Size {
    int width;
    int height;

    Size(int w, int h): width(w), height(h) {}
    operator bool() {
        return width > 0 && height > 0;
    }
};

NS_GTEXT_END