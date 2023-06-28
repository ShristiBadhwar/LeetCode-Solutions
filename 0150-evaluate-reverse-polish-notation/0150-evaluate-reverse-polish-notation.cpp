class Solution {
    int convert(string s)
    {
        int num=0;
        if(s[0]!='-')
        for(int i=0; i<s.length(); i++)
        {
            num=num*10+(i-48);
        }
        else{
        for(int i=1; i<s.length(); i++)
        {
            num=num*10+(i-48);
        }
          num=num*(-1);
        }

        
        return num;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0; i<tokens.size(); i++)
        {
    if(tokens[i]!="*" && tokens[i]!="/" && tokens[i]!="+"&& tokens[i]!="-")
            {
                int y=stoi(tokens[i]);
                s.push(y);  
            }
            
            else{
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                if(tokens[i]=="+")
                s.push(y+x);
                else if(tokens[i]=="-")
                s.push(y-x);
                else if(tokens[i]=="*")
                s.push(y*x);
                else if(tokens[i]=="/")
                s.push(y/x);
            }
        }
        return s.top();
        
    }
};