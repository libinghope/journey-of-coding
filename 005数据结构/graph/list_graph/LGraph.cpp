#include "LGraph.h"

LGraph::LGraph(GraphType type, int vertexNum){
    this->gType = type;
    this->vertexNum = vertexNum;
    this->edgeNum = 0;
    for(int i=0;i<vertexNum;i++)
        this->adjlist[i].firstEdge = nullptr;
}
LGraph::~LGraph(){
    for(int i=0;i<this->vertexNum;i++ ){
        PrtEdgeNode curEdge = this->adjlist[i].firstEdge;
        while(curEdge){
            delete curEdge;
            curEdge = curEdge->next;
        }
    }
}

//插入边{v1,v2,weight}
void LGraph::insertEdge(PtrEdge pEdge){
    PrtEdgeNode newNode = new EdgeNode;
    newNode->vertex = pEdge->v2;
    newNode->weight = pEdge->weight;

    //切下与“头节点”的连接，作为新节点的next
    newNode->next = this->adjlist[pEdge->v1].firstEdge;
    //再连接“头结点”与新节点(边的节点)
    this->adjlist[pEdge->v1].firstEdge = newNode;

    //如果是无向图,插入反向的对称一条边
    if(this->gType == UG){
    PrtEdgeNode _newNode = new EdgeNode;
    _newNode->vertex = pEdge->v1;
    _newNode->weight = pEdge->weight;

    //切下与“头节点”的连接，作为新节点的next
    _newNode->next = this->adjlist[pEdge->v2].firstEdge;
    //再连接“头结点”与新节点(边的节点)
    this->adjlist[pEdge->v2].firstEdge = _newNode;
    }

}