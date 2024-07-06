add_executable(gtext-test
    ./main.cpp)

target_link_libraries(gtext-test PRIVATE gtext::gtext)

add_test(NAME gtext
         COMMAND gtext-test)