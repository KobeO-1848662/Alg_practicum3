#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Vertex.h"

void readFile() {
	std::string products[] = {"a", "b", "c", "d", "e", "f", "g", "h"};
	int product_size = (sizeof(products) / sizeof(*products));
	std::string compatible[] = { "a - b", "a - c", "a - d", "a - e", "a - f", "a - g", "a - h",
									"b - c", "b - e", "b - f","b - g", "b - h",
									"c - h",
									"d - e", "d - f",
									"e - f" };
	int compatible_size = (sizeof(compatible) / sizeof(*compatible));
	/*for (int i = 0; i < product_size; i++) {
		for (int j = 0; j < compatible_size; j++) {
			std::string string = compatible[j];
			if (string[0] == products[i]
		}
	}*/
	std::vector<std::string> adj_vertices;
	//adj_vertices.push_back("b");
	//adj_vertices.push_back("d");
	//adj_vertices.push_back("f");
	Vertex vertex1{ Vertex("lol")};
	vertex1.initialize("lol");

	for (int i = 0; i < 8; i++) {
		Vertex vertex{Vertex(products[i])};
		std::cout << "value: " << vertex.getValue() << "\n";

		vertex.add_adj_vertex(vertex, vertex1);
		std::cout << "	adjecent vertices: ";
		adj_vertices = vertex.getAdj();
		for (int j = 0; j < adj_vertices.size(); j++) {
			std::cout << adj_vertices[j] << " ";
		}
		std::cout << "\n";
	}
}

int main() {
	readFile();

}