#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200010

#define inf 10000000
#define MAX_HEAP_SIZE 200010
#define MAXREAL 999999.0

using namespace std;

//------------------------------------------------------------------
class HeapItem
{
public:
	int data;
	ll key;
};

class MinHeap
{
public:

	HeapItem *A;
	int heapLength;
	int *mp;

	//---------------------------------------------------------------------------------------------
	//constructor
	MinHeap()
	{
		A = new HeapItem[MAX_HEAP_SIZE];
		mp = new int[MAX_HEAP_SIZE];
		heapLength = 0;
	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//destructor
	~MinHeap()
	{
		if (mp) delete[] mp;
		if (A) delete[] A;
		mp = 0;                        //set to NULL after deletion
		A = 0;                            //set to NULL after deletion
	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//Fills the heap with an array of integers
	//key values do not maintain heap property
	void initialize(int v[], int n)
	{
		heapLength = n;
		for (int i = 0; i<n; i++) //nodes are stored from index 1 instead of 0 in the heap
		{
			A[i + 1].data = v[i];
			A[i + 1].key = MAXREAL;
			mp[v[i]] = i + 1; //map tracks which vertex is stored at which heap node
		}
	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//insert an item
	void insertItem(int data, float key)
	{
		heapLength++;
		A[heapLength].data = data;
		A[heapLength].key = key;

		mp[A[heapLength].data] = heapLength;

		//restore the properties of the heap
		buHeapify(heapLength);
	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//this function removes (and returns) the node which contains the minimum key value
	HeapItem removeMin()
	{
		HeapItem temp = A[1];
		A[1] = A[heapLength];

		if (heapLength == 0)
		{
			printf("Nothing to delete\n");
			temp.data = -1; temp.key = -1;
			return  temp;
		}

		heapLength--;
		heapify(1);

		return temp;
	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//The function updates the key value of an existing data stored in the heap
	void updateKey(int data, float key)
	{
		//search
		int idx = 0;
		idx = mp[data];

		if (!idx)
		{
			printf("Data not found\n");
			return;
		}

		//this node should be placed in lower parts of the tree
		if (A[idx].key>key)
		{
			A[idx].key = key;
			buHeapify(idx);
		}

		else
		{
			A[idx].key = key;
			heapify(idx);
		}

	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//This function returns the key value of a data stored in heap
	float getKey(int data)
	{
		int i = mp[data];
		return A[i].key;
	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//this function will restore heap property
	//works only for updating or removing min
	//adding heapify(i+1);heapify(i+2) before "break" of line 147 will make it work for insert() too.
	void heapify(int i)
	{
		int l, r, smallest;
		while (1)
		{
			l = 2 * i;          //left child index
			r = 2 * i + 1;     //right child index
			smallest = i;

			if (l>heapLength && r>heapLength)
				break; //nothing to do, we are at bottom

			else if (r>heapLength)
				smallest = l;

			else if (l>heapLength)
				smallest = r;

			else if (A[l].key < A[r].key)
				smallest = l;

			else
				smallest = r;

			if (A[i].key <= A[smallest].key)
				break;	//we are done heapifying

			else
			{
				//swap nodes with smallest child, adjust map array accordingly
				HeapItem t;
				t = A[i];
				A[i] = A[smallest];
				mp[A[i].data] = i;
				A[smallest] = t;
				mp[A[smallest].data] = smallest;
				i = smallest;
			}
		}
	}
	//---------------------------------------------------------------------------------------------


	//---------------------------------------------------------------------------------------------
	//restoring heap properties starting from index i to the root
	void buHeapify(int i)
	{
		HeapItem temp;
		int parent, child;

		child = i;
		while (child>1)
		{
			//i be the parent, then 2i is the left child, 2i+1 the right
			if (child % 2 == 0)
				parent = child / 2;
			else
				parent = (child - 1) / 2;

			if (A[parent].key>A[child].key)
			{
				temp = A[child];
				A[child] = A[parent];
				A[parent] = temp;

				mp[A[parent].data] = parent;
				mp[A[child].data] = child;

			}

			child = parent;
		}
	}
	//---------------------------------------------------------------------------------------------

	//---------------------------------------------------------------------------------------------
	bool Empty()
	{
		if (heapLength == 0)
			return true;

		else
			return false;
	}
	//---------------------------------------------------------------------------------------------

};
//------------------------------------------------------------------

struct edge
{
	int v; ll w;
	edge() {}
	edge(int v, ll w)
	{
		this->v = v;
		this->w = w;
	}
};

ll dist[N];
bool vis[N];
vector<edge> adj[N];

void dijkstra(int n)
{
	memset(vis, 0, sizeof(vis));

	MinHeap pq;
	for (int i = 1; i <= n; i++)
	{
		pq.insertItem(i, dist[i]);
	}

	while (!pq.Empty())
	{
		HeapItem u = pq.removeMin();

		if (vis[u.data])
			continue;

		for (edge e : adj[u.data])
		{
			if (dist[u.data]+e.w<dist[e.v])
			{
				dist[e.v] = dist[u.data] + e.w;
				pq.updateKey(e.v, dist[e.v]);
			}
		}

		vis[u.data] = 1;
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, p;
	int u, v;
	ll w;

	cin >> n >> m;
	for (i = 0; i < m; i++)
	{
		cin >> u >> v >> w;

		adj[u].push_back(edge(v, w*2));
		adj[v].push_back(edge(u, w*2));
	}

	for (i = 1; i <= n; i++)
		cin >> dist[i];

	dijkstra(n);

	for (i = 1; i <= n; i++)
		cout << dist[i] << " ";
	nl

	return 0;
}
