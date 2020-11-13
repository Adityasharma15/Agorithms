// 133. Clone Graph

class Solution {

unordered_map<Node*, Node *> copy;
public:
    Node* cloneGraph(Node* node) {

        if(!node)
            return NULL;

        // if copy has not been created
        if(copy.find(node) == copy.end()){

            Node * new_copy = new Node(node->val);
            copy[node] = new_copy;
            for(auto neighb: node->neighbors){
                Node * copy_neighbor = cloneGraph(neighb);
                new_copy->neighbors.push_back(copy_neighbor);
            }
        }

        return copy[node];
    }
};
