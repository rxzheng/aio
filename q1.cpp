/*
 * Solution Template for Shopping Spree
 * 
 * Australian Informatics Olympiad 2024
 * 
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>
using namespace std;

/* N is the number of items. */
int N;

/* K is the number of coupons. */
int K;

/* costs contains the costs of the items. */
int costs[200005];

int answer;
int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("shopin.txt", "r");
    FILE *output_file = fopen("shopout.txt", "w");

    /* Read the value of N, K, and the costs from the input file. */
    fscanf(input_file, "%d%d", &N, &K);
    for (int i = 0; i < N; i++) {
        fscanf(input_file, "%d", &costs[i]);
    }

    /*
     * TODO: This is where you should compute your solution. Store the minimum
     * cost to buy all N items into the variable answer.
     */
cout<< costs
for(int b = 0; b<K; b++){
    answer += costs[0];
    costs.pop_back();
    costs.pop();
}
for(int i = 0; i < costs.size; i++){

}



for i in range(K):
    answer += costs[0]
    print(f'added1', costs[0])
    costs.pop(0)
    costs.pop()
    
for i in range(int((int(len(costs))/2))):
    answer += int(costs[len(costs)-1])
    print(f'added', int(costs[len(costs)-1]))
    print(f'list is', costs)
    print(f'cost is',costs[len(costs)-2])
    costs.pop(len(costs)-2)
    costs.pop()


    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
