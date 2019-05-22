//University of Washington Bothell - CSSE
// CSS342C : Proffesor Munehiro Fukuda
// Created by Eyas Rashid on 1/30/2019
//
// Lab 3  : Recursion
// Purpose: this program derives Sierpinski Arrowhead using the "Turtle" class

#include "Sierpinski.h"
#include <iostream>
using namespace std;

int main( ) {
  // right Sierpinski at level 5
  Sierpinski sierp1( 120, 120, 0 );
  sierp1.rightCurve( 5, 4 );

  // left Sierpinski at level 5
  Sierpinski sierp2( 400, 10, 0 );
  sierp2.leftCurve( 5, 4 );

  // left Sierpinski at level 4
  Sierpinski sierp3( 120, 240, 0 );
  sierp3.leftCurve( 4, 8 );

  // right Sierpinski at level 4
  Sierpinski sierp4( 400, 130, 0 );
  sierp4.rightCurve( 4, 8 );

  // right Sierpinski at level 3
  Sierpinski sierp5( 120, 360, 0 );
  sierp5.rightCurve( 3, 12 );

  // left Sierpinski at level 3
  Sierpinski sierp6( 400, 250, 0 );
  sierp6.leftCurve( 3, 12 );

  // left Sierpinski at level 2
  Sierpinski sierp7( 120, 480, 0 );
  sierp7.leftCurve( 2, 16 );

  // right Sierpinski at level 2
  Sierpinski sierp8( 400, 370, 0 );
  sierp8.rightCurve( 2, 16 );

  // right Sierpinski at level 1
  Sierpinski sierp9( 120, 600, 0 );
  sierp9.rightCurve( 1, 20 );

  // left Sierpinski at level 1
  Sierpinski sierp10( 400, 490, 0 );
  sierp10.leftCurve( 1, 20 );

}
