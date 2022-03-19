class FreqStack {
public:
    int mxFreq;
    unordered_map<int,int>freq;
    unordered_map<int,stack<int>>stackFreq;
    
    FreqStack() {
        mxFreq = 0;        
    }
    
    void push(int val) {
        freq[val]++;
        if(mxFreq<freq[val]) mxFreq = freq[val];
        stackFreq[freq[val]].push(val);
    }
    
    int pop() {
        int currTop = stackFreq[mxFreq].top();
        stackFreq[mxFreq].pop();
        freq[currTop]--;
        if(stackFreq[mxFreq].empty()){
            stackFreq.erase(mxFreq);
            mxFreq--;
        };
        return currTop;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */