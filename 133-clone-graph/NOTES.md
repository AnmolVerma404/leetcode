BFS
```
Node* cloneGraph(Node* node){
if(node == NULL)
return node;
unordered_map<Node*, Node*> visited;
queue<Node*> Q;
Q.push(node);
visited[node] = new Node(node->val);
while(!Q.empty()){
int n = Q.size();
Node* curr = Q.front();
Q.pop();
for(auto nei: curr->neighbors){
if(!visited[nei]){
visited[nei] = new Node(nei->val);
Q.push(nei);
}
visited[curr]->neighbors.push_back(visited[nei]);
}
}
return visited[node];
​
}
```