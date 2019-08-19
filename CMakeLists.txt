cmake_minimum_required(VERSION 3.14)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled2 main.cpp Layers/Nodes/Node.cpp Layers/Nodes/Node.h AiEngine/Engine.h Layers/Layer/Layer.h AiEngine/EngineState.h Processors/InitializationProcessor.h)