def dfs_shortest(graph, node, goal, visited, path, cost, best):
    visited.add(node)
    path.append(node)

    if node == goal:
        if cost < best["cost"]:
            best["path"] = path.copy()
            best["cost"] = cost
    else:
        for neighbor, weight in graph[node]:
            if neighbor not in visited:
                dfs_shortest(graph, neighbor, goal, visited, path, cost + weight, best)

    path.pop()
    visited.remove(node)



graph = {
    "Start": [("A", 2), ("B", 3), ("D", 5)],
    "A": [("C", 4)],
    "B": [("D", 4)],
    "C": [("G", 2), ("D", 1)],
    "D": [("C", 1), ("G", 5)],
    "G": []
}

best = {"path": [], "cost": float("inf")}
dfs_shortest(graph, "Start", "G", set(), [], 0, best)

if best["path"]:
    print("Shortest path:", " -> ".join(best["path"]))
    print("Total cost:", best["cost"])
else:
    print("No path found")
