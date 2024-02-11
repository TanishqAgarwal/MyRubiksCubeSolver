#include <bits/stdc++.h>
using namespace std;


#include "Models/RubiksCube3dArray.cpp"
#include "Models/RubiksCube1dArray.cpp"
#include "Models/RubiksCubeBitboard.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
#include "Solver/BFSSolver.h"
#include "PatternDatabases/CornerDBMaker.h"


int main() {


//    RubiksCubeBitboard object3dArray;
//    object3dArray.print();
//
//    vector<RubiksCube::MOVE> movesToShuffle = object3dArray.randomShuffleCube(5);
//    object3dArray.print();
//    for(auto move: movesToShuffle) cout<<object3dArray.getMove(move)<<" ";
//    cout<<'\n';
//
//    BFSSolver<RubiksCubeBitboard, HashBitboard> idAstarSolver(object3dArray);
//
//    vector<RubiksCube::MOVE> movesToSolve = idAstarSolver.solve();
//
//    idAstarSolver.rubiksCube.print();
//    for(auto move: movesToSolve) cout<<object3dArray.getMove(move)<<" ";
//    cout<<'\n';

//    IDDFSSolver<RubiksCube3dArray, Hash3d> iddfsSolver(object3dArray, 8);

//    vector<RubiksCube::MOVE> movesToSolve = iddfsSolver.solve();

//    iddfsSolver.rubiksCube.print();
//    for(auto move: movesToSolve) cout<<object3dArray.getMove(move)<<" ";
//    cout<<'\n';

//    RubiksCubeBitboard object3dArray;
//    object3dArray.print();
//    if(object3dArray.isSolved()) cout<<"Cube is solved"<<'\n';
//    object3dArray.l();
//    object3dArray.print();
//
//    vector<RubiksCube::MOVE> movestoshuffle = object3dArray.randomShuffleCube(5);
//    for(auto move: movestoshuffle) cout << object3dArray.getMove(move) << " ";
//    cout<<'\n';
//
//    object3dArray.print();
//
//    if(!object3dArray.isSolved()) cout<<"Cube is not solved"<<'\n';

//    object3dArray.l();
//    if(object3dArray.isSolved()) cout<<"Cube is solved\n";
//    else cout<<"Cube is not solved\n";
//
//    object3dArray.lPrime();
//    object3dArray.print();
//    if(object3dArray.isSolved()) cout<<"Cube is solved\n";
//    else cout<<"Cube is not solved\n";

//    RubiksCube3dArray cube1;
//    RubiksCube3dArray cube2;
//
//    if(cube1 == cube2) cout<<"Both cubes equal\n";
//    else cout<<"Both cubes are different\n";
//
//    cube1.l();
//
//    if(cube1 == cube2) cout<<"Both cubes equal\n";
//    else cout<<"Both cubes are not equal\n";
//
//
//
//    cube2 = cube1;
//    if(cube1 == cube2) cout<<"Both cubes equal\n";
//    else cout<<"Both cubes are not equal\n";
//    cube1.print();
//    cube2.print();

    string fileName = "/Users/user/CLionProjects/MyRubiksCubeSolver/Databases/cornerDepth5V1.txt";

//    //    Code to create Corner Database
//    cout<<"Started\n";
//    CornerDBMaker dbMaker(fileName, 0x99);
//    cout<<"In Between\n";
//    dbMaker.bfsAndStore();
//
//    cout<<"Done"<<'\n';
    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(13);
    cube.print();
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";

    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();

    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";

    return 0;
}
