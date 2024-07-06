#pragma once

#include "config.h"
#include "size.h"

NS_GTEXT_BEG

struct Bitmap {
public:
    Bitmap(Size size);
    ~Bitmap();

    const char* buffer() {return _buffer;}
    Size size() {return _size;}

    operator bool() {
        return _size;
    }
private:
    Size _size;
    const char* _buffer = nullptr;
};

NS_GTEXT_END
