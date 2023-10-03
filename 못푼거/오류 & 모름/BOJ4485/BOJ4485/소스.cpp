#include <iostream>
#include <vector>
#define INF 15625

using namespace std;

vector<int> all;
int vertex[INF] = { INF, };

struct edge {
	edge* next_edge = nullptr;
	int start = -1;
	int end = -1;
	int cost = -1;
	int check = 0;
};

edge* temp = nullptr;

void reset_temp(edge* e) {
	while (e->next_edge != nullptr) {
		if (e->start == temp->start && e->end == temp->end) break;
		e = e->next_edge;
	}
	if (e->start == temp->start && e->end == temp->end) {
		e->check = 1;
		all.push_back(temp->end);
		temp = nullptr;
	}
	return;
}

void input(edge* e, int** dist, int i, int j, int n) {
	while (e->next_edge != nullptr) {
		e = e->next_edge;
	}

	if (dist[i][j + 1] != 15625) {
		e->next_edge = new edge;
		e->next_edge->start = (n * i) + j + 1;
		e->next_edge->end = (n * i) + j + 2;
		e->next_edge->cost = dist[i][j + 1];
		e = e->next_edge;
	}
	
	if (dist[i+1][j] != 15625) {
		e->next_edge = new edge;
		e->next_edge->start = (n * i) + j + 1;
		e->next_edge->end = (n * i) + j + (n + 1);
		e->next_edge->cost = dist[i + 1][j];
	}
}

void print(edge* e) {
	cout << "\n\n\n";

	while (e->next_edge != nullptr) {
		cout << e->start << " -> " << e->end << " : " << e->cost << endl;
		e = e->next_edge;
	}
	cout << e->start << " -> " << e->end << " : " << e->cost;
}

bool check(edge* e) {
	while (e->next_edge != nullptr) {
		if (e->check == 0) return true;

		e = e->next_edge;
	}
	if (e->check == 0) return true;
	return false;
}

void update_vertex(int n) {
	for (int i = 0; i < n * n + 1; i++) if (vertex[i] == -1) vertex[i] = INF;
	if(vertex[temp->end] > vertex[temp->start] + temp->cost)
		vertex[temp->end] = vertex[temp->start] + temp->cost;
}

bool check_find(int start) {
	for (auto c : all) {
		if (start == c) return true;
	}
	return false;
}

void search(edge* e, int n) {
	int min = INF;
	while (e->next_edge != nullptr) {
		if (check_find(e->start) && vertex[e->end] + e->cost < min && e->check == 0) {
			temp = e;
			min = e->cost;
		}
		e = e->next_edge;
	}
	if (check_find(e->start) && vertex[e->end] + e->cost < min && e->check == 0) {
		temp = e;
		min = e->cost;
	}
	update_vertex(n);
	return;
}


int main() {
	edge* e = new edge;

	int n; cin >> n; 

	for (int i = 0; i < n * n + 1; i++) vertex[i] = INF;

	int** dist = new int* [n+1];

	for (int i = 0; i < n+1; i++) {
		dist[i] = new int[n+1];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> dist[i][j];
		}
		dist[i][n] = INF;
	}
	for (int i = 0; i < n+1; i++) {
		dist[n][i] = INF;
	}
	
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < n; j++) {
			cout << dist[i][j] << " ";
		}
		cout << dist[i][n];
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			input(e, dist, i, j, n);
		}
	}
	e = e->next_edge;
	print(e);

	all.push_back(1);
	vertex[1] = dist[0][0];

	while (check(e)) {
		for (int i = 0; i < n * n + 1; i++) if(vertex[i] == INF) vertex[i] = -1;
		search(e, n);
		reset_temp(e);
	}

	cout << vertex[n * n];
}