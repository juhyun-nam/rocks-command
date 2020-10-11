cmake_minimum_required(VERSION 3.5)

project(rocks-command LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(DAEMON_SOURCES
)

set(CLIENT_SOURCES
  client/rocks.cc
)

find_package(GSL REQUIRED)
