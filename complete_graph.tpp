namespace graph{

    template<typename T>
	Graph<T>& complete_graph(size_t n){
        Graph<T> graph(n);
        for(NodeId u_id = 0; u_id < n; ++u_id){
            for(NodeId v_id = u_id + 1; v_id < n; ++v_id){
                graph.addEdge(u_id, v_id);
                graph.addEdge(v_id, u_id);
            }
        }
        return graph;
    }

}   // namespace graph