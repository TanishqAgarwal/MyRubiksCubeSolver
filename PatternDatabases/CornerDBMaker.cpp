//
// Created by TanishqAgarwal on 08/02/24.
//

#include "CornerDBMaker.h"
#include "../Models/RubiksCubeBitboard.cpp"
using namespace std;

CornerDBMaker::CornerDBMaker(string _fileName) {
    fileName = _fileName;
}

CornerDBMaker::CornerDBMaker(string _fileName, uint8_t init_val) {
    fileName = _fileName;
    cornerDB = CornerPatternDatabase(init_val);
}

bool CornerDBMaker::bfsAndStore() {
    cout<<"Entered\n";
    RubiksCubeBitboard cube;
    queue<RubiksCubeBitboard> q;
    q.push(cube);
    cout<<"checkPoint 1\n";
    cornerDB.setNumMoves(cube, 0);
    cout<<"checkPoint 2\n";
//    int test_counter = 0;
    int curr_depth = 0;
    while (!q.empty()) {
//        test_counter++;
//        cout<<"TEST COUTNER:::: "<< test_counter<<'\n';
//        if(test_counter == 20)
//        {
////            cout<<"Breaking\n";
////            break;
//        }

        int n = q.size();
        curr_depth++;
        if (curr_depth == 9) break;
        for (int counter = 0; counter < n; counter++) {
//            if(counter == 3)
//            {
//                cout<<"Breaking at counter = 3\n";
//                break;
//            }

            RubiksCubeBitboard node = q.front();
            q.pop();
            for (int i = 0; i < 18; i++) {
                auto curr_move = RubiksCube::MOVE(i);
                node.move(curr_move);
//                cout<<"checkPoint 3\n";
                if ((int) cornerDB.getNumMoves(node) > curr_depth) {
//                    cout<<"checkPoint 4\n";
                    cornerDB.setNumMoves(node, curr_depth);
//                    cout<<"checkPoint 5\n";
                    q.push(node);
                }
                node.invert(curr_move);
            }
        }
    }
    cout<<"checkPoint 6\n";
    cornerDB.toFile(fileName);
    cout<<"checkPoint 7\n";
    return true;
}
