#include "MGraph.h"

MGraph::MGraph(GraphType type, int vertexNum){
    this->GType = type;
    this->vertexNum = vertexNum;
    this->edgeNum = 0;
}

MGraph::~MGraph(){}

void MGraph::insertEdge(PtrEdge edge){
    
    Edges[edge->v1][edge->v2] = edge->weight;

    //如果是无向图，需要把(v2,v1)也插入
    if(this->GType == UG)
    {
        Edges[edge->v2][edge->v1] = edge->weight;
    }
}