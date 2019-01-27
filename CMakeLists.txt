cmake_minimum_required(VERSION 3.4)

set(PROJECT_NAME pg_helper)
project(${PROJECT_NAME} CXX)

find_package(Threads REQUIRED)

set(CXX_STANDARD 14)

set(BOOST_URL file:///${CMAKE_CURRENT_SOURCE_DIR}/3party/boost.zip)
set(BOOST_URL_SHA256 d074bcbcc0501c4917b965fc890e303ee70d8b01ff5712bae4a6c54f2b6b4e52)

add_subdirectory(boost-cmake)

add_subdirectory(src)
