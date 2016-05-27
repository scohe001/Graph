Graphs!
=======

How we're implementing
----------------------
While your assignemtn will use an adjacency matrix based implementation of a graph, I've given you the code for an adjacency list implementation!

The whole graph is a vector of lists, where every list represents a single node's outgoing edges. To make undirected graphs simpler, I've pretended thate they're directed graphs with edges pointing both ways.

Your tasks
----------

* Implement Dijkstra's Algorithm to start at the passed in node and print
a report for the graph, so if 0 (A) was pass in for my made up graph,
The report should show the distance and how you got there like:

```
A: 0 
B: 5 A->C->B
C: 2 A->C
D: 9 A->E->F->D
...
```

* Implement algorithms to print the nodes in BFS order and DFS order.