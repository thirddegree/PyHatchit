cmake_minimum_required(VERSION 3.5)
project(PyHatchit)

# Compiler flag
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(WIN32)
    set (CMAKE_PREFIX_PATH "C:\\Qt\\5.8\\msvc2015_64")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG")
    
    find_package(PythonLibs 3.6 REQUIRED)
    find_package(Qt5 COMPONENTS Core Gui Widgets WebEngine WebEngineWidgets REQUIRED)

    include_directories("include"
                        "ThirdParty/pybind11/include"
                        SYSTEM
                        ${PYTHON_INCLUDE_DIR})

    link_directories("C:/Python36/libs/")

    file(GLOB PYH_INC include/*.h)
    file(GLOB PYH_SRC source/*.cpp)

    add_subdirectory("${CMAKE_SOURCE_DIR}/ThirdParty/pybind11")

    pybind11_add_module(PyHatchit SHARED ${PYH_INC} ${PYH_SRC})

    #add_library(PyHatchit SHARED ${PYH_INC} ${PYH_SRC})
    
   
    target_link_libraries(PyHatchit PRIVATE Qt5::Core Qt5::WinMain Qt5::Widgets Qt5::Gui Qt5::WebEngine Qt5::WebEngineWidgets)

    

    set_target_properties(PyHatchit
	                    PROPERTIES
	                    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
                        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
                        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
                        PREFIX "${PYTHON_MODULE_PREFIX}"
                        SUFFIX "${PYTHON_MODULE_EXTENSION}")

endif()