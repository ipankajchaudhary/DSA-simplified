string printSequence(string S)
{
    string str[] = {"2", "22", "222",
                    "3", "33", "333",
                    "4", "44", "444",
                    "5", "55", "555",
                    "6", "66", "666",
                    "7", "77", "777", "7777",
                    "8", "88", "888",
                    "9", "99", "999", "9999"};
    string output = "";
    int n = S.length();
    for (int i = 0; i < n; i++)
    {
        if (S[i] == ' ')
            output = output + "0";
        else
        {
            int position = S[i] - 'A';
            output = output + str[position];
        }
    }
    return output;
}