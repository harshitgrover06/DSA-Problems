class Solution {
    public boolean isBipartite(int[][] graph) {

        int[] color = new int[graph.length];
        Arrays.fill(color, -1);
        for(int i = 0; i<graph.length; i++)
        {
            if(color[i] == -1)
                if(checkDFS(i, graph, color) == false) return false;
        }

        return true;

    }

    public boolean checkBFS(int node, int[][] graph, int[] color)
    {
        color[node] = 1;
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(node);

        while(!queue.isEmpty())
        {
            Integer curr = queue.poll();
            for(int i : graph[curr])
            {
                if(color[i] == -1)
                {
                    color[i] = 1-color[curr];
                    queue.offer(i);
                }
                else if(color[i] == color[curr])
                {
                    return false;
                }
            }
        }

        return true;
    }

    public boolean checkDFS(int node, int[][] graph, int[] color)
    {
        if(color[node] == -1) color[node] = 1;
        for(int i : graph[node])
        {
            if(color[i] == -1)
            {
                color[i] = 1 - color[node];
                if(checkDFS(i, graph, color) == false) return false;
            }
            else if(color[i] == color[node]) return false;
        }

        return true;
    }
}
