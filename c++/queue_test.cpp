/*
Author : SKP
Problem : Test code for queue
*/

#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    queue<int> q;
    q.push(1);
    cout << q.front() << endl;
    q.push(2);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
