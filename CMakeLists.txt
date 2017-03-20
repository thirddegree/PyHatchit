cmake_minimum_required(VERSION 3.5)
project(PyHatchit)

# Compiler flag
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "~/Qt/5.8/gcc_64/")

find_package(Qt5 COMPONENTS Core Gui Widgets WebEngine WebEngineWidgets REQUIRED)

include_directories("${CMAKE_SOURCE_DIR}/include"
                    "${CMAKE_SOURCE_DIR}/include/Qt/Core"
		    "${CMAKE_SOURCE_DIR}/ThirdParty/pybind11/include")

add_subdirectory("${CMAKE_SOURCE_DIR}/ThirdParty/pybind11")

file(GLOB INCLUDE_FILES ${CMAKE_SOURCE_DIR}/include/*.h ${CMAKE_SOURCE_DIR}/include/Qt/Core/*.h)
file(GLOB SOURCE_FILES ${CMAKE_SOURCE_DIR}/source/*.cpp ${CMAKE_SOURCE_DIR}/source/Qt/Core/*.cpp)

pybind11_add_module(PyHatchit SHARED ${INCLUDE_FILES} ${SOURCE_FILES})
target_link_libraries(PyHatchit PRIVATE Qt5::Core Qt5::Widgets Qt5::Gui Qt5::WebEngine Qt5::WebEngineWidgets)

#set_target_properties(PyHatchit PROPERTIES
#        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/python"
#        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/python"
#        PREFIX ""
#        OUTPUT_NAME "PyHatchit")

