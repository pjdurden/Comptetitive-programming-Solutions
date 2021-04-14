#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int nbTests; cin >> nbTests;
    while (nbTests--) {
        int nbElem, pos, nbControl;
        cin >> nbElem >> pos >> nbControl;

        int before = pos-1, behind = nbElem-pos;
        nbControl = min(nbControl, before);

        vector<int> tab(nbElem);
        for (int i = 0; i < nbElem; ++i) cin >> tab[i];

        int bestStrategy = 0;

        for (int orderFirst = 0; orderFirst <= nbControl; ++orderFirst) {
            int strategyAns = (int)(1e9) + 5;
            for (int opponentFirst = 0; opponentFirst <= before-nbControl; ++opponentFirst) {
                int caseAns = max(tab[orderFirst + opponentFirst], tab[orderFirst + opponentFirst + behind]); 
                strategyAns = min(strategyAns, caseAns);
            }
            bestStrategy = max(bestStrategy, strategyAns);
        }

        cout << bestStrategy << "\n";
    }
}