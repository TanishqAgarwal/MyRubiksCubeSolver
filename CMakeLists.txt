cmake_minimum_required(VERSION 3.27)
project(MyRubiksCubeSolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyRubiksCubeSolver main.cpp
        Models/RubiksCube.h
        Models/RubiksCube.cpp
        Models/RubiksCube3dArray.cpp
        Models/RubiksCube1dArray.cpp
        Models/RubiksCubeBitboard.cpp
        Solver/IDDFSSolver.h
        Solver/DFSSolver.h
        Solver/IDAstarSolver.h
        PatternDatabases/CornerPatternDatabase.h
        PatternDatabases/PatternDatabase.h
        PatternDatabases/PatternDatabase.cpp
        PatternDatabases/PermutationIndexer.h
        PatternDatabases/NibbleArray.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/math.h
        PatternDatabases/math.cpp
        PatternDatabases/CornerPatternDatabase.cpp
        PatternDatabases/CornerDBMaker.h
        PatternDatabases/CornerDBMaker.cpp)
