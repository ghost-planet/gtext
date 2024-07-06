#include "config.h"
#include "textlayout.h"
#include "layout.h"

NS_GTEXT_BEG

// TODO: new in constructor
TextLayout::TextLayout() {
    _layout = new Layout();
}

TextLayout::~TextLayout() {
    delete _layout;
    _layout = nullptr;
}

void TextLayout::set_text(const char* text) {
    return _layout->set_text(text);
}

Bitmap TextLayout::render() {
    return _layout->render();
}

NS_GTEXT_END

