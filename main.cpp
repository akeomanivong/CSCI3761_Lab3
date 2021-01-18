#include <iostream>
#include <cstring>
#include <fstream>
#include <ctime>
using namespace std;

#define INF 9999999
// create a 2d array of size 5x5
//for adjacency matrix to represent graph


int main () {

    cout << "Enter file name (I used input.txt to test my code): ";
    string input;
    cin >> input;
    string s; //for reading in line
    int size; //number of nodes determines size of adjacency matrix
    int ignore; //for my implementation, I don't need the first two numbers, only the third which is the weight
    int totalWeight = 0; //calculate minimum cost
    ifstream infile;
    //infile.open("input.txt");
    infile.open(input);
    getline(infile, s); //get number of nodes
    size = stoi(s); //convert the string to int
    int arr[size][size]; //adjency matrix
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            infile >> ignore;
            infile >> ignore;
            infile >> arr[i][j];  //only including the weights in the matrix
        }
    }
    /* Print matrix to ensure proper read in
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
     */

    int no_edge; //number of edges

    int selected[size]; //create a array to track selected vertex selected will become true otherwise false

    memset (selected, false, sizeof (selected)); //set selected false initially

    no_edge = 0; //set number of edges to 0

    // the number of edges in minimum spanning tree will
    // always be less than (size -1), where size is number of vertices in graph

    selected[0] = true; // choose 0th (first) vertex and make it true
    int x; //row number
    int y; //col number

    // print for edge and weight
    cout << "Edge" << " : " << "Weight";
    cout << endl;

    clock_t start;
    double duration;
    start = clock(); //start timer

    while (no_edge < size - 1)
    {
        //For every vertex in the set S, find the all adjacent vertices,
        //calculate the distance from the vertex selected at step 1.
        //If the vertex is already in the set S, discard it. Otherwise
        //choose another vertex nearest to selected vertex  at step 1.

        int min = INF;
        x = 0;
        y = 0;

        for (int i = 0; i < size; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < size; j++)
                {
                    if (!selected[j] && (arr[i][j] < 100)) // not in selected and there is an edge
                    {
                        if (min > arr[i][j])
                        {
                            min = arr[i][j];
                            x = i;
                            y = j;
                        }

                    }
                }
            }
        }
        cout << x + 1 <<  " - " << y + 1 << " :  " << arr[x][y];
        cout << endl;
        totalWeight = totalWeight + arr[x][y];
        selected[y] = true;
        no_edge++;
    }
    duration = (clock() - start) / (double) CLOCKS_PER_SEC; //stop timer
    cout << "Duration: " << duration * 1000 << " milliseconds" << endl;
    cout << "Minimum cost: " << totalWeight << endl;

    return 0;
}