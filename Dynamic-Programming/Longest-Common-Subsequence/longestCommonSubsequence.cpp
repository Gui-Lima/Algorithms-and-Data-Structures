//
// Created by guila on 18/05/18.
//

#include "longestCommonSubsequence.h"

longestCommonSubsequence::longestCommonSubsequence(string x, string y) {
    this->a = x;
    this->b = y;
}

long longestCommonSubsequence::longestCommonSubSeq() {
    long m = a.length();
    long n = b.length();
    long ab[m + 1][n + 1];
    for (long i=0; i<=m; i++)
    {
        for (long j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                ab[i][j] = 0;

           else if (a[i-1] == b[j-1])
                ab[i][j] = ab[i-1][j-1] + 1;

            else
                ab[i][j] = max(ab[i-1][j], ab[i][j-1]);
        }
    }

    return ab[m][n];
}
