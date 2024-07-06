#pragma once

#include "config.h"
#include "base.h"

NS_GTEXT_BEG

class Layout;
class EXPORT TextLayout {
public:
    TextLayout();
    ~TextLayout();

    void set_text(const char* text);
    Bitmap render();

private:
    Layout* _layout = nullptr;
};

NS_GTEXT_END

