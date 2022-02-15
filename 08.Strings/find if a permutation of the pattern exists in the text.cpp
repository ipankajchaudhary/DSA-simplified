bool checkInclusion(string s1, string s2)
{
    int s2_len = s2.length();
    int s1_len = s1.length();

    if (s1_len > s2_len)
        return false;
    vector<int> freq_s1(26, 0);
    vector<int> window(26, 0);

    for (int i = 0; i < s1_len; i++)
    {
        freq_s1[s1[i] - 'a']++;
        window[s2[i] - 'a']++;
    }

    if (freq_s1 == window)
        return true;

    for (int i = s1_len; i < s2_len; i++)
    {
        window[s2[i - s1_len] - 'a']--;
        window[s2[i] - 'a']++;

        if (freq_s1 == window)
            return true;
    }
    return false;
}