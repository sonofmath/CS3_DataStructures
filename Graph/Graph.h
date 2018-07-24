#ifndef Graph_h
#define Graph_h

#pragma once
struct Edge
{
	int vertex1;
	int vertex2;
	int weight;
	int pathlength;
	Edge()
	{
		vertex1 = 0;
		vertex2 = 0;
		weight = 0;
		pathlength = 0;
	}
};

class Graph
{
private:
	int adj[100][100];
	bool vertices[100];
	
public:
	Graph();
	void addVertex(int vertex);
	void addEdge(int vertex1, int vertex2, int weight);
	void removeEdge(int vertex1, int vertex2);
	void removeVertex(int vertex);
	bool isEdge(int vertex1, int vertex2);
	int edgeWeight(int vertex1, int vertex2);
	string toString();
	
	Graph minSpanningTree(Graph T, int X);
	int treeSum(Graph T);
	Graph shortestPathTree(Graph T, int X);
	void findPath(Graph& SPT, Graph& path, int vertex1, int vertex2, bool& visited);
	Graph path(Graph& SPT, int vertex1, int vertex2);
	int pathLength(Graph path);
	void readGraph(string filename);
};

#endif /* Graph_h */
