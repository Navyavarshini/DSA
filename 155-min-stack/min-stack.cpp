#include <stack>
#include <vector>
#include <algorithm>

using std::stack;
using std::vector;
using std::pair;
using std::min;

class MinStack {
public:
    // A single stack tracking both the value and the historical minimum at that point
    stack<pair<int, int>, vector<pair<int, int>>> st;

    MinStack() {}
    
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } else {
            // Find the minimum between the new value and the current minimum at the top of the stack
            int currentMin = min(val, st.top().second);
            st.push({val, currentMin});
        }
    }

    void pop() { 
        st.pop(); 
    }

    int top() { 
        return st.top().first; // .first stores the actual value
    }

    int getMin() { 
        return st.top().second; // .second stores the minimum at this point
    }
};