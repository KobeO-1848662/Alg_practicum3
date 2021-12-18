#include "Vertex.h"
#include <algorithm>


Vertex::Vertex(std::string value) : m_value{ value } {
	m_value = value;
	m_adj;
}


void Vertex::add_adj_vertex(Vertex vertex1, Vertex vertex2) {
	if (std::find(m_adj.begin(), m_adj.end(), vertex2.getValue()) != m_adj.end()) {
		m_adj.push_back(vertex2.getValue());
		vertex2.add_adj_vertex(vertex2, vertex1);
	}
	else
		return;

}

std::string Vertex::getValue() {
	return m_value;
}

std::vector<std::string> Vertex::getAdj() {
	return m_adj;
}