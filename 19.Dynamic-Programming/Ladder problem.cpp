// Given N number of stairs. Also given the number of steps that one can cover at most in one leap (K). The task is to find the number of possible ways one (only consider combinations) can climb to the top of the building in K leaps or less from the ground floor.
// Examples: 
 

// Input: N = 5, K = 3 
// Output: 5 
// To reach stair no-5 we can choose following combination of leaps: 
// 1 1 1 1 1 
// 1 1 1 2 
// 1 2 2 
// 1 1 3 
// 2 3 
// Therefore the answer is 5.
// Input: N = 29, K = 5 
// Output: 603 

int solve(int N, int K)
{
 
    // elements of combo[] stores the no of
    // possible ways to reach it by all
    // combinations of k leaps or less
 
    int combo[N + 1] = { 0 };
 
    // assuming leap 0 exist and assigning
    // its value to 1 for calculation
    combo[0] = 1;
 
    // loop to iterate over all
    // possible leaps upto k;
    for (int i = 1; i <= K; i++) {
 
        // in this loop we count all possible
        // leaps to reach the jth stair with
        // the help of ith leap or less
        for (int j = 0; j <= N; j++) {
 
            // if the leap is not more than the i-j
            if (j >= i) {
 
                // calculate the value and
                // store in combo[j]
                // to reuse it for next leap
                // calculation for the jth stair
                combo[j] += combo[j - i];
            }
        }
    }
 
    // returns the no of possible number
    // of leaps to reach the top of
    // building of n stairs
    return combo[N];
}
 