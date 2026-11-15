#include <iostream>
using namespace std;

int main() {
    // 1D Array
    double revenue[7], totalRev = 0;
    cout << "Enter 7 days revenue:\n";
    for(int i=0; i<7; i++) { cin >> revenue[i]; totalRev += revenue[i]; }
    cout << "Total Weekly Revenue: " << totalRev << " | Average: " << totalRev/7 << endl;

    // 2D Array (5 floors, 10 rooms)
    int occupancy[5][10];
    for(int i=0; i<5; i++) {
        int occ = 0, vac = 0;
        for(int j=0; j<10; j++) {
            occupancy[i][j] = rand() % 2;
            if(occupancy[i][j]) occ++; else vac++;
        }
        cout << "Floor " << i+1 << " - Occupied: " << occ << ", Vacant: " << vac << endl;
    }

    // 3D Array (3 branches, 5 floors, 10 rooms)
    int chain[3][5][10], totalOcc = 0;
    for(int b=0; b<3; b++)
        for(int f=0; f<5; f++)
            for(int r=0; r<10; r++)
                if(rand() % 2) totalOcc++;
    cout << "Total Occupied Across All Branches: " << totalOcc << endl;
    return 0;
}