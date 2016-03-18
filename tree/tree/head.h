class Node {
public:
    int val;
	Node *left;
	Node *right;

	Node(int _val);
}
class Tree:Node {
public:
	Node *root;
	Tree();
	~Tree();
	void insert(Node *a);
	void print();
};