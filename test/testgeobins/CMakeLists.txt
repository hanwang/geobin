file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testgeobins ${SRCS})

TARGET_LINK_LIBRARIES(testgeobins
    libgeobins
    libgtest
    libgmock
)

add_test(NAME testgeobins
         COMMAND testgeobins)