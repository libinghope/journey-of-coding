//用邻接表来表示图
#define MaxVertexNum 100 // 最大顶点数为100
typedef int WeightType;  // 边的权重假定为整型
typedef int VertexType;  // 顶点用整型表示

enum GraphType
{
    DG,//有向图
    UG,//无向图
    DN,//有向网图
    UN //无向网图
};

typedef struct Edge{
    VertexType v1, v2;  //边的两个顶点(v1,v2)或者<v1,v2>
    WeightType weight;  //有向图边的权重
}*PtrEdge;

typedef struct EdgeNode
{
    VertexType   vertex;   //顶点
    struct EdgeNode *next; //指向下一个邻接点的指针域
    WeightType   weight;   //权重
} Node, *PrtEdgeNode;

typedef struct Vnode
{
    VertexType   vertex;      //顶点
    PrtEdgeNode  firstEdge;   //边表头指针
} VertexNode;

typedef VertexNode AdjList[MaxVertexNum];

//LGraph是以邻接表方式存储的图类型
class LGraph
{ 
public:
    LGraph(GraphType type, int vertexNum);
    ~LGraph();
    void insertEdge(PtrEdge pEdge);
private:
    AdjList  adjlist;          //邻接表
    int      vertexNum;        //顶点数
    int      edgeNum;          //边数 
    enum GraphType gType;      //类型
};
