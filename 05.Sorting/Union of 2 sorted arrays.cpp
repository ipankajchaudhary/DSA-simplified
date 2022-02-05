vector<int> findUnion(int nums1[], int nums2[], int n, int m)
{

    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (i > 0 && nums1[i] == nums1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && nums2[j] == nums2[j - 1])
        {
            j++;
            continue;
        }
        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            ans.push_back(nums2[j]);
            j++;
        }
        else
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (i > 0 && nums1[i] != nums1[i - 1])
        {
            ans.push_back(nums1[i]);
            i++;
        }
    }
    while (j < m)
    {
        if (j > 0 && nums2[j] != nums2[j - 1])
        {
            ans.push_back(nums2[j]);
            j++;
        }
    }
    return ans;
}