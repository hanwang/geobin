set(libgeobins_SRCS
    geobins.h
    geobins.cpp
)

# Declare the library
add_library(libgeobins STATIC
    ${libgeobins_SRCS}
)

# Specify here the include directories exported
# by this library
target_include_directories(libgeobins PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)