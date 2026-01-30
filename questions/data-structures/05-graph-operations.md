# Graph with Add/Remove Operations

**Category**: Data Structures  
**Difficulty**: Medium

## Problem Statement

Design a graph data structure that supports dynamic addition and removal of vertices and edges. Implement both directed and undirected graph variants with common graph operations.

## Requirements

### Functional Requirements
1. Add and remove vertices
2. Add and remove edges
3. Check if edge exists between vertices
4. Get all neighbors of a vertex
5. Perform BFS and DFS traversals
6. Detect cycles in the graph

### Non-Functional Requirements
1. Efficient edge and vertex operations
2. Support both weighted and unweighted edges
3. Memory efficient representation

## Constraints

- Vertices can be any data type (use generics)
- Support both directed and undirected graphs
- Handle disconnected graphs
- Maximum 10,000 vertices

## Expected Deliverables

### Class Design
- **Graph**: Main graph interface
- **DirectedGraph, UndirectedGraph**: Concrete implementations
- **Edge**: Class representing graph edges
- **Vertex**: Class representing graph vertices

### Key Operations
- `addVertex(vertex)`: Add vertex - O(1)
- `removeVertex(vertex)`: Remove vertex - O(V + E)
- `addEdge(from, to, weight)`: Add edge - O(1)
- `removeEdge(from, to)`: Remove edge - O(1)
- `getNeighbors(vertex)`: Get adjacent vertices - O(1)
- `bfs(start)`: Breadth-first traversal - O(V + E)
- `dfs(start)`: Depth-first traversal - O(V + E)

### Design Patterns
- Strategy Pattern (for different graph representations)

## Example Usage

```
Graph<String> graph = new UndirectedGraph<>();
graph.addVertex("A");
graph.addVertex("B");
graph.addVertex("C");

graph.addEdge("A", "B", 5);
graph.addEdge("B", "C", 3);

List<String> neighbors = graph.getNeighbors("B"); // ["A", "C"]
List<String> bfsOrder = graph.bfs("A");
```

## Test Cases

### Test Case 1
**Input**: Add vertices and edges, perform BFS  
**Expected Output**: Correct traversal order

### Test Case 2
**Input**: Remove vertex with edges  
**Expected Output**: All connected edges also removed

### Test Case 3
**Input**: Detect cycle in graph  
**Expected Output**: Correctly identifies cycles

## Evaluation Criteria

- Correct graph operations
- Efficient data structure choice (adjacency list vs matrix)
- Proper handling of edge cases
- Traversal algorithm correctness
- Memory efficiency

## Additional Notes

Consider using adjacency list for sparse graphs. Think about how to handle self-loops and parallel edges.
