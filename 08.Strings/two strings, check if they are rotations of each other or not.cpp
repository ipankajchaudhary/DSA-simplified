bool check(string p, string t)
    {
        int n = t.length();
        int m = p.length();
        for (int i = 0; i < n - m + 1; i++)
        {
            int j = 0;
            for (; j < m; j++)
            {
                if (t[i + j] != p[j])
                {
                    break;
                }
            }
            if (j == m)
            {
                return true;
            }
        }
        return false;
    }
    bool rotateString(string s, string goal) {
        if(s.length() > goal.length())
            return false;
        s+=s;
        return check(goal,s);
    }