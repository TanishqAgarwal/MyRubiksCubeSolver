//
// Created by TanishqAgarwal on 03/02/24.
//

#ifndef MYRUBIKSCUBESOLVER_RUBIKSCUBE_H
#define MYRUBIKSCUBESOLVER_RUBIKSCUBE_H

#include<bits/stdc++.h>
using namespace std;

class RubiksCube {
public:

    enum class FACE {
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN
    };

    enum class COLOR {
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE {
        L, LPRIME, L2,
        R, RPRIME, R2,
        U, UPRIME, U2,
        D, DPRIME, D2,
        F, FPRIME, F2,
        B, BPRIME, B2
    };

    // Gives the color of the cell at face, row, col
    // If face is pointing at you, row and col will start from top left

    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;


    // will return the first letter of the given color
    static char getColorLetter(COLOR color);


    // returns true if the rubiks cube is solved or return false
    virtual bool isSolved() const = 0;


    // Returns the move in string format
    static string getMove(MOVE ind);


    // Prints the cube in planar format
    void print() const;

    //Randomly shuffle the cube with 'times' moves and returns the moves performed.
    vector<MOVE> randomShuffleCube(unsigned int times);


    // Perform moves on the rubik Rubik Cube
    RubiksCube &move(MOVE ind);


    // Invert a move
    RubiksCube &invert(MOVE ind);

    // All 18 rotation moves on the RubiksCube

    virtual RubiksCube &f() = 0;
    virtual RubiksCube &fPrime() = 0;
    virtual RubiksCube &f2() = 0;
    virtual RubiksCube &b() = 0;
    virtual RubiksCube &bPrime() = 0;
    virtual RubiksCube &b2() = 0;
    virtual RubiksCube &u() = 0;
    virtual RubiksCube &uPrime() = 0;
    virtual RubiksCube &u2() = 0;
    virtual RubiksCube &d() = 0;
    virtual RubiksCube &dPrime() = 0;
    virtual RubiksCube &d2() = 0;
    virtual RubiksCube &l() = 0;
    virtual RubiksCube &lPrime() = 0;
    virtual RubiksCube &l2() = 0;
    virtual RubiksCube &r() = 0;
    virtual RubiksCube &rPrime() = 0;
    virtual RubiksCube &r2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;
};

#endif //MYRUBIKSCUBESOLVER_RUBIKSCUBE_H
