/**
 * @file complete_graph.hpp
 * 
 * @brief Complete graph constructor.
 * 
 * @author David Gu
 * @author Mirco Paul
 * 
 * @date \today
 */
#pragma once

#include "graph.hpp"

/**
 * 
 * @namespace graph
 * 
 */
namespace graph{
	
	/**
	 * 
	 * Returns a complete graph (a graph with arcs in both directions between each pair of nodes)
	 * with n nodes.
	 *
	 * @tparam T Node type.
	 *
	 * @param n Number of nodes.
	 *
	 */
	template<typename T>
	Graph<T> complete_graph(size_t n);

} // namespace graph

#include "complete_graph.tpp"