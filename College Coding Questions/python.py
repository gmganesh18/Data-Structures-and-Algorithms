def LongestPathInGrid(N, M, grid):
    directions = [(0, 1), (1, 0)]
    max_length= [-1]

    def dfs(i, j, length):
        if i == N -1 and j == M - 1:
            max_length[0] = max(max_length[0], length)
            return
        
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < N and 0 <=nj < M and grid[ni][nj] > grid[i][j]:
                dfs(ni,nj , length + 1)

    dfs(0, 0, 1) 

    return max_length[0] if max_length[0] != -1 else -1



SELECT
    c.customer_name,
    o.order_id,
    o.order_date,
    COUNT(DISTINCT oi.product_id) AS product_count,
    SUM(oi.quantity * oi.unit_price) AS order_total
FROM
    customers c
JOIN 
    orders o ON c.customer_id = o.customer_id
JOIN
    order_items oi ON o.order_id = oi.order_id
GROUP BY
    c.customer_name, o.order_id, o.order_date
ORDER BY
    o.order_date DESC,
    c.customer_name ASC;