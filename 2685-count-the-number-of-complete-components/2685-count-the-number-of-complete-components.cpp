class Solution {
public:
    void dfs(int node, vector<vector<int>>& graph, vector<int>& vis,
             int &vertices, int &edges) {

        vis[node] = 1;
        vertices++;
        edges += graph[node].size();

        for (int nei : graph[node]) {
            if (!vis[nei])
                dfs(nei, graph, vis, vertices, edges);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> graph(n);

        for (auto &e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        vector<int> vis(n, 0);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {

                int vertices = 0;
                int edgeCount = 0;

                dfs(i, graph, vis, vertices, edgeCount);

                edgeCount /= 2;

                if (edgeCount == vertices * (vertices - 1) / 2)
                    ans++;
            }
        }

        return ans;
    }
};