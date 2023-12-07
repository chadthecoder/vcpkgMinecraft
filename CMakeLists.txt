cmake_minimum_required(VERSION 3.16)

project(HelloWorld)

find_package(glfw3 3.3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

find_package(fmt CONFIG REQUIRED)

set(CPP_DIR src)
#set(HPP_DIR include)
set(CPP ${CPP_DIR}/stb.cpp ${CPP_DIR}/VBO.cpp
    ${CPP_DIR}/VAO.cpp ${CPP_DIR}/shaderClass.cpp ${CPP_DIR}/Texture.cpp
    ${CPP_DIR}/EBO.cpp ${CPP_DIR}/Camera.cpp ${CPP_DIR}/Main.cpp)
#set(HPP ${HPP_DIR}/VBO.h ${HPP_DIR}/shaderClass.h lib/stb_image.h)
#set(HPP_AND_CPP ${CPP} ${HPP})


add_executable(HelloWorld ${CPP})

set_target_properties(HelloWorld PROPERTIES CXX_STANDARD 17 CXX_EXTENSIONS OFF)
target_include_directories(HelloWorld PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(HelloWorld PRIVATE glfw glad::glad glm::glm fmt::fmt)