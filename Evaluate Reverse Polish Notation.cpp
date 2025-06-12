class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s1;

        for (int i=0; i<tokens.size(); i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*"
            && tokens[i] != "/")
            {
                s1.push(tokens[i]);
            }
            else
            {
                int first = stoi(s1.top());
                s1.pop();
                int second = stoi(s1.top());
                s1.pop();

                if (tokens[i] == "+")
                    s1.push(to_string(first+second));
                else if (tokens[i] == "-")
                    s1.push(to_string(second-first));
                else if (tokens[i] == "*")
                    s1.push(to_string(first*second));
                else
                    s1.push(to_string(second/first));
            }
        }
        return stoi(s1.top());
    }
};
