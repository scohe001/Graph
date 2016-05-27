#include "Graph.h"

Graph::Graph(int preset) {
    switch(preset) {
        //Note: I'm treating undirected graphs as directed graphs
        //with edges going in both directions
        case 1: //http://i.stack.imgur.com/90Qwu.png (A is 0, F is 5...)
            g = std::vector<std::list<Edge>>(6);
            
            g[0].push_back(Edge(1, 3));
            g[0].push_back(Edge(2, 5));
            g[0].push_back(Edge(3, 9));
            
            g[1].push_back(Edge(0, 3));
            g[1].push_back(Edge(2, 3));
            g[1].push_back(Edge(3, 4));
            g[1].push_back(Edge(4, 7));
            
            g[2].push_back(Edge(0, 5));
            g[2].push_back(Edge(1, 3));
            g[2].push_back(Edge(3, 2));
            g[2].push_back(Edge(4, 6));
            g[2].push_back(Edge(5, 8));
            
            g[3].push_back(Edge(0, 9));
            g[3].push_back(Edge(1, 4));
            g[3].push_back(Edge(2, 2));
            g[3].push_back(Edge(4, 2));
            g[3].push_back(Edge(5, 2));
            
            g[4].push_back(Edge(1, 7));
            g[4].push_back(Edge(2, 6));
            g[4].push_back(Edge(3, 2));
            g[4].push_back(Edge(5, 5));
            
            g[5].push_back(Edge(2, 8));
            g[5].push_back(Edge(3, 2));
            g[5].push_back(Edge(4, 5));
            
        case 2: //https://www.cs.bham.ac.uk/~mdr/teaching/modules04/java2/Dijkstra.gif
            g = std::vector<std::list<Edge>>(7);
            
            g[0].push_back(Edge(1, 14));
            g[0].push_back(Edge(3, 22));
            g[0].push_back(Edge(4, 4));
            
            g[1].push_back(Edge(6, 3));
            
            g[2].push_back(Edge(1, 16));
            g[2].push_back(Edge(3, 12));
            
            //D has no outgoing edges...
            
            g[4].push_back(Edge(3, 12));
            g[4].push_back(Edge(5, 10));
            
            //F has no outgoing edges...
            
            g[6].push_back(Edge(5, 1));
        
        case 3: //http://d2vlcm61l7u1fs.cloudfront.net/media/7dc/7dcc48aa-8b7f-4492-bb95-df7c141f26b8/phpaNFvua.png
            
            g = std::vector<std::list<Edge>>(8);
            
            g[0].push_back(Edge(1, 1));
            g[0].push_back(Edge(4, 4));
            g[0].push_back(Edge(5, 8));
            
            g[1].push_back(Edge(2, 2));
            g[1].push_back(Edge(5, 6));
            g[1].push_back(Edge(6, 6));
            
            g[2].push_back(Edge(3, 1));
            g[2].push_back(Edge(6, 2));
            
            g[3].push_back(Edge(6, 1));
            g[3].push_back(Edge(7, 4));
            
            g[4].push_back(Edge(5, 5));
            
            //F has no outgoing edges...
            
            g[6].push_back(Edge(5, 1));
            g[6].push_back(Edge(7, 1));
            
            //H has no outgoing edges...
    }
}