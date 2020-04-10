#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int V, E, edgeStart, edgeEnd, weight;
int parent[10001];

int getParent(int parent[], int x)
{
    if (parent[x] == x)
        return x;

    return parent[x] = getParent(parent, parent[x]);
}

void unionParent(int parent[], int a, int b)
{
    a = getParent(parent, a);
    b = getParent(parent, b);

    if (a < b)
        parent[b] = a;
    else
        parent[a] = b;
}

int find(int parent[], int a, int b)
{
    a = getParent(parent, a);
    b = getParent(parent, b);

    if (a == b)
        return 1;
    else
        return 0;
}
class Edge
{
public:
    int edgeStart;
    int edgeEnd;
    int weight;
    Edge(int a, int b, int d)
    {
        this->edgeStart = a;
        this->edgeEnd = b;
        this->weight = d;
    }
    bool operator<(const Edge &edge) const
    {
        return this->weight < edge.weight;
    }
};
int main()
{
    vector<Edge> EdgeArr;
    scanf("%d %d", &V, &E);
    for (int i = 1; i < 10001; i++)
    {
        parent[i] = i;
    }
    for (int i = 0; i < E; i++)
    {
        scanf("%d %d %d", &edgeStart, &edgeEnd, &weight);
        EdgeArr.push_back(Edge(edgeStart, edgeEnd, weight));
    }

    sort(EdgeArr.begin(), EdgeArr.end()); //오름차순 정렬

    int sum = 0;
    for (int i = 0; i < EdgeArr.size(); i++)
    {
        if (!find(parent, EdgeArr[i].edgeStart, EdgeArr[i].edgeEnd))
        {
            sum += EdgeArr[i].weight;
            unionParent(parent, EdgeArr[i].edgeStart, EdgeArr[i].edgeEnd);
        }
    }

    printf("%d", sum);
    return 0;
}