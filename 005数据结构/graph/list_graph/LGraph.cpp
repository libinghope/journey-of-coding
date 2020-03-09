#include "LGraph.h"

LGraph::LGraph(GraphType type, int vertexNum){
    this->gType = type;
    this->vertexNum = vertexNum;
    this->edgeNum = 0;
    for(int i=0;i<this->vertexNum;i++)
        this->adjlist[i].firstEdge = nullptr;
}
LGraph::~LGraph(){

}
void LGraph::insert(PtrEdge pEdge){
    PrtEdgeNode newNode = new EdgeNode;
    newNode->vertex = pEdge->v2;
    newNode->weight = pEdge->weight;

    newNode->next = this->adjlist[pEdge->v2].firstEdge;
    this->adjlist[pEdge->v1].firstEdge = newNode;

}