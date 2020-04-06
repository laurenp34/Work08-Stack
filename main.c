#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"
#include "stack.h"

int main(int argc, char **argv) {


//-100 125 50 200 250 100
  // #HEAD
  // push
  // move
  // 0 175 0
  // rotate
  // y 90
  // sphere
  // 0 0 0 50
  // pop
  // #LEFT ARM
  // push
  // move
  // -100 125 0
  // rotate
  // x -45
  // box
  // -40 0 40 40 100 80
  // #LEFT LOWER ARM
  // push
  // move
  // -20 -100 0
  // box
  // -10 0 10 20 125 20
  // pop
  // pop
  // #RIGHT ARM
  // push
  // move
  // 100 125 0
  // rotate
  // x -45
  // box
  // 0 0 40 40 100 80
  // #RIGHT LOWER ARM
  // push
  // move
  // 20 -100 0
  // rotate
  // x -20
  // box
  // -10 0 10 20 125 20
  // pop
  // pop
  // #LEFT LEG
  // push
  // move
  // -100 -125 0
  // box
  // 0 0 40 50 120 80
  // pop
  // #RIGHT LEG
  // push
  // move
  // 100 -125 0
  // box
  // -50 0 40 50 120 80

  screen s;
  struct matrix * edges;
  struct matrix * polygons;
  struct stack * csystems;

  edges = new_matrix(4, 4);
  polygons = new_matrix(4, 4);
  csystems = new_stack();
  if ( argc == 2 )
    parse_file( argv[1], csystems, edges, polygons, s );
  else
    parse_file( "stdin", csystems, edges, polygons, s );

  free_matrix( edges );
  free_matrix( polygons );
  free_stack(csystems);
}
