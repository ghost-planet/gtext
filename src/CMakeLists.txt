add_library(gtext)
add_library(gtext::gtext ALIAS gtext)

set(GTEXT_SRC
    gtext.cpp
    textlayout.cpp
    layout.cpp)

target_sources(gtext PRIVATE ${GTEXT_SRC})

target_include_directories(gtext
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
