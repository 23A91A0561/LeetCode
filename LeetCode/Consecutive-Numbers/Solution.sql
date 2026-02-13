1# Write your MySQL query statement below
2SELECt DISTINCT l1.num AS ConsecutiveNums
3FROM Logs l1
4JOIN Logs l2
5ON l1.id+1=l2.id AND l2.num=l1.num
6JOIN Logs l3
7ON l2.id+1=l3.id AND l3.num=l2.num