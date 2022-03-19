class FreqStack {
public:
    int mxFreq;
    unordered_map<int,int>freq;
    unordered_map<int,stack<int>>stackFreq;
    
    FreqStack() {
        mxFreq = 0;//When Constructer set mxFreq to 0        
    }
    
    void push(int val) {
        freq[val]++;//Increase the frequency of the int val in hash map
        if(mxFreq<freq[val]) mxFreq = freq[val];//If mxFreq is smaller than the freq of curr int val in map update it
        stackFreq[freq[val]].push(val);//Push the val in stack Hash Map
    }
    
    int pop() {
        int currTop = stackFreq[mxFreq].top();//Find the top most element with max frequency
        stackFreq[mxFreq].pop();//Pop the mxFreq in the stack Hash Map
        freq[currTop]--;//Decrement the freq as the mxFreq is popped
        if(stackFreq[mxFreq].empty()){//If no element of max frequency then decrement the max frequency and erase the mxFreq stack for just in case
            stackFreq.erase(mxFreq);
            mxFreq--;
        };
        return currTop;
    }
};