# Write your MySQL query statement below
WITH CTE AS (SELECT e.id, e.name as Employee, e.Salary, e.departmentId, d.name as Department, dense_rank() over (partition by e.departmentId order by e.salary DESC) as `rank`
FROM Employee e 
INNER JOIN Department d 
ON e.departmentId = d.id
)

SELECT Department, Employee, Salary
FROM CTE
WHERE `rank` <= 3; 