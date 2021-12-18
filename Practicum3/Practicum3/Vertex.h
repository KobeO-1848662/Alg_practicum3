#pragma once
#include <iostream>
#include <string>
#include <vector>

class Vertex 
{
private:
	std::string m_value;
	std::vector<std::string> m_adj;
public:
	Vertex(std::string value);
	void initialize(std::string value);
	void add_adj_vertex(Vertex vertex1, Vertex vertex2);
	std::string getValue();
	std::vector<std::string> getAdj();
};
