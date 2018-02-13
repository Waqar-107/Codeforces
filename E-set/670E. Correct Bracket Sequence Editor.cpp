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
#define N 1000010
#define inf 1000000

using namespace std;

//doubly linked-list node
struct node
{
	char ch;
	int own, other;
	node *prev, *forward;

	node() {}
	node(int own, int other, int ch)
	{
		this->ch = ch;
		this->own = own;
		this->other = other;

		this->prev = 0;
		this->forward = 0;
	}
};

struct node *root;
struct node *tail;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, p;
	string s, cmd;

	stack<int> b;

	scanf("%d%d%d", &n, &m, &p);
	cin >> s;
	cin >> cmd;

	int *a = new int[n];
	
	//find the right pairs
	for (i = 0; i < n; i++)
	{
		if (s[i] == '(')
			b.push(i);

		else
		{
			k = b.top(); b.pop();
			a[k] = i;
			a[i] = k;
		}
	}

	struct node *temp = 0;
	for (i = 0; i < n; i++)
	{
		struct node *newNode = new node(i, a[i], s[i]);
	
		if (i == 0)
			root = newNode;

		if (i == n - 1)
			tail = newNode;

		if (temp != 0)
		{
			newNode->prev = temp;
			temp->forward = newNode;
		}

		temp = newNode;
	}

	struct node *newL, *newR, *del;

	//get the pointer to its position
	temp = root;
	while (temp)
	{
		if (temp->own == p - 1)
			break;

		temp = temp->forward;
	}

	for (i = 0; i < m; i++)
	{
		if (cmd[i] == 'R')
		{
			if (temp != tail)
				temp = temp->forward;
		}

		else if (cmd[i] == 'L')
		{
			if (temp != root)
				temp = temp->prev;
		}

		else
		{
			//if it is the left side
			if (temp->own < temp->other)
			{
				//get del
				del = temp->forward;
				while (del)
				{
					if (del->own == temp->other)
						break;

					del = del->forward;
				}
			}

			else
			{
				//get del
				del = temp->prev;
				while (del)
				{
					if (del->own == temp->other)
						break;

					del = del->prev;
				}
			}

			//new L and R
			if (temp->own < temp->other)
				newL = temp, newR = del;
			else
				newL = del, newR = temp;

			//case 1
			//L and R neither root or tail
			if (root != newL && tail != newR)
			{
				newL->prev->forward = newR->forward;
				newR->forward->prev = newL->prev;
				temp = newR->forward;
			}

			//update root
			else if (root == newL)
			{
				root = newR->forward;
				newR->forward->prev = 0;

				temp = newR->forward;
			}

			//update tail
			else if (tail == newR)
			{
				tail = newL->prev;
				newL->prev->forward = 0;

				temp = newL->prev;
			}
		}
	}

	temp = root;
	while (temp)
	{
		cout << temp->ch;
		temp = temp->forward;
	}

	return 0;
}
