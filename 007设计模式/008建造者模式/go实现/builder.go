package main


//角色建造器：抽象建造者
type ActorBuilder struct{
    actor *Actor
    //buildSex void(){}
    //buildFace void(){}
    //buildCostume void(){}
    //buildHairstyle void(){}
    //工厂方法，返回一个完整的游戏角色对象
};

func (actorBuilder ActorBuilder)buildType(){
    
}
func (actorBuilder ActorBuilder) buildSex()  {
    
}
func (actorBuilder ActorBuilder)buildFace()  {
    
}
func (actorBuilder ActorBuilder) buildCostume() {
    
}
func  (actorBuilder ActorBuilder) buildHairstyle() {
    
}
func (actor *Actor) createActor() *Actor{
    return new(Actor);
}
//------------------------------------------------------------

func main()  {
    
}