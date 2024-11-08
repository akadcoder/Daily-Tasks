Basic Pair Struct Example

#include <stdio.h>

// Define a struct for a pair of integers
typedef struct {
    int first;
    int second;
} Pair;

int main() {
    // Create and initialize a pair
    Pair p1;
    p1.first = 10;
    p1.second = 20;

    // Print the pair
    printf("Pair: (%d, %d)\n", p1.first, p1.second);

    return 0;
}



 /*Array of Pairs*/

 #include <stdio.h>

typedef struct {
    int first;
    int second;
} Pair;

int main() {
    int n = 3;  // Number of pairs
    Pair pairs[n];

    // Initialize the array of pairs
    for (int i = 0; i < n; i++) {
        pairs[i].first = i + 1;
        pairs[i].second = (i + 1) * 10;
    }

    // Print each pair in the array
    printf("Array of Pairs:\n");
    for (int i = 0; i < n; i++) {
        printf("Pair %d: (%d, %d)\n", i + 1, pairs[i].first, pairs[i].second);
    }

    return 0;
}



/*Pair Initialization Using a Function*/
 

#include <stdio.h>

typedef struct {
    int first;
    int second;
} Pair;

// Function to initialize a pair
Pair make_pair(int a, int b) {
    Pair p;
    p.first = a;
    p.second = b;
    return p;
}

int main() {
    // Create a pair using the function
    Pair p1 = make_pair(5, 15);
    printf("Created Pair: (%d, %d)\n", p1.first, p1.second);

    return 0;
}


/*Nested Pairs*/

#include <stdio.h>

typedef struct {
    int first;
    int second;
} Pair;

typedef struct {
    Pair outer;   // Outer pair
    Pair inner;   // Inner pair (nested)
} NestedPair;

int main() {
    NestedPair np;
    np.outer.first = 1;
    np.outer.second = 2;
    np.inner.first = 3;
    np.inner.second = 4;

    printf("Outer Pair: (%d, %d)\n", np.outer.first, np.outer.second);
    printf("Inner Pair: (%d, %d)\n", np.inner.first, np.inner.second);

    return 0;
}

