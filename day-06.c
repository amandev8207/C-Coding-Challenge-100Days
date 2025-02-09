// #2364. Count Number of Bad Pairs

// You are given a 0-indexed integer array nums. A pair of indices (i, j) is a bad pair if i < j and j - i != nums[j] - nums[i].

// Return the total number of bad pairs in nums.


#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

// Structure for hash map
typedef struct {
    int key;
    int value;
} HashNode;

#define TABLE_SIZE 100003  // A large prime number for better hashing

// Hash function
int hash(int key) {
    return (key % TABLE_SIZE + TABLE_SIZE) % TABLE_SIZE;
}

// Insert into hash map
void insert(HashNode *hashMap, int key, int *value) {
    int index = hash(key);
    while (hashMap[index].key != 0 || hashMap[index].value != 0) {
        if (hashMap[index].key == key) {
            (*value) = hashMap[index].value;
            hashMap[index].value += 1;
            return;
        }
        index = (index + 1) % TABLE_SIZE;
    }
    hashMap[index].key = key;
    hashMap[index].value = 1;
    *value = 0;
}

// Function to count bad pairs
ll countBadPairs(int* nums, int numsSize) {
    HashNode *hashMap = (HashNode*)calloc(TABLE_SIZE, sizeof(HashNode));
    ll goodP = 0;
    
    for (int i = 0; i < numsSize; i++) {
        int diff = i - nums[i];
        int prevCount = 0;
        insert(hashMap, diff, &prevCount);
        goodP += prevCount;
    }
    
    ll totalPairs = (1LL * numsSize * (numsSize - 1)) / 2;
    free(hashMap);
    return totalPairs - goodP;
}
