#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <queue>
#include <utility>
#include <list>
#include <climits>

#define P printf("\n");


using namespace std;

typedef pair<long long, int> PAIR;
const long long INF = LLONG_MAX;

int path[1000000] = {0};

void printPath(int n) {

    if (path[n] == 0)
        return;

    else

        printPath(path[n]);

    cout << " " << n;

}

int main(int argc, char **argv) {

    int n, m, u, v, w;

    cin >> n >> m;

    if (m == 0)

        cout << -1;

    else {


        list <PAIR> x[n + 1];

        vector<long long> dist(n + 1, INF);

        list<PAIR>::iterator it;

        priority_queue <PAIR, vector<PAIR>, greater<PAIR>> q;


        for (int i = 0; i < m; i++) {

            cin >> u >> v >> w;

            x[u].push_back(make_pair(w, v));
            x[v].push_back(make_pair(w, u));

        }

		q.push(make_pair(0, 1));
		dist[1] = 0;
		path[1] = 0;

		while (!q.empty()) {

			u = q.top().second;
			if(u==n)break;
			q.pop();

			for (it = x[u].begin(); it != x[u].end(); it++) {

				w = (*it).first;
				v = (*it).second;

				if (dist[v] > dist[u] + w) {

					dist[v] = dist[u] + w;
					q.push(make_pair(dist[v], v));

					path[v] = u;

				}

			}

		}

		if(dist[n]==INF)cout<<"-1\n";
		else {
			cout << "1";
			printPath(n);
		}

    }

}