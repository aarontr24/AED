#include <iostream>
#include "Grafo.h"

using namespace std;

int main(){

	Grafo<int,int> mygraph;
	mygraph.add_Vertex(3);
	mygraph.add_Vertex(5);
	mygraph.add_Vertex(7);
	mygraph.add_Vertex(1);
	mygraph.add_Edge(5,1,30);


	cout<<"holaa"<<endl;

	return 0;
};