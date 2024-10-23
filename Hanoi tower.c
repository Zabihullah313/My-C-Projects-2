#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int num_disks = 14; // Number of disks
    char source_peg = 'A', auxiliary_peg = 'B', destination_peg = 'C';

    printf("Tower of Hanoi with %d disks:\n", num_disks);
    towerOfHanoi(num_disks, source_peg, auxiliary_peg, destination_peg);
    return 0;
}
