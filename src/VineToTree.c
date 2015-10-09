#include "VineToTree.h"
#include "Node.h"
#include "Rotations.h"
#include "GetNumNodes.h"
#include <math.h>
#include <stdio.h>

void rightVineToTree(Node **rightVine){
  Node *root = *rightVine;
  int i;
  double time = log2(getNumNodes(root)) - 1;
   
  
  for( i=0 ; i<time ; i++){
    leftRotate(&root);
  }
  
  *rightVine = root;
}

