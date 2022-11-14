#include<bits/stdc++.h>
using namespace std ; 


int main()
{ 
	int v = 6 , e = 7 ; 
	int edges[7][2] = {{0,1},
			   {0,2},
			   {1,3},
			   {2,3},
			   {2,4},
			   {2,5},
			   {4,5}};
 
	int adjacency[v][v] ; 
	for(int i = 0 ; i < v ; i++)
	{
		for(int j = 0 ; j < v ; j++)
		{
			adjacency[i][j] = 0 ; 
		}
	}
	for(int j = 0 ; j < e ; j++)
	{
		int v1 = edges[j][0] , v2 = edges[j][1] ; 
		
		adjacency[v1][v2]++ ; 
		adjacency[v2][v1]++ ; 
	}
	
	cout << "Adjacency Matrix" <<endl; 
	for(int i = 0 ; i < v ; i++)
	{
		for(int j = 0 ; j < v ; j++)
		{
			cout << adjacency[i][j] << " " ; 
		}
		cout << endl ; 
	}
	int start , end ; 
	cout << "Staring vertex: " ;  cin >> start ; 
	cout << "Ending vertex: " ; cin >> end ; 
	int path[v] ; 
	for(int i =0  ; i < v ; i++)
	{
		path[i] = -1 ; 
	}

	for(int i = 0 ;  i < v ; i++)
	{
		for(int j = 0 ; j < v ; j++)
		{
			if(adjacency[i][j] > 0 && path[j] == -1 && j != start  )
			{
				path[j] = i ; 
			}
		}
	}
	int c1 = end ;
	cout << "Path is: " << c1 << " <- " ; 
	while(c1 != start){
		c1 = path[c1] ; 
		cout << c1  ;
		if(c1 != start)
		{
			cout << " <- " ; 
		} 
	} 
	cout << endl;
	
	
	
}