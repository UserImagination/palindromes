cmake_minimum_required(VERSION 3.5)

project(palindromeThang LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(palindromeThang main.cpp)

include(GNUInstallDirs)
install(TARGETS palindromeThang
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
