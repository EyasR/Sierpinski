//University of Washington Bothell - CSSE
// CSS342C : Proffesor Munehiro Fukuda
// Created by Eyas Rashid on 1/30/2019
//
// Lab 3  : Recursion
// Purpose: this program derives Sierpinski Arrowhead using the "Turtle" class

#include "Sierpinski.h"

// constructor
Sierpinski::Sierpinski(float initX, float initY, float initAngle) : Turtle(initX, initY, initAngle) {

}

// Right curve of Sierpinski Arrowhead
void Sierpinski::rightCurve( int level, float distance ){
    if(level > 0){
        leftCurve( level - 1 , distance);
        turn(-60);
        rightCurve( level - 1, distance);
        turn(-60);
        leftCurve( level - 1 , distance);
    } else
    draw(distance);
}

// Left curve of Sierpinski Arrowhead
void Sierpinski::leftCurve( int level, float distance ){
    if(level > 0){
        rightCurve( level - 1 , distance);
        turn(60);
        leftCurve( level - 1, distance);
        turn(60);
        rightCurve( level - 1 , distance);
    } else
    draw(distance);
}