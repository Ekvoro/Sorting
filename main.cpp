#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    unsigned char *m, k;
    cin >> n;
    m=(unsigned char *)malloc(n*sizeof(unsigned char));
    for(int i=0; i<n;i++)
        cin >> m[i];
    for(int i = 0; i<n-1;i++)
        for (int j=0; j<n-i-1; j++)
            if (m[j]>m[j+1])
            {
              k=m[j];
              m[j]=m[j+1];
              m[j+1]=k;
            }
    for (int i=0; i<n; i++)
        cout <<m[i]<<" ";
    free (m);
    return 0;
}
