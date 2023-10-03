#include <iostream>
#include <vector>
#define INF 100001

using namespace std;

vector<int> vertex;
vector<int> started;

struct list {
	list* next = nullptr;
	int start = 0;
	int end = 0;
	int cost = 0;
	int check = 0;
};

void make_list(list* l, int start, int end, int cost) {
	started[start - 1]++;
	list* temp = nullptr;
	while (l->next != nullptr) {
		if (l->next->start > start) {
			temp = l->next;
			break;
		}
		l = l->next;
	}
	l->next = new list;
	l->next->start = start;
	l->next->end = end;
	l->next->cost = cost;

	if (temp != nullptr) {
		l->next->next = temp;
		delete temp;
	}
	return;
}

void iterate(list* l) {
	while (l->next != nullptr) {
		cout << "start : " << l->start << "   end : " << l->end << "   cost : " << l->cost << endl;
		l = l->next;
	}
	cout << "start : " << l->start << "   end : " << l->end << "   cost : " << l->cost << endl;
}

void Dijkstra(list* l, int sp, int gp, int sum) {

	if (sp == gp) return;
	while (l->next != nullptr) {

		if (l->start == sp && l->check == started[l->end - 1]) break;

		l = l->next;
	}
	sum += l->cost;
	if (sum < vertex[l->end - 1]) {
		vertex[l->end - 1] = sum;
	}
	l->check++;
	Dijkstra(l, l->end, gp, sum);
	return;
}

bool check(list* l, int M) {
	int count = 0;
	while (l->next != nullptr) {
		if (l->check == started[l->end - 1]) count++;
		if (count == M) return true;
		l = l->next;
	}
	if (l->check == started[l->end - 1]) count++;
	if (count == M) return true;
	return false;
}

int main() {
	list *l = new list;

	int N, M; cin >> N >> M;

	for (int i = 0; i < N; i++) {
		vertex.push_back(INF);
		started.push_back(0);
	}

	cin >> l->start >> l->end >> l->cost;
	started[l->start - 1]++;

	for (int i = 0; i < M - 1; i++) {
		int s, e, c;
		cin >> s >> e >> c;
		make_list(l, s, e, c);
	}
	iterate(l);

	int s_pos, g_pos; cin >> s_pos >> g_pos;
	while(!check(l, M)) {
		int sum = 0;
		Dijkstra(l, s_pos, g_pos, sum);
	}

	cout << vertex[g_pos - 1];
}