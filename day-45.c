// 2685. Count the Number of Complete Components
// Medium
// Topics
// Companies
// Hint
// You are given an integer n. There is an undirected graph with n vertices, numbered from 0 to n - 1. You are given a 2D integer array edges where edges[i] = [ai, bi] denotes that there exists an undirected edge connecting vertices ai and bi.

// Return the number of complete connected components of the graph.

// A connected component is a subgraph of a graph in which there exists a path between any two vertices, and no vertex of the subgraph shares an edge with a vertex outside of the subgraph.

// A connected component is said to be complete if there exists an edge between every pair of its vertices.




// int *connected_component_array(int node, int *visited, int** edges, int edgesSize, int *subGraphVertex){
//     // finding which vertexes are connected and stroring them in subGraphVertex(where i represents vertex of that subgraph if subGraphVertex[i] =1)
//     visited[node] = 1;
//     subGraphVertex[node] = 1;
//     for(int i = 0 ; i < edgesSize; i++){
//         if (edges[i][0]==node && visited[edges[i][1]] != 1){
//             // visited[edges[i][1]] = 1;
//             connected_component_array(edges[i][1], visited, edges, edgesSize,subGraphVertex );
//         }
//         if (edges[i][1]==node && visited[edges[i][0]] != 1){
//             // visited[edges[i][0]] = 1;
//             connected_component_array(edges[i][0], visited, edges, edgesSize, subGraphVertex);
//         }
//     }
//     return subGraphVertex;
// }

// int check_degree(int *subGraphVertex, int** edges, int edgesSize, int n){
//     // function to check that the subGraph is completely connected or not. if yes return 1; if ot return 0;
//     int total_vertex = 0;
//     for(int i = 0; i<n; i++){
//         if (subGraphVertex[i] == 1){
//             total_vertex = total_vertex +1;
//         }
//     }

//     for (int i =0; i<n; i++){
//         int neighbours = 0;
//         if (subGraphVertex[i] == 1){
//             int node = i;
//             for(int j = 0 ; j < edgesSize; j++){
//                 if (edges[j][0]==node || edges[j][1]==node){
//                     neighbours = neighbours+1;
//                 }
//             }
//             // printf("\nneighbour of %d is: %d",i,neighbours);
//             if (neighbours!=total_vertex-1){
//                 return 0;
//             }
//         }
//     }
//     return 1;
// }

// void print_vertex_of_subgraph(int *subGraphVertex, int n){
//     for (int i =0; i<n;i++){
//         if (subGraphVertex[i]==1){
//             printf("%d ",i);
//         }
//     }
// }
// int countCompleteComponents(int n, int** edges, int edgesSize, int* edgesColSize) {
//     int count = 0; // the number of completely connected subgraph in the given graph

//     int *visited;
//     visited = (int *)(malloc(n*sizeof(int)));
//     for(int i = 0; i<n; i++) visited[i]=0;

//     for(int i = 0; i<n; i++){
//         if (visited[i]!=1){
//             int *subGraphVertex; // finding subgraph vertexes
//             subGraphVertex = (int *)(malloc(n*sizeof(int)));
//             for(int i = 0; i<n; i++) subGraphVertex[i]=-1; 

//             subGraphVertex = connected_component_array(i,visited, edges, edgesSize, subGraphVertex);// here i represents vertex of that subgraph if subGraphVertex[i] =1
//             print_vertex_of_subgraph(subGraphVertex, n);
//             printf("\n");
//             if(check_degree(subGraphVertex,edges, edgesSize,n)){
//                 count = count+1;
//             }
//         }
//     }
//     return count;
// }