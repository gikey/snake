struct SnakeNode{
	int x,y;
	SnakeNode *next,*prior;
	SnakeNode(int x,int y){
		this->x = x;
		this->y = y;
		this->next = NULL;
		this->prior = NULL;
	}
};
class Snake{
private:
	SnakeNode *head,*tail;
public:
	void Snake_Birth();
	void Snake_Destroy();
	void Add_head(int x,int y);
	void Del_tail();
	int Get_tail_x();
	int Get_tail_y();
	SnakeNode *Get_head();
};
void Snake::Snake_Birth(){
	this->head = new SnakeNode(6,2);
	this->tail = new SnakeNode(4,2);
	this->head->next = this->tail;
	this->tail->prior = this->head;
}
void Snake::Snake_Destroy(){
	SnakeNode *node = this->head;
	while(node != this->tail){
		Del_tail();
	}
	delete node;
}
void Snake::Add_head(int x,int y){
	SnakeNode *node = new SnakeNode(2*x,y);
	node->next = this->head;
	this->head->prior = node;
	this->head = node;
}
void Snake::Del_tail(){
	SnakeNode *node = this->tail;
	this->tail = node->prior;
	this->tail->next = NULL;
	delete node;
}
int Snake::Get_tail_x(){
	return (this->tail->x);
}
int Snake::Get_tail_y(){
	return (this->tail->y);
}
SnakeNode *Snake::Get_head(){
	return this->head;
}
















