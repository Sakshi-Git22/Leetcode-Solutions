# Write your MySQL query statement below
SELECT e.unique_id , eu.name FROM Employees AS eu LEFT JOIN EmployeeUNI as e ON e.id = eu.id;