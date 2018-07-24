#include <iostream>
#include <fstream>
#include "Graph.h"
using namespace std;

int main()
{
	Graph g, MST, SPT, Path;
	string filename;
	filename = "graph10.txt";
	g.readGraph(filename);
	cout << endl;
	
	
	MST = g.minSpanningTree(g, 0);
	string s = MST.toString();
	
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl;
	cout << setw(56) << "***  Min Spanning Tree for Graph 10  ***" <<endl;
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl << endl;
	cout << s << endl << endl;
	cout << "TREE SUM = " << g.treeSum(MST) << endl << endl << endl;
	
	SPT = g.shortestPathTree(g, 1);
	string s1 = SPT.toString();
	
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl;
	cout << setw(56) << "***  Shortest Path Tree for Graph 10  ***" <<endl;
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl << endl;
	cout << s1 << endl << endl << endl;
		
	Path = g.path(SPT, 1, 7);
	string s2 = Path.toString();
	
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl;
	cout << setw(56) << "***  Path from Vertex 1 to Vertex 7  ***" << endl;
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl << endl;
	cout << s2 << endl << endl;
	cout << "TOTAL LENGTH FROM VERTEX TO VERTEX = " << Path.treeSum(Path)
	 << endl << endl << endl;
	 
	
	
	/*
	filename = "graph100.txt";
	g.readGraph(filename);
	g.minSpanningTree(g, 0);
	
	MST = g.minSpanningTree(g, 0);
	string s3 = MST.toString();
	cout << endl;
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl;
	cout << setw(56) << "*** Min Spanning Tree for Graph 100 ***" <<endl;
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl << endl;
	cout << s3 << endl << endl;
	cout << "TREE SUM = " << g.treeSum(MST) << endl << endl;
	
	SPT = g.shortestPathTree(g, 1);
	string s4 = SPT.toString();
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl;
	cout << setw(56) << "*** Shortest Path Tree for Graph 100 ***" <<endl;
	for(int i = 0; i <= 76; i++) cout << "\u2014";
	cout << endl << endl;
	cout << s4 << endl;
	*/
	return 0;
}

//Graph HW1 Output
/*
	g.addVertex(1);
	g.addVertex(2);
	g.addVertex(3);
	g.addVertex(4);
	g.addVertex(5);
	g.addVertex(6);
	g.addEdge(1,2,13);
	g.addEdge(2,3,20);
	g.addEdge(2,4,11);
	g.addEdge(3,4,53);
	g.addEdge(1,6,40);
	g.addEdge(2,5,33);
	string s = g.toString();
	g.removeEdge(2,4);
	g.removeEdge(3,4);
	g.removeVertex(4);
	string s1 = g.toString();
	
	cout << endl;
	cout << s << endl << endl;
	cout << s1 << endl;*/ 
