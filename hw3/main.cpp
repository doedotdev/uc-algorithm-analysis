/*
	Assignment 3: Diameter and Connected Components of a Network
	Group 3: Minh Doan, Benjamin Horn, Elisabeth Bruesewitz, Indress Al Bulushi
*/

#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

//
//Graph class: Implement graph with adjacency Matrix

class Graph {
private:
    int** adjacencyMatrix;
    int size;
public:
    Graph(int size);
    ~Graph();
    void addEdge(int i, int j);
    bool isConnected(int i, int j);
    void displayAdjacencyMatrix();
    int getSize();
};

vector<int> BFS(Graph &g, int v);
int** DistanceMatrix(Graph &g);
int Diameter(Graph &g);
void Components(Graph &g);

Graph::Graph(int size) {
    this->size = size;
    adjacencyMatrix = new int*[size];
    for (int i = 0; i < size; i++) {
        adjacencyMatrix[i] = new int[size];
        for (int j = 0; j < size; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

Graph::~Graph() {
    for (int i = 0; i < size; i++) {
        delete[] adjacencyMatrix[i];
    }
    delete[] adjacencyMatrix;
}

//Add edge between two vertex i and j to adjacencyMatrix

void Graph::addEdge(int i, int j) {
    if (i >= 0 && i < size && j >= 0 && j < size && i != j) {
        adjacencyMatrix[i][j] = 1;
        adjacencyMatrix[j][i] = 1;
    }
}

//Check if two vertices are connected

bool Graph::isConnected(int i, int j) {
    return (adjacencyMatrix[i][j] == 1);
}

//Display adjacencyMatrix

void Graph::displayAdjacencyMatrix() {
    int size = this->size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

//Get graph size

int Graph::getSize() {
    return this->size;
}

//Breadth-first search function that perform BFS on vertex v
//and return a vector of distance between vertex v and its
//connected vertices

vector<int> BFS(Graph &g, int v) {
    queue<int> q;
    int size = g.getSize();

    bool explored[size];
    vector<int> dist(size); //vector contains distance between vertex v and
    //is connected vertices

    for (int i = 0; i < size; i++) {
        explored[i] = false;
    }

    for (int i = 0; i < size; i++) {
        dist[i] = -1;
    }

    dist[v] = 0;

    q.push(v);
    explored[v] = true;

    while(!q.empty()) {
        int f = q.front();
        q.pop();

        for (int j = 0; j < size; ++j) {
            if (g.isConnected(f, j) && !explored[j]) {
                q.push(j);
                explored[j] = true;
                dist[j] = dist[f] + 1; //if v is adjacent to f and f is adjacent to j
                //but v is not adjacent to j then dist[j] = dist[f] + 1
            }
        }
    }

    return dist;
}

//Compute distace matrix by call BFS function on every vertices

int** DistanceMatrix(Graph &g) {
    int size = g.getSize();
    int** distanceMatrix = new int*[size];
    for (int i = 0; i < size; i++) {
        distanceMatrix[i] = new int[size];
        vector<int> dist = BFS(g, i); //Call BFS at every vertex
        for (int j = 0; j < size; j++) {
            distanceMatrix[i][j] = dist[j]; //Put them in 2d array
        }
    }

    return distanceMatrix;
}

//Compute the diamater of the graph if graph is connected.
//Return -1 otherwise

int Diameter(Graph &g) {
    int size = g.getSize();
    int** distMatrix = DistanceMatrix(g);
    int diameter = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (distMatrix[i][j] == -1) {
                return -1; //If find -1 then the graph is disconnected then return -1
            } else {
                if (distMatrix[i][j] > diameter) {
                    diameter = distMatrix[i][j]; //Otherwise find the largest number in the distance matrix
                }
            }
        }
    }
    for (int i = 0; i < size; i++) {
        delete[] distMatrix[i];
    }
    delete[] distMatrix;
    return diameter;
}

//Compute component sets of the graph.

void Components(Graph &g) {
    int size = g.getSize();
    bool visited[size];
    for (int i = 0; i < size; i++) {
        visited[i] = false;
    }
    int** distMatrix = DistanceMatrix(g);
    if (Diameter(g) != -1) {
        cout << "Vertex set: {";
        for (int i = 0; i < size-1; i++) {
            cout << i << ", ";
        }
        cout << size-1 << "}" << endl; //If diameter == -1 then there is only one vertex set.
    } else {
        cout << "Vertex set: ";
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (distMatrix[i][j] == -1) {
                    if (!visited[i]) { //If find distanceMatrix == -1 then find component set of that vertex
                        //Skip if the vertex is already visited (it's already in a set)
                        vector<int> components = BFS(g, i);
                        bool first = false;
                        cout << "{";
                        for (int k = 0; k < size; k++) {
                            if (components[k] != -1) {
                                if (!first) {
                                    cout << k;
                                    first = true;
                                } else {
                                    cout << ", " << k;
                                }
                                visited[k] = true;
                            }
                        }
                        cout << "}" << endl;
                        break;
                    } else {
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < size; i++) {
        delete[] distMatrix[i];
    }
    delete[] distMatrix;
}

int main() {
    int size, origin, destination;
    std::cout << "Enter Size and hit enter: ";
    cin >> size;
    Graph g(size);
    while(true) {
        std::cout << "Enter and Edge {origin destination} separated by a space and hit enter. Or -1 -1 to exit" << endl;
        cin >> origin >> destination;
        if (origin == -1 && destination == -1) { //Type -1 -1 to end input
            break;
        }
        g.addEdge(origin, destination);
    }

    //Display adjacencyMatrix
    std::cout << " Adjacency Matrix: " << std::endl;
    g.displayAdjacencyMatrix();

    //Compute and display distanceMatrix
    int** distanceMatrix = DistanceMatrix(g);
    cout << "distanceMatrix: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << distanceMatrix[i][j] << " ";
        }
        cout << endl;
    }
    //Free distanceMatrix array
    for (int i = 0; i < size; i++) {
        delete[] distanceMatrix[i];
    }
    delete[] distanceMatrix;

    //Compute and display Diameter
    int diameter = Diameter(g);
    cout << "Diameter: " << diameter << endl;

    //Computer and display Component
    Components(g);

    return 0;
}