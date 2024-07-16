class Solution {
public:
    string reverseWords(string s) {
       reverse(s.begin(),s.end());
       int n=s.length();
       int start=0;
       int end=0;
       int i=0;
       while(i<n)
       {
        while(i<n && s[i]==' ')
        {
            i++;
        }
        if(i==n)
        {
            break;
        }
        while(i<n && s[i]!=' ')
        {
            s[end++]=s[i++];
        }
        reverse(s.begin()+start,s.begin()+end);
        s[end++]=' ';
        start=end;
        i++;
       }
       s.resize(end-1); 
       return s;
    }
};