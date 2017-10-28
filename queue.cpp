#include <bits/stdc++.h>
using namespace std;

int main()
{
	queue <int> q;
	q.push(1);
	q.push(2);
	cout<<q.front()<<'\n';
	q.pop();
	cout<<q.front()<<'\n';
	return 0;
}