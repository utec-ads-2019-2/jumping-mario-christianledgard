#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
    unsigned int testCases, numberWalls, heightWalls;
    cin >> testCases;

    for (unsigned int i = 0; i < testCases; ++i) {
        cin >> numberWalls;

        unsigned int up = 0, down = 0, anterior = 0;
        bool firstTime = true;
        for (unsigned int j = 0; j < numberWalls; ++j) {
            scanf("%i", &heightWalls);

            if(firstTime){
                anterior = heightWalls;
                firstTime = false;
            }else{
                if(anterior < heightWalls)up++;
                else if(anterior == heightWalls);
                else down++;
                anterior = heightWalls;
            }


        }

        cout << "Case " << i + 1 << ": " << up << " " << down << endl;

    }
    return 0;
}