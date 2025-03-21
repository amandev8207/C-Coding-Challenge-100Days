// 2115. Find All Possible Recipes from Given Supplies
// Medium
// Topics
// Companies
// Hint
// You have information about n different recipes. You are given a string array recipes and a 2D string array ingredients. The ith recipe has the name recipes[i], and you can create it if you have all the needed ingredients from ingredients[i]. A recipe can also be an ingredient for other recipes, i.e., ingredients[i] may contain a string that is in recipes.

// You are also given a string array supplies containing all the ingredients that you initially have, and you have an infinite supply of all of them.

// Return a list of all the recipes that you can create. You may return the answer in any order.

// Note that two recipes may contain each other in their ingredients.

// struct data {
//     int val;
//     struct data* next;
// };

// struct node {
//     char* word;
//     int idx;
//     struct node* next;
// };

// struct map {
//     int capacity;
//     struct node** buckets;
// };

// unsigned long djb2_hash(const char *s) {
//     unsigned long hash = 5381;
//     int c;
//     while ((c = *s++)) {
//         hash = ((hash << 5) + hash) ^ c; 
//     }
//     return hash;
// }

// struct map* initMap(int cap) {
//     struct map* m = malloc(sizeof(struct map));
//     m->capacity = cap;
//     m->buckets = malloc(cap * sizeof(struct node*));
//     for(int i = 0; i < cap; i++) {
//         m->buckets[i] = NULL;
//     }

//     return m;
// }

// void add(struct map* m, const char* word, int idx) {
//     unsigned long hashkey = djb2_hash(word) % m->capacity;
//     struct node* tmp = m->buckets[hashkey];

//     while(tmp) {
//         if(!strcmp(tmp->word, word)) return;
//         tmp = tmp->next;
//     }

//     int len = strlen(word);
//     tmp = malloc(sizeof(struct node));

//     tmp->idx = idx;
//     tmp->word = malloc((len + 1) * sizeof(char));
//     strncpy(tmp->word, word, len);
//     tmp->word[len] = '\0';
//     tmp->next = m->buckets[hashkey];
//     m->buckets[hashkey] = tmp;
// }

// int find(struct map* m, const char* word) {
//     unsigned long hashkey = djb2_hash(word) % m->capacity;
//     struct node* tmp = m->buckets[hashkey];

//     while(tmp) {
//         if(!strcmp(tmp->word, word)) return tmp->idx;
//         tmp = tmp->next;
//     }

//     return -1;
// }

// char** findAllRecipes(char** recipes, int recipesSize, char*** ingredients, int ingredientsSize,int* ingredientsColSize, char** supplies, int suppliesSize, int* returnSize) {
//     struct map* haveMap = initMap(recipesSize);
//     struct map* recipeMap = initMap(recipesSize);
//     struct data** graph = malloc(recipesSize * sizeof(struct data*));
//     int* queue = malloc(recipesSize * sizeof(int));
//     int* inD = calloc(recipesSize, sizeof(int));
//     char** result = malloc(recipesSize * sizeof(char*));
//     *returnSize = 0;

//     int front = 0, rear = 0;

//     for (int i = 0; i < recipesSize; i++) {
//         graph[i] = NULL;
//     }
//     for(int i = 0; i < recipesSize; i++) {
//         add(recipeMap, recipes[i], i);
//     }
//     for(int i = 0; i < ingredientsSize; i++) {
//         for(int j = 0; j < ingredientsColSize[i]; j++) {
//             int idx = find(recipeMap, ingredients[i][j]);
//             if(idx != -1) {
//                 struct data* newNode = malloc(sizeof(struct data));
//                 newNode->val = i;
//                 newNode->next = graph[idx];
//                 graph[idx] = newNode;
//             }
//         }
//     }
//     for(int i = 0; i < recipesSize; i++) {
//         struct data* p = graph[i];
//         while(p) {
//             inD[p->val]++;
//             p = p->next;
//         }
//     }
//     for(int i = 0; i < recipesSize; i++) {
//         if(inD[i] == 0) queue[rear++] = i;
//     }
//     for(int i = 0; i < suppliesSize; i++) {
//         add(haveMap, supplies[i], i);
//     }

//     int oIdx = 0;
    
//     while(front < rear) {
//         int idx = queue[front++];
//         int canMake = 1;
//         for(int j = 0; j < ingredientsColSize[idx]; j++) {
//             if(find(haveMap, ingredients[idx][j]) == -1) {
//                 canMake = 0;
//                 break;
//             }
//         }
//         if(canMake) {
//             int len = strlen(recipes[idx]);
//             result[*returnSize] = malloc((len + 1) * sizeof(char));
//             strncpy(result[*returnSize], recipes[idx], len);
//             result[*returnSize][len] = '\0';
//             (*returnSize)++;

//             add(haveMap, recipes[idx], idx);
//         }

//         struct data* cursor = graph[idx];
//         while(cursor) {
//             if(--inD[cursor->val] == 0) queue[rear++] = cursor->val;
//             cursor = cursor->next;
//         }
//     }

//     return result;
// }


