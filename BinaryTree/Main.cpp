#include "BinaryTree.h"
#include <string>
#include <iostream>

void main()
{
	BinaryTree<int,double> binary;

	binary.fill();

	binary.show();

	std::cin.get();

	return;

}