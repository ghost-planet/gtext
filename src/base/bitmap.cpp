#include "config.h"
#include "bitmap.h"

NS_GTEXT_BEG

Bitmap::Bitmap(Size size):_size(size) {
    _buffer = new(size.width * size.height);
} 

Bitmap::~Bitmap() {
    delete _buffer;
    _buffer = nullptr;
}

NS_GTEXT_END