// 22. Generate Parentheses

class Solution {
vector<string> valid_par;

void add_par(string string_par, int close_left, int open_needed){

    if(close_left == 0 && open_needed == 0){
       valid_par.push_back(string_par);
        return;
    }

    if(close_left > 0)
        add_par(string_par+"(", close_left-1, open_needed + 1);

    if(open_needed > 0)
        add_par(string_par + ")", close_left, open_needed - 1);

    return;
}


public:
    vector<string> generateParenthesis(int n) {
        add_par("", n, 0);
        return valid_par;
    }
};
