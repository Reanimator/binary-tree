#include "BinaryTree.h"
#include <string>
#include <iostream>

void main()
{
	BinaryTree<int,double> binary;

	for (int i = 0; i < 500; i++)
	{
		binary.add((rand()%(888+25))-25, (double)(rand()%1000)/((rand()%100)+1));
	}

	binary.show();

	std::cin.get();

	return;

}