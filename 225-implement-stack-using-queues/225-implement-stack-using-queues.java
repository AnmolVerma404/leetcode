class MyStack {
    Queue<Integer> q1 = new LinkedList();
    Queue<Integer> q2 = new LinkedList();
    public MyStack() {
        
    }
    
    public void push(int x) {
        q2.add(x);
        while(q1.size()>0){
            q2.add(q1.peek());
            q1.remove();
        }
        var temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    public int pop() {
        int res = q1.peek();
        q1.remove();
        return res;
    }
    
    public int top() {
        return q1.peek();
    }
    
    public boolean empty() {
        return q1.size() == 0;
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */