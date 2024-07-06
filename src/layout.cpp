#include "config.h"
#include "layout.h"

NS_GTEXT_BEG

void Layout::set_text(std::string text) {
    _text = text;
}

Bitmap Layout::render() {
    return Bitmap(Size(0, 0));
}

NS_GTEXT_END