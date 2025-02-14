// #1352. Product of the Last K Numbers
// Me
// Design an algorithm that accepts a stream of integers and retrieves the product of the last k integers of the stream.

// Implement the ProductOfNumbers class:

// ProductOfNumbers() Initializes the object with an empty stream.
// void add(int num) Appends the integer num to the stream.
// int getProduct(int k) Returns the product of the last k numbers in the current list. You can assume that always the current list has at least k numbers.
// The test cases are generated so that, at any time, the product of any contiguous sequence of numbers will fit into a single 32-bit integer without overflowing



// #include <stdlib.h>

// typedef struct {
// #define MAXCAP 40001
//   int *mul; // 1-indexed
//   int cap;
//   int len;
//   int i0; // recent 0's index
// } ProductOfNumbers;

// ProductOfNumbers *productOfNumbersCreate() {
//   ProductOfNumbers *ins = malloc(sizeof(ProductOfNumbers));
//   *ins = (ProductOfNumbers){malloc(8 * sizeof(int)), 8, 1, -1};
//   ins->mul[0] = 1;
//   return ins;
// }

// void productOfNumbersAdd(ProductOfNumbers *obj, int num) {
//   if (num == 0) {
//     obj->mul[obj->len] = 1;
//     obj->i0 = obj->len;
//   } else {
//     obj->mul[obj->len] = obj->mul[obj->len - 1] * num;
//   }
//   // update cap
//   if (++obj->len == obj->cap) {
//     obj->cap *= 2;
//     if (obj->cap > MAXCAP)
//       obj->cap = MAXCAP;
//     obj->mul = realloc(obj->mul, obj->cap * sizeof(int));
//   }
// }

// int productOfNumbersGetProduct(ProductOfNumbers *obj, int k) {
//   if (obj->len - k > obj->i0)
//     return obj->mul[obj->len - 1] / obj->mul[obj->len - k - 1];
//   else
//     return 0;
// }

// void productOfNumbersFree(ProductOfNumbers *obj) {
//   free(obj->mul);
//   free(obj);
// }