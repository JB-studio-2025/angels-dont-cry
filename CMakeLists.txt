cmake_minimum_required(VERSION 3.16)

project(GAYME)

set(CMAKE_CXX_STANDARD 17)

#where to find SFML
set(SFML_DIR "C:/SFML/SFML-3.0.1/install/lib/cmake/SFML")
find_package(SFML 3 REQUIRED COMPONENTS System Window Graphics Audio Network)

set(SOURCE_FILES
    main.cc
    gamestate.cc
    gamestate.h
    object.cc
    object.h
    player.cc
    player.h
	motion.cc
	motion.h
	world.cc
	world.h
)

add_executable(GAYME ${SOURCE_FILES})

target_link_libraries(GAYME PRIVATE SFML::System SFML::Window SFML::Graphics SFML::Audio SFML::Network)