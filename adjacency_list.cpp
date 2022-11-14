
#include<bits/stdc++.h>
using namespace std;
//-----------Class Node---------
class Node
{  public:
    int data;
    struct Node *next;
    struct Node *prev;
};
//-----------Class Graph--------
class Graph
{
    private:
        int V;
        Node *array; 
    public:
        Graph(int V)		//Constructor
        {
            this->V = V;
            array = new Node [V];		 
            for (int i = 0; i < V; ++i)
                array[i].prev = NULL;  		
        }
        void addedge(int src, int dest)	//Function to add edge
        {
    	
	    Node* newNode = new Node;  
	    newNode->data = dest;					
            newNode->next = NULL;		
            newNode->next = array[src].prev;		
            array[src].prev = newNode;				
	    newNode = new Node; 				 
            newNode->data = src;				
            newNode->next = NULL;				

            newNode->next ;
            array[dest].prev= newNode;			
        }

        void showList()		//Function to show adjacency list
        {
            for (int v = 0; v < V; ++v)
            {
                Node* tmp = array[v].prev;	
                cout<<"\n Adjacency list of vertex "<<v<<" is : "<<v;
                while (tmp)
                {
                    cout<<"-> "<<tmp->data;
                    tmp = tmp->next;
                }
                cout<<endl;
            }
        }
};

//--------------------Main Function -------------------
int main()
{
    Graph G(5);
    G.addedge(0, 2);
    G.addedge(0, 1);
    G.addedge(1, 4);
    G.addedge(2, 3);
    G.addedge(0, 4);
    G.addedge(1, 3);
    G.addedge(2, 4);
    G.showList(); 
    return 0;
}
