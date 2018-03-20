

using namespace std;
class pation{

public:
    vector<vector<string>> a(string s)
    {
        int **flag=new int[s.length][s.length];
        b(s,flag);
        vector<vector<string>> res;
        for(int i=0;i<s.length;i++)
        {
            for(int j=)
        }
    }

    void b(string s,int **flag)
    {
        for(int i=0;i<s.length;i++)
        {
            for (int j=0;j<s.length;j++)
                flag[i][j]=0;
        }
        for(int length=0;length<s.length;length++)
        {   
            
            for(int i=0;i<s.length-length;i++)
            {
                j=i+length;
                if(length==0) flag[i][j]=1;
                else
                {
                    if(flag[i+1][j-1]==1&&s[i]==s[j])
                        flag[i][j]=1;
                }
            }   

        }
        return flag
    }
    void c()
    {
        
    }
};